
%{
int a_count = 0;
%}
%%
a   { a_count++; }
b   {  }
%%
int main() {
return yyparse();
}
int yywrap() {
printf("%d\n", a_count);
return 1;
}