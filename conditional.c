//1.positive or negative or zero
#include <stdio.h>
int main() {
    int i;
    scanf("%d",&i);
    if(i>0){
        printf("positive");
    }
    else if(i<0){
        printf("negative");
    }
    else{
        printf("zero");
    }

    return 0;
}

//2. even or odd
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}

//3. divisible by 5 or not
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("number is divisible 5");
        
    }else{
        printf("not divisible by 5");
    }
}

//4. greatest  two numbers
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greater",a);
    }
    else if(b>a){
        printf("%d is greater",b);
    }
    else{
        printf("zero");
    }

//5.leap year
#include <stdio.h>
int main() {
  int year;
  scanf("%d",&year);
  if((year%400==0)&&(year%100!=0)||(year%4==0)){
      printf("leap year");
  }
  else {
      printf("not leap year");
  }

    return 0;
}


//6.vowel or consonant
# include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
}

//7. alphabet,digits,or special character
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z')){
        printf("alphabet");
    }
    else if((ch>0)&&(ch<9)){
        printf("digit");
    }
    else{
        printf("special character");
    }
    
}


//8.mutiple of 3 and 7
#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%3==0){
        printf("divisible by 3");
    }
    else if(i%7==0){
        printf("divisible by 7");
    }
    else{
        printf("not divisible by 3 and 7");
    }
}

//9.voting eligiblity
#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("eligible to vote");
    }
    else{
        printf("not eligible to vote");
    }
}

//10.largest three number
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b) && (a>c))
    {
        printf("%d is largest",a);
    }
    else if((b>a) &&(b>c))
    {
        printf("%d is largest",b);
    }
    else{
    printf("%d is largest",c);
    }
 }

//11.check three digit number
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
        if(num>=100 && num<=999)
        {
            printf("three-digit number");
        }
        else{
            printf("none");
        }
    
}

//12.grade calculation

#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark>=75 && mark<90){
        printf("grade B");
    }
    else{
        printf("grade c");
    }
}

//13.uppercase or lowercase

#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
    {
        printf("lowercase");
    }
    else{
        printf("uppercase");
    }
}

//14.divisible by 11
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%11==0){
        printf("divisible by 11");
    }
    else{
        pritnf("not divisible by 11");
    }
}

//15.equilateral triangle
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c)){
        printf("equilateral");
    }
    else{
        printf("not equilateral");
    }
}

//16.Number Within Range
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if((num>=10) &&(num<=20)){
        printf("num is within the range");
    }
    else{
        printf("without the range");
    }
}

//17.Electricity Bill
#include <stdio.h>
int main() {
   int units=120;
    int bill;
    if (units<=50) {
        bill=units* 3;
    }
    else if (units <= 100) {
        bill = (50*3) + ((units-50)*5);
    }
    else {
        bill=(50*3)+(50*5)+((units-100)*10);
    }
    printf("Bill amount=Rs. %d",bill);

    return 0;
}

//18.valid triangle
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)==180){
        printf("valid triangle");
    }
    else{
        printf("not valid");
    }
}

//19.Digit Using ASCII
#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if((ch>=1)&&(ch<=10)){
        printf("Digits");
    }
    else{
        printf("not digits");
    }
}

//20.Smallest Using Ternary Operator
#include<stdio.h>
int main(){
    int a,b,num;
    scanf("%d%d",&a,&b);
    num=(a<b)?a:b ;
        printf("%d is smallest");
    
}

//21.Simple Calculator (Switch)
#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch(op){
        case'+':
        printf("%d", a+b);
        break;
        default:
        printf("invalid operator");
    }
        
}

//22.Day of Week
#include<stdio.h>
int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case(3):
        printf("wednesday");
        break;
        default:
        printf("invalid");
    }
    
}

//23.Days in a Month
#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch(month){
        case(2):
        printf("28 or 29 days");
        break;
        default:
        printf("invalid");
    }
    
}

//24.Vowel Using Switch

# include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case'a':
        printf("vowel");
        break;
        case'e':
        printf("vowel");
        break;
        case'i':
        printf("vowel");
        break;
        case'o':
        printf("vowel");
        break;
        case'u':
        printf("vowel");
        break;
        default:
        printf("consonant");
    }
}

//25.Menu-Driven Program
#include <stdio.h>

int main() {
    int a,b,sum;
    scanf("%d",&sum);
    scanf("%d",&a,&b);
    switch(sum){
        case 1:
        printf("%d",a+b);
        break;
        default:
        printf("invalid");
        
    }
}




