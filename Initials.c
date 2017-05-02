/**
  *
  * Initials.c
  *
  * Amr Ahmed Fekry
  *
  *program that, given a person’s name, prints a person’s initials.
  *
  */


#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main (void){
    
    string s = get_string();
    int n = strlen(s) ; 
    
    for ( int i = 0 ;i<n ;  i++){
     if( i ==0 ){
         printf("%c",s[i]);
     }
     if (s[i] == ' '){
         printf("%c",s[i+1]);
     }
     
     
    }
    
    
    
}
