#include<stdio.h>
#include<string.h>
int main(){
    char str1[105],str2[105];
    scanf("%s%s",str1,str2);
    printf("%d\n",strcasecmp(str1,str2));
    return 0;
}

