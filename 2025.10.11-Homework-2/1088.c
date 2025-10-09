#include <stdio.h>
//#include <math.h>
 
int abs(int a){
    return (a > 0)?a:-a;
}
 
int main(int argc, char ** argv){
    char l1 = 'A';
    char l2 = 'B';
    int c1 = 0;
    int c2 = 0;
    int counter = 0;
    scanf("%c%d %c%d", &l1, &c1, &l2, &c2);
     
    int delta = abs(l2-l1);
    // ЛАДЬЯ ЛАДЬЯ ЛАДЬЯ ЛАДЬЯ   
    if ( (l1 == l2) || (c1 == c2) ){                     
        printf("Rook\n");
        counter += 1;
    }
    // ПЕШКА ПЕШКА ПЕШКА ПЕШКА
    if ( (c1 != 2) && (c2 - c1 == 1) && (l1 == l2) && (c1 != 1) ) {                  
        printf("Pawn\n");
        counter += 1;
    }
    else if( (c1 == 2) && ( (c2 == 3) || (c2 == 4) ) && (l1 == l2) ){
        printf("Pawn\n");
        counter += 1;
    }
    // СЛОН СЛОН СЛОН СЛОН СЛОН СЛОН
    if (delta == abs(c2 - c1)){
        printf("Bishop\n");
        counter += 1;
    }
     
    //ФЕРЗЬ ФЕРЗЬ ФЕРЗЬ ФЕРЗЬ ФЕРЗЬ
    if ( (delta == abs(c2 - c1) ) || (l1 == l2) || (c1 == c2) ){
        printf("Queen\n");
        counter += 1;
    }
    // КОНЯШКА КОНЯШКА КОНЯШКА КОНЯШКА
     
    if ( ((delta == 2) && (abs(c2 - c1) == 1)) || ((delta == 1) && (abs(c2 - c1) == 2)) ){
        counter += 1;
        printf("Knight\n");
    }
     
    // КОРОЛЕВИШНА КОРОЛЕВИШНА КОРОЛЕВИШНА КОРОЛЕВИШНА под вопросом
    if(((delta == 1) && (c1 == c2)) || ((delta ==0) && abs(c1 - c2) == 1) || ((abs(c1-c2) == 1) && (delta == 1)) ){
        printf("King\n");
        counter += 1;
    }
     
    if (counter == 0){
        printf("Nobody\n");
    }
    //printf("PROVERKA");
    //printf("%d", l2 - l1);
    return 0;
}
