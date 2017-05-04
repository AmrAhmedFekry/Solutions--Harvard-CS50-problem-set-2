/*
    Author: Amr Ahmed Fekry, 
    
    This file presents a solution for the caesar problem in pset2 of CS50x.
*/





#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc ,string argv[])
{
if(argc == 2){
string num = argv[1];
int i = atoi(num);
int itrate  = 0 ;
printf("plaintext: \n");
string plaintext = get_string();
int plain_count = strlen(plaintext) ;
char alphabet[] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

for (int j = 0 ; j<plain_count ; j++){
    if(isalpha(plaintext[j])){
        for (int k =  0 ;k<26 ; k++){
         if(tolower(plaintext[j]) == alphabet[k] ){
            if(k+i <= 26){
                printf("%c",alphabet[k+i]);
            }else{
                itrate = k+i - 26 ;
                printf("%c",alphabet[itrate]);
            } 
           
     }
    }
    
    }else{
        printf("%c",plaintext[j]);
    }
 
     
}







}

}
