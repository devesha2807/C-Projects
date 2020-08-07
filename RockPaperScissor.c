#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rock_paper_scissor(char you, char cpu){

// this is for draw condition
    if(you == cpu){
        return 0;
    }
    
// Here are cases covered
// rock - paper 
// rock - scissor 
// scissor - paper 

    if(you=='r' && cpu=='p'){
        return -1;
    }
    else if(you=='p' && cpu=='r'){
        return 1;
    }

    if(you=='r' && cpu=='s'){
        return 1;
    }
    else if(you=='s' && cpu=='r'){
        return -1;
    }

    if(you=='p' && cpu=='s'){
        return -1;
    }
    else if(you=='s' && cpu=='p'){
        return 1;
    }

}
int main(){
    char you, cpu;
    
    // this is to generate random throws for the cpu
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        cpu = 'r';
    }
    else if(number>33 && number<66){
        cpu ='p';
    }
    else{
        cpu ='s';
    }
    
    printf("Enter 'r' to throw ROCK, 'p' to throw PAPER and 's' to throw SCISSOR \n");
    scanf("%c", &you);
    
    int result = rock_paper_scissor(you, cpu);
    if(result ==0){
        printf("It's a DRAW!\n");
    }
    else if(result==1){
        printf("You WIN!:+)\n");
    }
    else{
        printf("You LOSE!:-(\n");
    }
    printf("You thrown %c and computer thrown %c. ", you, cpu);
    return 0;
}