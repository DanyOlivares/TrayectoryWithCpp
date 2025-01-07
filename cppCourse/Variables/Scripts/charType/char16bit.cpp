#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    char16_t wcs[] = u"zß水🍌"; // or "z\u00df\u6c34\U0001f34c"
    size_t wcs_sz = sizeof wcs / sizeof *wcs;
    printf("%zu UTF-16 code units: [ ", wcs_sz);
    for (size_t n = 0; n < wcs_sz; ++n)
        printf("%#x ", wcs[n]);
    printf("]\n");
    unsigned char hello{'j'};
    printf("%c\n",hello);

}
