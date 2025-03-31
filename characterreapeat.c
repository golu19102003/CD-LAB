#include<stdio.h>
int main(){
FILE *fp;
char str[100],ch;
int count[26] = {0},i;
// clrscr();
printf("Enter the string \n");
fp = fopen("C:\\TURBOC3\\BIN\\test9.txt", "w");
fgets(str,sizeof(str),stdin);
fprintf(fp,"%s",str);
fclose(fp);
fp = fopen("C:\\TURBOC3\\BIN\\test9.txt", "r");
while((ch = getc(fp)) != EOF) {
if(ch >= 'a' && ch<= 'z'){
count[(ch-'a')]++;
}}
fclose(fp);
for(i = 0; i<26; i++){
printf("%c occured in file %d times \n ",'a' + i,count[i]);
}
return 0;
}