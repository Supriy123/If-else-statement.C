//If else statements
#include<stdio.h>
int main() 
{
    int rating;
    printf("How likely you would like to rate our pizza on a scale of five?\n");
    printf("Reply with a number from 0 to 5,whele 0 is least likely and 5 is most likely.\n");
    printf("Enter your rating:");
    scanf("%d",&rating);

    if(rating==0)
    printf("You had very poor experience,we will call you shortly to know what went wrong.\n");
    else if(rating==1)
    printf("you had poor experience,we will call you shortly to know what went wrong.\n");
    else if(rating==2)
    printf("Thank you for your feedback,we will call you shortly to know what went wrong.\n");
    else if(rating==3)
    printf("Thank you for your feedback,we are constantly working to improve pizza quality.\n");
    else if(rating==4 || rating==5)
    printf("Thank you for your feedback,we would love to serve you again.\n");
    else
    printf("Invalid Input.");

    return 0;
}