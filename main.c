#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
     int   ID; 
     char   name[10]; 
     double grade;
 }; 
 
void main (void) { 
     struct student s1 = {24, "sojeong", 4.3}; 
     s.ID = 123456;
     strcpy(s.name, "Juyeop");
     s.grade = 4.2; 
  
printf("ID : %d\n", s.ID); 
printf("name : %s\n", s.name); 
printf("grade : %f\n", s.grade); 
}
