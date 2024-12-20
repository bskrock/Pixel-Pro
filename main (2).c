#include<stdio.h>
void indian();
void french();
void spain();
int main(){
    char country;
 printf("Enter first digit of country name :  ");
 scanf("%c",&country);
 if(country == 'i'){
     indian();
 }else if(country == 'f'){
     french();
 }else if(country == 's'){
     spain();
 }else{
     printf("Your country soon to be registerd\n");
 }
 return 0;
}
void indian(){
    printf("NAMASTE\n");
}
void french(){
    printf("BONJOUR\n");
}
void spain(){
    printf("HOLA\n");
}