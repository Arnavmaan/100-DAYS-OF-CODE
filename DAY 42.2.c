//Count vowels and consonants in a string.
#include<stdio.h>
#include<ctype.h>
int main(){
    char arr[100];
    printf("enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    int count_vowel = 0;
    int count_consonants =0;
    int ch ;
    for(int i=0;arr[i]!='\0';i++){
        ch = arr[i];
        if(isalpha(ch)){
    if(ch =='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
       count_vowel++;
    }else{
        count_consonants++;
    }
}
    }
    printf("number of vowels in string is %d\n",count_vowel);
    printf("number of consonants in string is %d",count_consonants);
    
    return 0;
}