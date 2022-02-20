#include<stdio.h>
int main()
{
 int score;
 char grade;
 char A,B,C,D,E;
 printf("ENTER THE VALUES");
 scanf("%d",&score);
 if(score>=90)
 {
 printf("grade A");
 }
 else if(score>=80)
 {
 printf("grade B");
 }
 else if(score>=70)
 {
 printf("grade C");
 }
 else if(score>=60)
 {
 printf("grade D");
 }
 else
 {
 printf("grade E");
 }
 }
