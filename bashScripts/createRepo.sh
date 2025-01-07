createRepo(){
    # Take the repo as a parameter
    repoName=$1

    # If it doesn't exists, then just ask for it
    dirName=`basename $(pwd)`
    if [ "${repoName}" = "" ]; then
        echo "Input the name of the repo:"
        read dirName
    fi

    ##############################################################
    #
    # Credentials
    # If you dont have configured just create access tokens here
    # https://github.com/settings/tokens
    # After this, input the credential in this way
    # git config --global user.email "xxx@yahoo.com"
    # git config --global user.name "xxxx"
    # git config github.token "xxxx"
    #
    ##############################################################

    username=`git config github.user`
    token=`git config github.token`

    # Creating repository

    echo -n "Creating Github repository '$repoName' ..."
    curl -u "$username:$token" https://api.github.com/user/repos -d '{"name":"'$repoName'", "private": "false"}' > /dev/null 2>&1
    echo " done."

    # Pushing commits and adding Readme
    echo -n "Pushing local code to remote ..."
    echo "# First commit" >> README.md
    git init
    git add .
    git commit -m "first commit"
    git branch -M main
    git remote add origin git@github.com:$username/$repoName.git
    git push -u origin main 
    echo " done."
    
}