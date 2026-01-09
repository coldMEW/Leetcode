#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char *s = malloc(100 * sizeof(char)); 
scanf("%s", s);  
int length = strlen(s);
if (length > 10)
{
printf("%c%d%c",s[0],length-2,s[length-1]);
}
else if(s[0] != 4)
{printf("%s",s);}
free(s);
return 0;



}