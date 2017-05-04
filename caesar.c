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
printf("plaintext: \n");
string plaintext = get_string();
int plain_count = strlen(plaintext) ;

for (int j = 0 ; j<plain_count ; j++){
    if(isalpha(plaintext[j])){
    if(islower(plaintext[i])){
    printf("%c", ((((plaintext[j] - 97)+i)%26)+97));
    }else {
        printf("%c", ((((plaintext[j] - 65)+i)%26)+65));

    } 
    
    }else{
        printf("%c",plaintext[j]);
    }
 
    printf("\n");
}







}

}
