/*
    Author: Amr Ahmed fekry, amrahmedfekry@outlook.com
    
    This file presents a solution for the Vigenère problem in pset2 of CS50x.
*/
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc ,string argv[])
{
bool keySuccessful = false;
string key  ="";
char alphabet[] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int key_count ;
int t ;
do
    {
        if(argc != 2)
        {
            printf("You didn't submit a valid encryption key.\n");
            printf("Please check your input and re-run the programm.\n");
            printf("We require an integer as encryption key.\n");
            return 1;
        }
        else
        {
            key = argv[1];
            key_count = strlen(key) ;
            int count = 0 ;
            int index_key[key_count];
            int index = 0;
            for (int i = 0 ;i<key_count ;i++){
                if(isalpha(key[i])){
                    for(int g = 0 ;g<26;g++){
                        if(key[i] == alphabet[g]){
                            index_key[index] = g;
                            index++;
                        }
                    } 
                    count++ ;
                }
                
            }
            
            if(count == key_count){
             keySuccessful = true;
            printf("plaintext: ");
            string plaintext = get_string();
            int plaintext_count = strlen(plaintext);
            int space = 0 ;
            int new_u ;
            int y ;
            for (int u = 0 ; u < plaintext_count ;u++){
               if(isalpha(plaintext[u])){
                   new_u = u-space ;
                if(new_u > key_count || new_u == key_count){
                  y = new_u %key_count ;
                 t =index_key[y];
                }
                else{
                    
                    t =index_key[new_u];
                }   
                if(islower(plaintext[u])){
                printf("%c", ((((plaintext[u] - 97)+t)%26)+97));

                }else {
                 printf("%c", ((((plaintext[u] - 65)+t)%26)+65));
                  } 
    
               }else{
               printf("%c",plaintext[u]);
               space++ ;
               }
           
             
             }
            }else{
            printf("You didn't submit a valid encryption key.\n");
            printf("Please check your input and re-run the programm.\n");
            printf("We require an integer as encryption key.\n");
            return 1;
            }
        }
    } while(!keySuccessful);









}
