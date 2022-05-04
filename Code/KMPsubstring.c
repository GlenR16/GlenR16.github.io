#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void computeLPS(char pattern[], int m, int lps[]);
void KMPSearch(char pattern[], char text[]);
int main()
{
char txt[] = "ABABDABABCABABABACDABABCABAB";
char pat[] = "ABABCABAB";
KMPSearch(pat, txt);
return 0;
}
void KMPSearch(char pattern[], char text[]){
int m = strlen(pattern);
int n = strlen(text);
// create lps[] that will hold the longest prefix suffix
// values for pattern
int lps[m];
//preprocess the pattern
computeLPS(pattern, m , lps);
int i=0, j=0;
//text, pattern
while (i<n)
{
if(text[i]==pattern[j]){
i++;
j++;
}
if(j==m){
printf("Found pattern at index: %d\n",i-j);
j = lps[j-1];
}
//in case of mismatch
else if(i<n && pattern[j]!=text[i]){
if(j!=0)
j = lps[j-1];
else
i++;
}
}
}
void computeLPS(char pattern[], int m, int lps[]){
//length of previous longest prefix suffix
int len = 0;
lps[0] = 0;
int i=1;
while(i<m){
if(pattern[i] == pattern[len]){
len++;
lps[i]=len;
i++;
}
else{ // (pat[i] != pat[len])
if(len!=0)
len = lps[len-1];
else{
lps[i]=0;
i++;
}
}
}
}