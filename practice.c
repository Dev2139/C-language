//#include<stdio.h>
//int main(){
//    int i;
//    for(i=1;i<=10;i++){
//        printf("%d\n",i);
//    }
//}
________________________________________
// the cube of all numbers in series
//int main(){
//    int num;
//    printf("how much number do you want in series:");
//    scanf("%d",&num);
//    int i;
//    for(i=1;i<=num;i++){
//        printf("the cube of %d is %d\n",i,i*i*i);
//    }
//}
____________________________________________
//calculate avrage
//int main() {
//    int s_num;
//    int e_num;
//    printf("what is your starting number:");
//    scanf("%d",&s_num);
//    printf("what is your ending number:");
//    scanf("%d",&e_num);
//    int range = e_num - s_num;
//    int i;
//    int sum = 0 ;
//    float avg = 1;
//    for(i=s_num;i<=e_num;i++){
//        sum+=i;
//        float avg = sum/(range);
//        printf("%f\n",avg);
//    }
//    
//}// error
_________________________________________
//int main() {
//    int num;
//    printf("How many numbers do you want?: ");
//    scanf("%d", &num);
//    int i;
//    int sum = 0;
//    for (i = 1; i <= num; i++) {
//        sum += i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
______________________________________
//table of any number using for loop
//int main(){
//    int num;
//    printf("which numbers table do you want:");
//    scanf("%d",&num);
//    int i =0;
//    for(i=1;i<=10;i++){
//        printf("%d*%d=%d\n",num,i,num*i);
//    }
//}
_____________________________________________________
//multiplication table
//int main() {
//    int num1;
//    int num2;
//    printf("Enter first number: ");
//    scanf("%d", &num1);
//    printf("Enter second number: ");
//    scanf("%d", &num2);
//    int i;
//    for (i = 1; i <= num1; i++) {
//        int j;
//        for (j = 1; j <= num2; j++) {
//            printf("%d*%d=%d\n", i, j, i * j);
//        }
//        printf("\n"); 
//    }
//    return 0;
//}
________________________________________________________________________________
// 1. Hello World Program
// Write a program to print "Hello, World!" on the screen.

//#include <stdio.h>
//
//int main() {
//    // Write C code here
//    printf("Hello, world!");
//
//    return 0;
//}

_________________________
// 2. Sum of Two Numbers
// Write a program to find the sum of two numbers the user enters.
//int main() {
//    int A;
//    int B;
//    printf("enter your first number:");
//    scanf("%d",&A);
//    printf("enter your seecond numberL:");
//    scanf("%d",&B);
//    int C = A + B ;
//    printf("sum of given two number is %d",C);
//    
//
//    return 0;
//}
______________________________
/*3. Largest of Two Numbers
Write a program to find the largest of two numbers.*/
//int main() {
//    int A;
//    int B;
//    printf("enter your first number:");
//    scanf("%d",&A);
//    printf("enter your seecond numberL:");
//    scanf("%d",&B);
//    if(A>B){
//        printf("%d is greater than %d",A,B);
//    }else if(A==B){
//        printf("Both are same numbers");
//    }else{
//        printf("%d is greater than %d",B,A);
//    }
//    
//
//    return 0;
//}
_________________________________
// 4. Even or Odd
// Write a program to check whether a given number is even or odd.
//int main() {
//    int A;
//    printf("enter any number:");
//    scanf("%d",&A);
//    if(A%2==0){
//        printf("this number is even number");
//    }else{
//        printf("this is an odd number");
//    }
//
//
//    return 0;
//}
_________________________________________
// 5. Factorial of a Number
// Write a program to calculate the factorial of a given number.
//int main() {
//    int A;
//    printf("enter any number:");
//    scanf("%d",&A);
//    int fact = 1;
//    int i;
//    for(i=1;i<=A;i++){
//        fact*=i;
//    }printf("the factorial of %d is %d",A,fact);
//
//
//    return 0;
//}
____________________________________________
// 9. Prime Number Check
// Write a program to check whether a given number is prime.
//int main(){
//    int A;
//    printf("enter any number:");
//    scanf("%d",&A);
//    if(A<=1){
//        printf("it is not a prime number");
//    }else{
//        int i;
//        for(i=2;i<=A;i++){
//            if(A%i==0){
//                printf("it is not a prime number.");
//            }else{
//                printf("it is a prime number.");
//            }
//        }
//    }
//}
________________________________________________
// 13. Leap Year Check
// Write a program to check whether a given year is a leap year.
//int main(){
//    int year;
//    printf("enter any year:");
//    scanf("%d",&year);
//    if((year%4==0 && year%100!=0) || year%400==0){
//        printf("it is a leap year");
//    }else{
//        printf("it is not a leap year");
//    }
//}
_________________________________________________
// 14. Simple Calculator
// Write a program to create a simple calculator that can add, subtract, multiply, and divide two numbers.
//int main(){
//    int A;
//    int B;
//    printf("enter your first number:");
//    scanf("%d",&A);
//    printf("enter your second number:");
//    scanf("%d",&B);
//    int opr;
//    printf("select the operator (type 1,2,3,4 for +,-,*,/ respectively: ");
//    scanf("%d",&opr);
//    if(opr= 1){
//        printf("%d",A+B);
//    }else if(opr=2){
//        printf("%d",A-B);
//    }else if(opr=3){
//        printf("%d",A*B);
//    }else if(opr=4){
//        printf("%d",A/B);
//    }else{
//        printf("enter a valid operator");
//    }
//}
__________________________________________________
// 20. Swap Two Numbers Using Third Variable
// Write a program to swap two numbers using a third variable.
//int main(){
//    int A;
//    printf("enter any number:A=");
//    scanf("%d",&A);
//    int B;
//    printf("enter secod number:B=");
//    scanf("%d",&B);
//    int temp;
//    temp = A;
//    A = B;
//    B = temp;
//    printf("swapping the value\n");
//    printf("A=%d\n",A);
//    printf("B=%d",B);
//}
__________________________________________________
// 21. ASCII Value of a Character
// Write a program to find and print the ASCII value of a character.
//int main(){
//    char ch;
//    printf("enter any character:");
//    scanf("%c",&ch);
//    printf("\nthe ascii value of the above variable is %d",ch);
//}
___________________________________________________
// 23. Convert Fahrenheit to Celsius
// Write a program to convert temperature from Fahrenheit to Celsius.
//int main(){
//    float F;
//    printf("enter temprature in fahrenheit:");
//    scanf("%f",&F);
//    float C = ((1.8*F)+32);
//    printf("%.1f degree celcius",C);
//}
____________________________________________________
// 22. Convert Celsius to Fahrenheit
// Write a program to convert temperature from Celsius to Fahrenheit.
//int main(){
//    float C;
//    printf("enter temprature in Celcius:");
//    scanf("%f",&C);
//    float F = ((9/5*C)+32);
//    printf("%.1f degree Fahrenheit",F);
//}
___________________________________________________
// 25. Check Vowel or Consonant
// Write a program to check whether a given character is a vowel or consonant.
//int main(){
//    char ch ;
//    printf("enter any character in lower case:");
//    scanf("%c",&ch);
//    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//        printf("it is a vowel\n");
//    }else{
//        printf("it is a consonant");
//    }
//}
____________________________________________________
// 26. Check Alphabet, Digit, or Special Character
// Write a program to check whether a character is an alphabet, digit, or special character.
//int main(){
//    int A = '1';
//    printf("\nthe ascii value of the given variable is:%d\n",A);
//    if(A>=48 && A<=57){
//        printf("it is a digit\n");
//    }else if ((A>=65 && A<=90)||(A>=97 && A<=122)){
//        printf("it is an alphabet");
//    }else if ((A>=32 && A<=47)||(A>=58 && A<=64) || (A>=91 && A<=96)|| (A>=123 && A<=126)){
//        printf("it is a special character");
//    }
//}
__________________________________________________
//int main(){
//    int A;
//    int B;
//    printf("ente your starting number:");
//    scanf("%d",&A);
//    printf("ente your ending number:");
//    scanf("%d",&B);
//    int i;
//    for(i=A;i<=B;i++){
//        int j;
//        for(j=i;j<=B;j++){
//            if(j%i!=0){
//                printf("%d\n",j);
//            }
//        }
//    }
//}
____________________________________________________
// 18. String Reverse
// Write a program to reverse a string.
//#include <stdio.h>
//#include <string.h>
//int main(){
//    char str[] = "hello";
//    int i;
//    for(i=strlen(str);i>=0;i--){
//        printf("%c",str[i]);
//    }
//}
___________________________________________________
// 6. Reverse a Number
// Write a program to reverse a given integer.
//#include <stdio.h>
//#include <string.h>
//int main(){
//    char str[] = "12";
//    int i;
//    for(i=strlen(str);i>=0;i--){
//        printf("%c",str[i]);
//    }
//}
___________________________________________________
// 8. Sum of Digits
// Write a program to find the sum of digits of a given number.
//#include <stdio.h>
//#include <string.h>
//int main(){
//    char str[] = "123";
//    int i;
//    int sum = 0;
//    for(i=1;i<=strlen(str);i++){
//        sum +=i;
//        
//    }printf("sum of digits:%d",sum);
//}
____________________________________________________
// 7. Palindrome Check
// Write a program to check whether a given number is a palindrome.
//#include <stdio.h>
//int main() {
//    int num, originalNum, reversedNum = 0;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//    originalNum = num;
//    while (num > 0) {
//        reversedNum = reversedNum * 10 + num % 10;
//        num /= 10;
//    }
//    if (originalNum == reversedNum) {
//        printf("%d is a palindrome.\n", originalNum);
//    } else {
//        printf("%d is not a palindrome.\n", originalNum);
//    }
//}
---------------------------------------------------
// 10. Fibonacci Sequence
// Write a program to print the Fibonacci sequence up to a given number of terms
//#include <stdio.h>
//
//int main() {
//    int n, 
//    int t1 = 0; 
//    int t2 = 1;
//    int nextTerm;
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//    printf("Fibonacci Sequence: ");
//    for (int i = 1; i <= n; ++i) {
//        printf("%d ", t1);
//        nextTerm = t1 + t2;  
//        t1 = t2;             
//        t2 = nextTerm;       
//    }
//}
-----------------------------------------------------
// 11. GCD of Two Numbers
// Write a program to find the greatest common divisor (GCD) of two numbers.
//#include <stdio.h>
//int main() {
//    int num1, num2, gcd;
//    printf("Enter first integers: ");
//    scanf("%d", &num1);
//    printf("enter second integer:");
//    scanf("%d",&num2);
//    while (num2 != 0) {
//        int remainder = num1 % num2;
//        num1 = num2;
//        num2 = remainder;
//    }
//    gcd = num1;
//    printf("GCD of the given numbers is: %d\n", gcd);
//
//}
----------------------------------------------------
// 12. LCM of Two Numbers
// Write a program to find the least common multiple (LCM) of two numbers.
//#include <stdio.h>
//int main() {
//    int num1;
//    int num2;
//    int gcd; 
//    int lcm;
//    printf("Enter first integers: ");
//    scanf("%d", &num1);
//    printf("enter second integer:");
//    scanf("%d",&num2);
//    int a = num1; 
//    int b = num2;
//    while (b != 0) {
//        int remainder = a % b;
//        a = b;
//        b = remainder;
//    }
//    gcd = a;
//    lcm = (num1 * num2) / gcd;
//    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
//}
----------------------------------------------------
//15. Sum of Array Elements
//Write a program to find the sum of all elements in an array.
int main(){
    float arr[]={4,3,2,1,7,8,6};
    int s = sizeof(arr);
    int length = s/sizeof(arr[0]);
    int sum = 0;
    int i;
    for(i=0;i<length;i++){
        sum+=arr[i];
    }printf("%d",sum);
}
