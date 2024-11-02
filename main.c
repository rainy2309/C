// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }


// #include <stdio.h>
// #define PI 3.14159
// #define AREA(r) (PI*r*r)
// int main(){
//    int radius = 5;
//    float area = AREA(radius);
//    printf("Area: %f", area);
//    return 0;
// }


// #include <stdio.h>  
// int main (){
//    int age = 12;
//    double salary=12.3123;
//    printf("%d la me cua %s\n",age,"thanhcong");
//    printf("%.1lf",salary);
//    printf("We are \"TEK4.VN\" and we are free.");
// }


// #include <stdio.h>
  
// int main() { 
//    //Biểu diễn dữ liệu ký tự
//    char ch = 'B'; 
//    printf("%c\n", ch);  
    
//    //Biểu diễn số nguyên bằng %d hoặc %i
//    int x = 45, y = 90; 
//    printf("%d\n", x); 
//    printf("%i\n", y); 
//    float f = 12.67; 
//    //In số thực 
//    printf("%f\n", f); 
//    printf("%e\n", f); // Biểu diễn số dưới dạng số mũ 10
    
//    int a = 67; 
//    printf("%o\n", a); // Biểu diễn dưới dạng bát phân
    
//    printf("%x\n", a); // Biểu diễn dưới dạng thập lục phân (16)
    
//    char str[] = "Hello World"; 
//    printf("%s\n", str); 
    
//    printf("%20s\n", str); //Dịch chuyển chuỗi sang phải 20 ký tự
//    printf("%-20s\n", str); // Căn lề bên trái
//    printf("%20.5s\n", str); //shift to the right 20 characters including the string, and print string up to 5 character 
//    printf("%-20.5s\n", str); //left align and print string up to 5 character 
// }

// #include <stdio.h>
// #include <math.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     int tong = 0;
//     while (n!=0)
//     {
//         tong = tong + n%10;
//         n=n/10;
//     }
//     printf("%d",tong);
    
// }


// #include <stdio.h>

// int main() {
//   int count = 0;
//   for (;;) {
//     if (count == 10) {
//       break;
//     }
//     printf("%d\n", count);
//     count++;
//   }
//   return 0;
//}
/*#include <stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    switch(month){
        // mỗi case in ra tháng tương ứng
        
          case 1:
          printf("January");
          break;
          case 2:
          printf("February");
          break;
          case 3:
          printf("March");
          break;
          case 4:
          printf("April");
          break;
          case 5:
          printf("May");
          break;
          case 6:
          printf("June");
          break;
          case 7:
          printf("July");
          break;
          case 8:
          printf("August");
          break; 
          case 9:
          printf("September");
          break;
          case 10:
          printf("October");
          break;
          case 11:
          printf("November");
          break;
          case 12:
          printf("December");
          break;
        default:
            printf("Invalid Number");
      

    }
    return 0;
}*/
// #include <stdio.h>

// int main() {
//     // nhận số nguyên từ bàn phím
//     int n;
//     int i;
//     int total = 0;
//     scanf("%d", &n);
//     // xây dựng bảng nhân từ 6 đến 9
//     for (int i=1;i<=10;i++)
    
//     {
//       total=n*i;
//        printf("%d * %d = %d\n",n,i,total);
//     }
   
  
//     return 0;
// }


// #include <stdio.h>

// int main() {

//   for (int i = 1; i <= 5; ++i) {
//     if (i == 3 || i == 4) {
//       continue;
//     }
//     printf("%d\n", i);
//   }

// return 0;
// }

// #include <stdio.h>

// // định nghĩa hàm với hai tham số
// void addNumbers(double n1, double n2) {
//     // tính tổng hai tham số và in ra màn hình
//     printf("%lf\n",n1+n2);
// }

// int main() {
//     double number1;
//     double number2;
//     scanf("%lf %lf", &number1, &number2);
//     // gọi hàm với hai tham số
//     addNumbers(number1,number2);
    
//     return 0;
// }

// #include <stdio.h>


// int addNumbers(int n1, int n2) {
//   int sum = n1 + n2;
//   return sum;
// }

 
// #include <stdio.h>

// int main() {
//     // tạo mảng số thực
//     double numbers[4]={3.5, 8.9, 1.6, -4.8};
//     // truy cập phần tử mảng bằng vòng lặp
//     for (int index=0;index<4;index++) {
//         printf("%.2lf\n", numbers[index]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // khởi tạo mảng
//     int numbers[4] = {43, 78, 23, 45};
//     // khai báo một mảng cùng kích thước
//     int newNumbers[4];
//     // lặp qua các phần tử của mảng và nhân chúng với 10
//     for(int i=0;i<4;i++){
//       int newNumbers=10*numbers[i];
    
//       printf("%d\n",newNumbers);
//     }
//     // in mảng mới ra màn hình 
    
//     return 0;
// }


// #include <stdio.h>
 
// //Hàm tính điểm trung bình
// double getAverageScore(double scores[], int n) {
//   double sum=0;
//   for (int i=0;i<n;i++){
//     sum += scores[i];
//   }
//   double average = sum/n;
//   return average;
// }
// char computeGrade(double averageScore) {
//   char grade;

  
//     if (averageScore>=80){
//        grade='A';
//     } if (averageScore>=60&&averageScore<80){
//        grade='B';
//     } if (averageScore<60&&averageScore>=50){
//        grade='C';
//     }else{
//       grade ='F';
//     }
  
//   return grade;
// }
 
// int main() {
//   // Nhập đầu vào là một mảng
//   int n;
//   scanf("%d", &n);
//   double scores[n];
//   for(int i=0 ; i<n; i++){
//   scanf("%lf",&scores[i]);
//   }
//   double averageScore = getAverageScore(scores,n);
//   printf("%.2lf", averageScore); 
//   return 0;
// }
                // sap xep 1 chuoi
// #include <stdio.h>
// int main (){
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for (int i=0;i<n;i++){
//     scanf("%d",&arr[i]); 
//   }
//   for (int i=0;i<(n-1);i++){
//     for(int k=i+1;k<n;k++){
//       if(arr[i]>arr[k]){
//         int newnum=arr[i];
//         arr[i]=arr[k];
//         arr[k]=newnum;
//       }
//     }
//   }
//   for (int i=0;i<n;i++){
//     printf("%d ",arr[i]);
//   }
//   return 0;
// }

// #include <stdio.h>
// int main (){
//   int n,m;
//   int arr[100][100];
//   scanf("%d %d",&n,&m);
//   for (int i = 0; i < n; i++)
//   {
//     for (int k=0;k<m;k++){
//       scanf("%d",&arr[i][k]);
//     }
//   }int sum=0;
//   for (int i=0;i<n;i++){
//     for (int k=0;k<m;k++){
//       if (arr[i][k]%5==0){
//               sum+= arr[i][k];

//       }
//     }

//   }
//   printf("%d",sum);
  

// }

// #include  <stdio.h>
// #include <ctype.h>
// int main (){
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for (int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   for (int i=0;i<n;i++){
//     if(arr[i]>=0&&arr[i]<10){
//       printf("%d ",arr[i]);
//     }
//   }
  
// }


// #include <stdio.h>

// int main() {

//     // assign "Snowpiercer" to the move string
// char movie[]="Snowpierce";
// printf("%c",movie[4]);
        
//     // print the fourth character

    
//     return 0;

// }


// #define MOD 1000000007
// long long fibSum(int n) {
    
//     if (n == 1) return 1;  // Nếu n = 1, trả về 1 vì chỉ có 1 số Fibonacci đầu tiên

//     long long fib1 = 1, fib2 = 1;  // Khởi tạo Fib(1) và Fib(2)
//     long long sum = 2;  // Tổng của hai số Fibonacci đầu tiên là 1 + 1 = 2

//     // Tính các số Fibonacci từ Fib(3) đến Fib(n) và cộng vào tổng
//     for (int i = 3; i <= n; i++) {
//         long long fib = (fib1 + fib2) % MOD;  // Tính Fib(i) và lấy theo modulo
//         sum = (sum + fib) % MOD;  // Cộng vào tổng và lấy theo modulo
//         fib1 = fib2;  // Cập nhật Fib(i-1)
//         fib2 = fib;   // Cập nhật Fib(i)
//     }

//     return sum;
// }



//tong hop bai tap ve hinh

#include <stdio.h>
#include <math.h>




void tamgiacdeu(int n) {
    for (int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++)
      printf(" ");
      for(int j=1;j<=i;j++)
      printf("* ");
      printf("\n");
    }
    
    
}
void tamgiacdeunguoc(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
      printf(" ");
    }
    for(int j=i;j<=n;j++){
      printf("* ");
    }
    printf("\n");
  }
}
void tamgiacvuongcan(int n){
  for(int i=1;i<n;i++){
    for(int j=1;j<i;j++){
      printf("* ");
    }
    printf("\n");
  }
}
void tamgiacvuongcan1(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++)
    printf("  "); 
    for(int j=i;j<n;j++)
    printf(" *");
    printf("\n");
  }
}
void tamgiacvuongcan2(int n){
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++) printf("* ");
    printf("\n");
  }
}

void tamgiacfloid(int n){
  int k=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){printf("%d ",k);
    k++;}    
    printf("\n");
  }
}
int bai1(int x,int y){
  return x==y?(x+y)*3:(x+y);
}
int bai2(int n){
  int x=51;
  if(n>x){
    return (n-x)*3;
  }
  return x-n;
}
int bai3(int x,int y){
  return x == 30 || y == 30 || (x + y == 30);
}
int bai4(int x){//within 10 of 100 or 200. có nghĩa là [90-110] và [190 - 210] =>> lấy x -100 và -200 nếu abs(x) <=10 = 1, ngược lại = 0
  if(abs(x-100)<=10||abs(x-200)<=10) return 1;
  return 0;
}
int bai5(int x){
  if (x%3==0||x%7==0) return 1;
  return 0;
}
int bai6(int x,int y){
  return (x<0&&y>100||x>100&&y<0);
}
int bai7(int x,int y){
  return (x>=100&&x<=200||y>=100&&y<=200);
}
int bai8(int x,int y, int z){
  return (x>=20 && x<=50||y>=20 && y<=50||z>=20 && z<=50);
}
int bai10(int x,int y){
  if(y<x) return x;
  if(x<y) return y;
  return 0;
}
int bai11(int x, int y){
  if(x>=20&&x<=30&&y>=20&&y<=30){
    if(x>=y) {return x;}
    else{return y;}
  }else if (x>=20&&x<=30)
  {
    return x;
  }else if (y>=20&&y<=30)
  {
    return y;
  }else{
    return 0;
  }
  
  
}




int main() {
    int n;
    printf("h = ");
    scanf("%d", &n);
    
  
    tamgiacfloid(n);
   
    return 0;
}