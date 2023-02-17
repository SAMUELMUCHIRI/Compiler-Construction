/* CFG For our simple calculator:
     E- EAE
     E- (E)
     E- number
     A- +
     A- *
*/
     
#include <stdio.h>
#include <stdlib.h>

int E();
int EAE();
int E_();
int number();
int A();

char *ip;
char string[50];
int main()
{
    int i;
    printf("Enter the string:\n");
    scanf("%s",string);
    ip=string;
    printf("\n\nInput\tOutput\n");
    printf("%s\t%d\n",string,E());
}
int E()
{
    return(EAE());
}
int EAE()
{
    int temp=E_();
    if(*ip=='+')
    {
        ip++;
        return(temp+EAE());
    }
    else if(*ip=='*')
    {
        ip++;
        return(temp*EAE());
    }
    else
        return(temp);
}
int E_()
{
    if(*ip=='(')
    {
        ip++;
        int temp=E();
        if(*ip==')')
        {
            ip++;
            return(temp);
        }
        else
            exit(0);
    }
    else
        return(number());
}
int number()
{
    int val=0;
    while((*ip>='0' && *ip<='9'))
    {
        val=(val*10)+(*ip-'0');
        ip++;
    }
    return val;
}
