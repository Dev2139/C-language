#include<stdio.h>
int main(){
    printf("Hello Dev Patel\n");
    printf("How are you?");
    return 0;
}
int sum(){
    int a = 2;
    int b = 3;
    int c;
    c = a+b;
    printf("%d",c);
    return 0;
}
int blank(){
    int a;
    int b;
    int c;
    c = a+b;
    printf("%d",c);
    return 0;
}
int flt(){
    float a = 2.1;
    float b = 3.1;
    float c;
    c = a+b;
    printf("%f",c);
    return 0;
}
int chr(){
    char a = 'A';
    char b = 'B';
    char c;
    c = a+b;
    printf("%s",c);
    return 0;
} 
int str(){
    char a[] = "DEV ";
    char b[] = "PATEL";
    
    
    printf("%s",a);
    printf("%s",b);
    return 0;
}
int main(){
    float a = 10;
    float b = 2.5;
    float sum = a+b;
    float min =a-b;
    float mul = a*b;
    float dive = a/b;
    printf("%.1f",min);
}all operators using (%.1f)
int main(){
	int num;
	scanf("%d",&num);
	printf("%d",num);
	return 0;
}


int main(){
	float marks;
	scanf("%f",&marks);
	if(marks>=15){
		printf("pass");}
	else{
		printf("fail");}
	
}

int main(){
	float marks;
	scanf("%f",&marks);
	if(marks>=25 && marks<=30){
		printf("A grade");}
	else if(marks>=20 && marks<25){
		printf("B grade");}
	else if(marks>=15 && marks<20){
		printf("C grade");}
	else{
		printf("D grade");}
}


int main(){
	int year;
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)|| year%400==0){
	    printf("It is a leap year");}
	else{
 		 printf("It is not a leap year");}
	return 0;
}


int main(){
    int A ;
    int B ;
    printf("enter your first number:");
    scanf("%d",&A);
    printf("enter your second number:");
    scanf("%d",&B);
    if(A>B){
        printf("Firstnumber is greater than second");
    }else{
        printf("Second number is greater than first");
    }
}



int main(){
    int A ;
    int B ;
    int C ;
    printf("enter your first number:");
    scanf("%d",&A);
    printf("enter your second number:");
    scanf("%d",&B);
    printf("enter your third number:");
    scanf("%d",&C);
    if(A>B && A>C){
        printf("Firstnumber is greater than other");
    }else if(B>C && B>A){ 
        printf("Second number is greater than other");
    }else if (A==B && B==C){
    	printf("all are same");
	}else{
        printf("third number is greater than other");
    }
}


int main(){
    int A ;
    printf("enter any number:");
    scanf("%d",&A);
    if(A>0){
        printf("it is a positive number");
    }else if(A==0){
        printf("it is a zero");
    }else{
        printf("it is a negative number");
    }
}

int main(){
    int A ;
    printf("enter any number:");
    scanf("%d",&A);
    if(A%5==0 && A%11==0){
        printf("valid");
    }else{
        printf("not valid");
    }
}



int main(){
    int i =0;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }
    
}

int main(){
    int i =0;
    for(i=10;i>=1;i--){
        printf("%d\n",i);
    }
    
}

int main(){
    int i = 1;
    while(i<=10){
        printf("%d\t",i);
        i++;
    }
}


int main(){
    int i = 1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
}

// by for loop
int main(){
    int i;
    for(i=1;i<=11;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}


//by while loop
int main(){
    int i=1;
    while(i<=11){
        if(i%2==0){
            printf("%d\n",i);
        }i++;
    }
}


//table of any number using for loop
int main(){
    int num;
    printf("which numbers table do you want:");
    scanf("%d",&num);
    int i =0;
    for(i=1;i<=10;i++){
        printf("%d\n",num*i);
    }
}


//table of any number using while loop
int main(){
    int num;
    printf("which numbers table do you want:");
    scanf("%d",&num);
    int i=1;
    while(i<=10){
        printf("%d\n",num*i);
        i++;
    }
}


//array printing
int main(){
    int arr[]={1,2,3,4,5,6};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
}
www.sih.gov.in
8780834731
saket

//length of array
int main(){
    int arr[]={1.1,1.2,1.3,1.4,1,2,3,4};
    int s = sizeof(arr);
    int length = s/sizeof(arr[0]);
    printf("%d",length);
}

//sum of elements of array
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
