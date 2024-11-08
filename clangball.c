#include <stdio.h>
#include <unistd.h>



//------------------------------------------------------
void clrscr(void)
	{
    system("clear");
	}
//------------------------------------------------------
void gotoxy(int x, int y) 
    { 
         //printf("\033[%d;%df", x, y) ; 
         printf("%c[%d;%df", 0x1B, y, x);
    } 
//------------------------------------------------------     
void negyzet(int x1, int y1, int x2, int y2)
	{
     int x,y;
     for(x=x1;x<x2;x++) {
						gotoxy(x,y1);printf("*");
						gotoxy(x,y2);printf("*");
						}
	 for(y=y1;y<y2;y++) {
						gotoxy(x1,y);printf("*");
						gotoxy(x2,y);printf("*");
						}
	}
//------------------------------------------------------    
         
         
//------------------------------------------------------


int main(int argc, char **argv, int m)

    { 
		 clrscr();
         
         gotoxy(0,0) ;
         negyzet(1,1,50,20);
         
         for(m=2;m<20;m++){ 
         gotoxy(25,m);  
             printf ("*\n");
             usleep(100000);}
  
  

          
         return 0; 
    } 
    
	
