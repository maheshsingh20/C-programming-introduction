/*IF ELSE STATEMENT*/
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("a is greater than b");
//     }
//     else
//     {
//         printf("b is greater than a");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     printf("You have Entered %d as your age\n",age);
//     if(age>18)
//     {
//          printf("\nYou are eligible to watch the vedio!!\n");
//     }
//     else
//     {
//         printf("\aYou are not eligible to watch the vedio!!");
//     }
// }


/*ELSE IF*/
// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     if(age>18)
//     {
//     printf("\nYou are eligible to watch the vedio!!\n");}
//     else if(age==18){
//         printf("\nYou are now eligible to watch the vedio!!\n");
//     }
//     else{
//         printf("You are not eligible!!");
//     }
//     return 0;

//     }


/*Task to print*/
// #include <stdio.h>
// int main(){
//     int maths, science;
//     printf("Enter the marks: ");
//     scanf("%d%d",&maths,&science);
//     if(maths>=50 && science>=50)
//     {
//         printf("\nYou are getting 30 marks as bonus");
//     }
//     else if(science>=50 || maths>=50)
//     {
//         printf("You are getting 20 marks as bonus");
//     }
//     else
//     {
//         printf("You are not getting any marks as bonus");
//     }
//     return 0;
//     }

// #include <stdio.h>
// int main(){
//     float marks;
//     printf("Enter the marks: ");
//     scanf("%f",&marks);
//     if(marks>=90 && marks<=100){
//         printf("\nGrade A");
//     }
//     else if(marks>=80 && marks<90){
//         printf("\nGrade B");
//     }
//     else if(marks>=70 && marks<80){
//         printf("\nGrade C");
//     }
//     else if(marks>=60 && marks<70){
//         printf("\nGrade D");
//     }
//     else{
//         printf("\nGrade F");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     switch(a){
//         case 1:
//         printf("\n value of a is 2");
//         break;
//         case 2:
//         printf("\n value of a is 2\n");
//         break;
//         case 3:
//         printf("\nvalue of a is 3");
//         break;
//         default:
//         printf("value of a is %d",a);
//         break;
//     }
//     return 0;
// }


/*LOOPS IN C*/

// #include <stdio.h>
// int main(){
//     int a;
//     for(a=1;a<=10;a++){
//         printf("%d\n",a);
//     }
//     return 0;
// }


#include <stdio.h>
int main(){
    int a;
    for(a=10;a>=1;a--){
        printf("%d\n",a);
    }
    return 0;
    }