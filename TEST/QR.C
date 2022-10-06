    #include<stdio.h>
#include<string.h> 
void print(char s[]) { 
int ln = strlen(s);  
char temp[ln]; 
for (int i = 0; i < ln; i++) { 
    int j = i; 
    int k = 0; 
    while (s[j] != '\0') { 
        temp[k] = s[j]; k++; j++; 
        
    }  
    j = 0; 
    while (j < i) { 
        temp[k] = s[j]; 
        j++; 
        k++;
    }
}