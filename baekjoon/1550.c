#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char hexaDecimal[6];
    
    int result;
    
    scanf("%s", hexaDecimal);
    
    // cf. https://dojang.io/mod/page/view.php?id=386
    result = strtol(hexaDecimal, NULL, 16);
    
    printf("%d", result);
    
    return 0;
}
