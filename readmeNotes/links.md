# Links

You can use links in very efficient ways, to refer to webpages or the same content in your page, like in this way:

## Webpages.

Just enclose the word you need to be the link in brackets and next to, enclose the url in parentheses.

**Usage**  
```markdown
[click here](https://www.google.com/)
```

**Preview**  
[click here](https://www.google.com/)

## Images  
You can choose between images from web or local images. 

#### Local

First of all, you need to include the symbol ! at the beginning of the line, this will indicate markdown to rendereize an image, then, you need to use an identifier to the image inside brackets, and finally, use brackets to indicate the location of the image in your computer, indicating the route since the directory you are writing the code.

**Usage**  

```markdown
![cppLogo](./Images/cppLogo.png)
```

In this case, if we use the renderizing directly, it will display a very big image (for the resolution), in this cases you can use syntax of html and resizing there, like this:

```html
<img src="./Images/cppLogo.png" width="300" height="300" alt="">
```

**Preview** 

<img src="./Images/cppLogo.png" width="200" alt="">

#### Web
**Usage**  
You'll do the same as the local syntax with the exception that in the path section, It will be the url

```readme
![cppLogo](https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/300px-ISO_C%2B%2B_Logo.svg.png)
```

**Preview**  
![cppLogo](https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/200px-ISO_C%2B%2B_Logo.svg.png)


## Same page.  
You need to use the symbol '#', and this will show you (in vsCode at least), the titles you can refer it in the page.

**Usage**  
```markdown
[click here](#links)
```

**Preview**  
[click here](#links)

