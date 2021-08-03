// program to read a sentence. then count number of words in sentence

#include<stdio.h>
void main()
{
    int count = 0,i;
    char str[200];
    printf("\n Enter a String: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        count++;
        i++;
    }
    printf("\n The total count of word is %d",count+1);
}
