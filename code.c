#include <math.h>
#include <stdio.h>


int superDigit(char* n, int k) {
       int k1,i;
    k1=k%9;
    if(k1 == 0)
        return 9;
    else
    {
        int sum=0;
        for(i=0;n[i] != '\0';i++)
            sum=(sum+n[i]-48)%9;
        if((sum*k)%9 == 0)
            return 9;
        else
            return (sum*k)%9;
     }
}

int main() {
    char* n = (char *)malloc(512000 * sizeof(char));
    int k;
    scanf("%s %i", n, &k);
    int result = superDigit(n, k);
    printf("%d\n", result);
    return 0;
}
