
%{
#include<stdio.h>
#include<ctype.h>
%}
%%
abc  {printf("ABC");}
[a-zA-Z]+ {printf("%s",yytext);}
[ \t]   ;
\n      {printf("\n");}
.       {printf("%s",yytext);}
%%
int yywrap(){
return 1;
}
int main(){
yylex();
return 0;
}
