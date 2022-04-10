#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#include <time.h>
#include <process.h>

void print() {
	
	printf("WELCOME TO MARIO WINGM.......  (press any key to continue)\n");
	getch();
	system ("cls");
	printf("\v\tGame instructions:\n");
	printf("\n-> Use arrow keys to move the MARIO WINGM.\n\n");
	printf("\n\nPress any key to play game...");
	
	if(getch()==27)
		exit(0);
}

void load() {
	
    int row,col,r,c,q;
    
    printf("loading...");
    
	for(r=1;r<=20;r++){
  	  for(q=0;q<=100000000;q++);//to display the character slowly
  		  printf("%c",177);}
    
	getch();
}

int main() {
	
	print() ;
	system("cls");
	load() ;

}

