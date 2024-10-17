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
#include <stdio.h>

int main() {
    // khởi tạo mảng
    int numbers[4] = {43, 78, 23, 45};
    // khai báo một mảng cùng kích thước
    int newNumbers[4];
    // lặp qua các phần tử của mảng và nhân chúng với 10
    for(int i=0;i<4;i++){
      int newNumbers=10*numbers[i];
    
      printf("%d\n",newNumbers);
    }
    // in mảng mới ra màn hình 
    
    return 0;
}


