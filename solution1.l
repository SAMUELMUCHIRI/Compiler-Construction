
%{
#include<stdio.h>
#include<ctype.h>
int count;
%}
%%
[a] {count++;}
[a-zA-Z]+ {printf("%s",yytext);}

%%
int yywrap(){
printf(count);
return 1;
}
int main(){
yylex();
return 0;
}
