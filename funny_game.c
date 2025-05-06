// Funny Zoo Story Generator
// Written in C, this program asks for words and creates a random zoo story.
//LoL 
//Today I went to the cool zoo.
//I saw a bald blacky Trump near the fence.
//It was deportaiting all over the place!
//It was the most cool day of my life.

#include <stdio.h>
#include <string.h>

int main(){
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";


    printf("Enter an adjective (description)");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("Enter a noun (animal/person)");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective (description)");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb (ending w/-ing)");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description)");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1] = '\0';

    printf("\nToday I went to the %s zoo.\n", adjective1);
    printf("I saw a %s %s %s near the fence.\n", adjective2, adjective3, noun);
    printf("It was %s all over the place!\n", verb);
    printf("It was the most %s day of my life.\n", adjective1);

    return 0;
}


// i got example of my program:
/*Today I went to the cool zoo.
I saw a bald blacky Trump near the fence.
It was deportaiting all over the place!
It was the most cool day of my life.*/
