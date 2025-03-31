#include<stdio.h>

#include<string.h>
int main(){
char keywords[32][10] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", 
    "int", "long", "register", "return", "short", "signed", "sizeof", "static", 
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", 
    "while", "for", "goto", "if", "else", "enum", "extern", "main"
};
char str[100];
int i,flag = 0;
printf("Enter a string ");
gets(str);
for(i = 0; i<32; i++){
if(strcmp(keywords[i],str) == 0){
flag = 1;
break;}}
if(flag == 1){
printf("Given string \t %s \t is keyword ",str);
}
else{
printf("Given string is not keyword");
}
return 0;
}