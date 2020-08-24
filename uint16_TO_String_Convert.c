#include <stdio.h>
#include <stdint.h>
void convert(char* str, uint16_t x);
int main()
{
char* str;
uint16_t x=256;
convert(str,x);
printf("Hello World %s\n",str);

return 0;
}

void convert(char* str, uint16_t x)
{
int n=0;
int tempX=x;
while(tempX/=10) n++;
for(int i=n;i>-1;i--)
{
*(str+i)=(x%10)+48;
x/=10;
}
*(str+n+1)='\0';
}
