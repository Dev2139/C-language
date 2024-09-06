//int main() {
//    
//    printf("HELLO WORLD!");
//
//    return 0;
//}
--------------------------------------------------------------------------------
//int main() {
//    int A;
//    int B;
//    printf("enter first number:");
//    scanf("%d",&A);
//    printf("enter second number:");
//    scanf("%d",&B);
//    int C = A+B;
//    printf("%d",C);
//    return 0;
//}
--------------------------------------------------------------------------------
//int main() {
//    int A;
//    int B;
//    printf("enter first number:");
//    scanf("%d",&A);
//    printf("enter second number:");
//    scanf("%d",&B);
//    if(A>B){
//        printf("%d is greater than %d",A,B);
//    }else if(A==B){
//        printf("both are same numbers");
//    }else{
//        printf("%d is greater than %d",B,A);
//    }
//    return 0;
//}
--------------------------------------------------------------------------------
//int main() {
//    int A;
//    printf("enter first number:");
//    scanf("%d",&A);
//    if(A%2==0){
//        printf("%d is an even number",A);
//    }else{
//        printf("%d is an odd number",A);
//    }
//    return 0;
//}
--------------------------------------------------------------------------------
//int main() {
//    int A;
//    printf("which number's factorial do you want?");
//    scanf("%d",&A);
//    int fact = 1;
//    int i;
//    for(i=A;i>=1;i--){
//        fact*=i;
//    }printf("the factorial of %d is %d",A,fact);
//    return 0;
//}
--------------------------------------------------------------------------------
//int main() {
//    int num;
//    printf("enter a number:");
//    scanf("%d",&num);
//    int org = num;
//    int rem;
//    int rev = 0;
//    while(num!=0){
//        rem = num%10;
//        rev=rev*10+rem;
//        num/=10;
//    }printf("the reverse of %d is %d",org,rev);
//    return 0;
//}
--------------------------------------------------------------------------------
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char A[] = "hello";
//    int len = strlen(A);
//    int i;
//    
//    for(i=len-1;i>=0;i--){
//        printf("%c",A[i]);
//    }
//}
--------------------------------------------------------------------------------
//int main() {
//    int num;
//    printf("enter any number:");
//    scanf("%d",&num);
//    int org = num;
//    int rem;
//    int rev = 0;
//    int is_palindrome=1;
//    while(num!=0){
//        rem = num%10;
//        rev = rev*10+rem;
//        num/=10;
//    }if(rev==org){
//        printf("it is a palindrome number");
//    }else{
//        printf("it is not a palindrome number");
//    }
//}
--------------------------------------------------------------------------------
//int main(){
//    int num;
//    printf("enter any number:");
//    scanf("%d",&num);
//    int i=num;
//    int sum=0;
//    while(i!=0){
//        sum+=i%10;
//        i/=10;
//    }printf("%d",sum);
//}
--------------------------------------------------------------------------------
//int main(){
//    int num;
//    printf("enter any number:");
//    scanf("%d",&num);
//    int i;
//    if(num<=1){
//        printf("it is not a prime number");
//    }else{
//        for(i=2;i<=num;i++){
//            
//        }if(num%i==0){
//                printf("%d is not a prime number",num);
//            }else{
//                printf("%d is a prime number",num);
//            }
//    }
//    
//
//}
--------------------------------------------------------------------------------
//int main(){
//    int n;
//    printf("enter a series:");
//    scanf("%d",&n);
//    
//    int t1;
//    int t2;
//    int nextterm=0;
//    printf("the fibbonacci series:");
//    int i;
//    for(i=0;i<=n;i++){
//        printf("%d,",i);
//        nextterm=t1+t2;
//        t1=t2;
//        t2=nextterm;
//    }
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//int gcd(int a, int b){
//    if(b==0)
//        return a;
//    else
//        return gcd(b,a%b);
//}
//int main(){
//    int num1;
//    printf("enter first number:");
//    scanf("%d",&num1);
//    int num2;
//    printf("enter second number:");
//    scanf("%d",&num2);
//    printf("gcd of %d and %d is %d\n",num1,num2,gcd(num1,num2));
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//int gcd(int a, int b){
//    if(b==0)
//        return a;
//    else
//        return gcd(b,a%b);
//}
//int lcm(int a, int b){
//    return (a*b)/gcd(a,b);
//}
//int main(){
//    int num1, num2;
//    printf("enter first number:");
//    scanf("%d",&num1);
//    printf("enter second number:");
//    scanf("%d",&num2);
//    printf("the lcm of %d and %d is %d",num1,num2,lcm(num1,num2));
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//int main(){
//    char A[]={1,4,7,8,5,2,6,9,3,55,102,77,44,88,96};
//    int s = sizeof(A);
//    int length = s/sizeof(A[0]);
//    int max=0;
//    int i;
//    for(i=0;i<length;i++){
//        if(max<A[i]){
//            max=A[i];
//        }
//    }printf("the largest element from the array is %d",max);
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//#include<string.h>
//int main(){
//    char A[]="dev patel";
//    int length = strlen(A);
//    printf("the length of the string is %d",length);
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//int main(){
//    int num;
//    printf("enter any number:");
//    scanf("%d",&num);
//    int rem = num%10;
//    int sum=0;
//    int i=num;
//    while(i!=0){
//        rem =  i%10;
//        sum+=rem;
//        i/=10;
//    }printf("%d",sum);
//}
--------------------------------------------------------------------------------
//#include<stdio.h>
//
//int main(){
//    int num;
//    printf("enter any number:");
//    scanf("%d",&num);
//    int original_num = num;
//    int rem = num%10;
//    int cube = rem*rem*rem;
//    int sum = 0;
//    int i=num;
//    while(i!=0){
//        rem = i%10;
//        cube = rem*rem*rem;
//        sum+=cube;
//        i/=10;
//    }
//    printf("%d",sum);
//    if(original_num==sum){
//        printf(" it is an Armstrong number");
//    }else{
//        printf(" it is not an Armstrong number");
//    }
//    return 0;
//}
