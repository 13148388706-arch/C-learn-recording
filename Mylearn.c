#include <stdio.h>
#include <math.h>/*数学函数*/
// int search(int a[], int length, int key);
// int isprime(int x);/*原始方法求质数*/
// int isprime(int x, int isknowprimes[], int count);/*数组方法，制质数表*/
void f(int *p);/*函数f接受一个指向整数的指针p*/
void minmax(int a[], int length, int *min, int *max);/*函数minmax接受一个整数数组a，一个整数length，两个指向整数的指针min和max*/
int swap(int *a, int *b);/*函数swap接受两个指向整数的指针a和b*/
int divide(double a, double b, double *result);/*函数divide接受两个浮点数a和b，一个指向浮点数的指针result*/
int main(void)  
{
/*基础功能*/
//     int price = 0; 
// 定义变量，名字为price，初始值为0，变量保存数据用
// 变量类型：int 整数类型
// 变量名称：price 变量的名字
// 变量初始值：0 变量的初始值
// 变量的作用：保存数据用
// 变量的作用域：main函数内
//     printf("money($)");
//     scanf("%d", &price);
//     scanf,读整数，提示用户输入价格，并将输入的值存储在price变量中
//     int change = 100 - price;
//     printf("coin %d $\n", change);


// 1.常量/变量
//     const int AMOUNT = 100;
// 定义常量，名字为AMOUNT，值为100，常量保存数据用
  
//     int price = 0; 

//     printf("money($)");
//     scanf("%d", &price);

//     int change = AMOUNT - price;
//     printf("coin %d $\n", change);


// 单位转换
//     printf("please input the height of the item: "
//     "such as 5 7\n");


//     int foot;
//     int inch;

//     scanf("%d %d", &foot, &inch);

//     printf("height: %f m", ((foot + inch/12.0) * 0.3048));
// 2.float类型，浮点数类型，保存小数数据用



// 3.浮点数double/float
//     printf("please input the height of the item: "
//     "such as 5 7\n");

//     int foot;
//     int inch;

//     scanf("%d %d", &foot, &inch);

//     printf("height: %f m", ((foot + inch/12.0) * 0.3048));
// double类型，双精度浮点数类型，保存小数数据用


// total += 1;
// total = total + 1;


//     printf("please input a,b,c: \n""such as 1 2 3\n");
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);


//     printf("please input the height of the item: cm\n"
//     "such as 170\n");

//     int cm = 0;
//     scanf("%d", &cm);
    
//     int foot = cm / 30.48;
//     int inch = ((cm / 30.48) - foot) * 12;
//     printf("%d %d", foot, inch);


/*4.运算*/
//     printf("please input the time and minute of the item: cm\n"
//     "such as 1106 110\n");

//     int time = 0;
//     int minute = 0;
//     scanf("%d %d", &time, &minute);

//     int hour = time / 100;
//     int min = time % 100;
//     int total = (hour + (min + minute) / 60) * 100 + (min + minute) % 60;
//     //%运算符，取余运算符，求余数用
//     printf("%d", total);

/*5.反向输出（三位数为例）*/
//     printf("please input the num of the item: cm\n"
//     "such as 123\n");

//     int num = 0;
//     scanf("%d", &num);

//     int a = num / 100;
//     int b = (num % 100) / 10;
//     int c = num % 10;
//     int total = c * 100 + b * 10 + a;
//     //反推相加

//     printf("%d", total);



/*6.IF条件语句*/
//     int hour1,min1;
//     int hour2,min2;
//     scanf("%d %d", &hour1, &min1);
//     scanf("%d %d", &hour2, &min2);

//     int ih = hour2 - hour1;
//     int im = min2 - min1;
//      if (im < 0) {
//         im += 60;
//         //分钟数小于0，说明需要向小时借1小时
//         //+=运算符，表示将右边的值加到左边的变量上，并将结果赋值给左边的变量
//         ih --;
//         //小时数减1
//         //--运算符，表示将左边的变量减1，并将结果赋值给左边的变量
//      }
//      //if语句，条件语句，判断条件是否成立,并执行大括号中指令

//     printf("时间差是：%d小时%d分钟", ih, im);



/*7.if-else条件语句*/
//     int price,cash;
//     scanf("%d %d", &price, &cash);
//     printf("the price of the food is: %d$\n please insert cash: %d$\n", price, cash);

//     int money = cash - price;

//      if (money < 0) {
//         printf("现金不足，无法支付！\n");
//      }
//      else {
//         printf("找零：%d元\n", money);
//      }
//else语句，条件语句，判断条件是否成立,并执行大括号中指令


/*8.*/
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("please insert the two numbers: %d %d\n", a, b);

//      if (a < b) {
//         printf("the max num is: %d\n", b);
//      }
//      else {
//         printf("the max num is: %d\n", a);
//      }


/*9.*/
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("please insert the two numbers: %d %d\n", a, b);

//      if (a < b) {
//         printf("the max num is: %d\n", b);
//      }
//      else {
//         printf("the max num is: %d\n", a);
//      }




/*10.while循环*/
//     int x;
//     int n = 1;

//     scanf("%d", &x);
   
//     x /= 10;

//     printf("please insert the number: %d\n", x);

//     while (x > 0){
//         n ++;
//         x /= 10;
//     }
//     printf("the number of digits is: %d\n", n);



/*11.*/
//     int x;
//     int n = 0;
    
//     scanf ("%d", &x);
//     printf ("please insert the number: %d\n", x);

//     while (x > 0){
//         n ++;
//         x /= 10;
//     }
// // while循环，条件语句，判断条件是否成立,并执行大括号中指令
//     printf("the number of digits is: %d\n", n);


/*12.do while循环*/
// #include <stdlib.h>
// #include <time.h>
// int main() {

//     srand(time(0));
//     int num = rand() % 1000;
//     int n = 0;
//     int x = 0;

//     printf("please guess the number:");
    
//     do
//     {   scanf("%d", &x);
//         n ++;
//         if (x > num){
//             printf("the number is bigger than the random number\n");
//         }
//         else if (x < num){
//             printf("the number is smaller than the random number\n");
//         }
//     } while (x != num);
    
//     printf("the number is right , you got it in %d tries\n", n);




/*13.switch-case语句*/
// int main() {

//     int score;
//     scanf("%d", &score);
//     printf("please insert the score: %d\n", score);

//     switch (score / 10)
//     {
//     case 10:
//     case 9:
//         printf("the rank is: A\n");
//         break;
//     case 8:
//         printf("the rank is: B\n");
//         break;
//     case 7:
//         printf("the rank is: C\n");
//         break;
//     case 6:
//         printf("the rank is: D\n");
//         break; 
//     case 5:
//         printf("the rank is: E\n");
//         break;  
//     case 4:
//         printf("the rank is: F\n");
//         break;
    
//     default:
//         printf("not pass\n");
//         break;
//     }
//     //switch-case语句，条件语句，判断条件是否成立,并执行大括号中指令




/*14.循环嵌套IF*/
// int main() {

//     int n = 0;
//     int x = 0;
//     int m = 0;

//     printf("please insert the number:");
    
//     do
//     {   scanf("%d", &x);
//         if (x != -1){
//             m += x;
//             n ++;
//         }
//         else {
//             printf("the average is: %f\n", 1.0 * m/n);
//         }
//     } while (x != -1);




/*15.数字反转*/
//     int dig = 0;
//     int num = 0;
//     printf("please insert the number:");
//     int x = 0;    
//     scanf("%d", &x);

//     do
//     {
//         dig = x % 10;
//         x /= 10;
//         num = num * 10 + dig;
        
//     } while (x > 0);

//     printf("the reversed number is: %d\n", num);



/*16.for 循环与while循环转换 */
    
//     int i;
//     int count;
//     scanf("%d", &count);

//     for ( i = 0; i < count; i++)
//     {
//         printf("the number is: %d\n", i);
//     }

//     printf("the last number is: %d\n", i);
//     return 0;
// }


/*17.while循环*/   
//     int i = 0;
//     int count;
//     scanf("%d", &count);

//     while ( i < count )
//     {   i ++;        
//         printf("the number is: %d\n", i);
//     }

//     printf("the last number is: %d\n", i);
//     return 0;
// }


/*for循环*/
/*18.找零钱问题*/  
//     int x = 0;
//     int one , two, five;

//     scanf("%d", &x);
//     for (one = 1; one < x*10; one++)
//     {
//         for (two = 1; two <= x*10/2; two++)
//         {
//             for (five = 1; five <= x*10/5; five++)
//             {
//                 if (one + 2 * two + 5 * five == x*10)
//                 {
//                     printf("one: %d, two: %d, five: %d\n", one, two, five);
//                 }
//             }
//         }
//     }



/*19.找零钱问题,中断*/  
//     int x = 0;
//     int one , two, five;

//     scanf("%d", &x);
//     for (one = 1; one < x*10; one++)
//     {
//         for (two = 1; two <= x*10/2; two++)
//         {
//             for (five = 1; five <= x*10/5; five++)
//             {
//                 if (one + 2 * two + 5 * five == x*10)
//                 {
//                     printf("one: %d, two: %d, five: %d\n", one, two, five);
//                 }
//             }
//         }
//     }

 
/*20.整数分解*/
//     int x;
//     scanf("%d", &x);

//     int mask = 1;
//     int t = x;
//     while ( t > 9 )
//     {
//         mask *= 10;
//         t /= 10;
//     }
//     printf("x=%d mask=%d\n", x, mask);
    
//     do
//     {
//         int d = x / mask;
//         x %= mask;
//         mask /= 10;
//         printf("%d", d);
//         if (mask > 0)
//         {
//             printf(" ");
//         }
//     } while (mask > 0);
    


/*21.求阶乘*/
//     int x;
//     scanf("%d", &x);
//     int i;
//     int fact = 1;
//     for ( i = x; i > 0; i--)
//     {
//         fact *= i;
//     }
    
//     printf("the factorial of %d is: %d\n", x, fact);



/*22.求1到x的和*/
//     int x;
//     scanf("%d", &x);
//     int i;
//     double sum = 0; //浮点数类型，保存小数数据用
//     for ( i = x; i > 0; i--)
//     {
//         sum += 1.0 / i;
//     }
    
//     printf("the sum of numbers from 1 to %d is: %f\n", x, sum);


/*23.求1到x的加减和*/
//     int x;
//     scanf("%d", &x);
//     int i;
//     int sign = 1; //符号位，1表示正数，-1表示负数
//     double sum = 0; //浮点数类型，保存小数数据用
//     for ( i = x; i > 0; i--)
//     {
//         sum += sign * (1.0 / i);
//         sign = -sign; //切换符号
//     }
    
//     printf("the sum of numbers from 1 to %d is: %f\n", x, sum);



/*24.判断质数*/
//     int x;
//     int isprime = 1; //假设是质数，isprime为1表示是质数，0表示不是质数
//     // scanf("%d", &x);
//     x = 1; //测试数据，x为定值
//     int i;
//     for ( i = 2; i < x; i++)
//     {
//         if (x % i == 0)
//         {
//             isprime = 0; //不是质数
//             break;
//         }
//     }
//     if (isprime == 1)
//     {
//         printf("%d is a prime number\n", x);
//     }
//     else
//     {
//         printf("%d is not a prime number\n", x);
//     }
    

/*25.判断100以内范围的质数*/
//     int x;
//     scanf("%d", &x);

//     for (; x < 100; x++)
//     {   
//         int i;
//         int isprime = 1; //假设是质数，isprime为1表示是质数，0表示不是质数
//         for ( i = 2; i < x; i++)//嵌套循环
//         {
//             if (x % i == 0)
//             {
//                 isprime = 0; //不是质数
//                 break;
//             }
//         }
//         if (isprime == 1)
//         {
//             printf("%d ", x);
//         }
//     }


/*26.打印50个质数*/
//     int x = 2;
//     scanf("%d", &x);

//     int cnt = 0;
//     // for (; x < 100; x++)
//     while ( cnt < 50 )
//     {   
//         int i;
//         int isprime = 1; //假设是质数，isprime为1表示是质数，0表示不是质数
//         for ( i = 2; i < x; i++)//嵌套循环
//         {
//             if (x % i == 0)
//             {
//                 isprime = 0; //不是质数
//                 break;
//             }
//         }
//         if (isprime == 1)
//         {
//             printf("%d ", x);
//             cnt ++; //计数器，记录已经打印的质数个数
//         }
//         x ++;
//     }



/*27.枚举法求最大公约数*/
//     int a, b;
//     int min;
//     int num = 0;
//     scanf("%d %d", &a, &b);

//     if (a < b)
//     {
//         min = a;
//     }
//     else
//     {
//         min = b;
//     }

//     for (int i = 1; i > 0; i++ )
//     {
//         if (a % i == 0)
//         {
//             if (b % i == 0)
//             {
//                 num = i;
//             }
//         }
//     }
//     printf("the greatest common divisor of %d and %d is: %d\n", a, b, num);



/*28.辗转相除法求最大公约数,算法优化*/
//     int a, b, c;
//     scanf("%d %d", &a, &b);
//     while (b != 0)
//     {
//         c = a % b;
//         a = b;
//         b = c;
//     }
//     printf("the greatest common divisor is:%d\n", a);



/*29.给定条件的整数集*/  
//     int A = 0;
//     int cnt = 0;
//     scanf("%d", &A);
//     int i, j, k;

//     i = A;
//     while(i <= A + 3)
//     {   j = A;
//         while (j <= A + 3)
//         {   k = A;
//             while (k <= A + 3)
//             {
//                 if (i != j)
//                 {
//                     if (i != k)
//                     {
//                         if (j !=k )
//                         {   
//                             cnt ++;
//                             printf("%d%d%d", i, j, k);
//                             if (cnt == 6)
//                             {
//                                 printf("\n");
//                                 cnt = 0;
//                             }else
//                             {
//                                 printf(" ");
                                
//                             }
//                         }
//                     }
//                 }
//                 k ++;
//             }
//             j ++;
//         }
//         i ++;
//     }



/*29-2.给定条件的整数集,错误版本*/
//     int A;
//     int i,j,k;
//     scanf("%d", &A);
//     int cnt = 0;

//     i = A;
//     while (i <= A+3)
//     {
//         i ++;/*需要后手加*/
//         j = A;
//         while (j <= A+3)
//         {
//             j ++;
//             k = A;
//             while (k <= A+3)
//                 k ++;
//             {
//                 if(i != j)
//                 {
//                     if (i != k)
//                     {
//                         if(j != k){
//                         printf("%d%d%d",i,j,k);
//                         cnt ++;
//                             if (cnt == 6)
//                             {
//                                 printf("\n");
//                                 cnt = 0;
//                             }else{
//                                 printf(" ");
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }



/*30.浮点数精度问题*/
//     double ff = 1E10;
//     printf  ("num=%.16f\n",ff);
    


/*31.字符计算表达*/
//     char c = 'A';
//     c++;
//     printf  ("%d\n %c\n", c, c);



/*32.类型与转换*/
//     printf  ("%d\n", (char)32768/*强制转换，大的换小的可能出错*/);
    
/*33.*/
// double a = 1.0;
// double b = 2.0;
// int i =(int)a / b;/*类型转换高于四则运算，需要再加括号，如下*/

// double a = 1.0;
// double b = 2.0;
// int i =(int)(a / b);


/*34.bool类型*/
// int main() /*类型与转换*/
// {
//     bool a = 5 < 4;
//     printf("%d\n", a);/*输出为0/1，判断是或否*/


/*35.逻辑运算,!非 , &&与, ||或 */

/*判断 6<x<8: x<8&&x>6*/

/*优先级！> && > ||*/

/*条件运算,以下两组代码相等*/
/*1*/
// count = (count>20)? count - 10: count + 10;
/*2*/
// if (count > 20){
//     count = count - 10;
// }else{
//     count = count +10;
// }




/*36.函数*/

/*求和*/
    //  int i;
    //  int sum;

    //  for( i = 1, sum = 0; i <= 10; i++)
    //  {
    //     sum += 1;
    //  }
    //  printf("the summary of %d and %d is:",1 ,10, sum);
    //     for( i = 20, sum = 0; i <= 30; i++)
    //  {
    //     sum += 1;
    //  }
    //  printf("the summary of %d and %d is:",20 ,30, sum);
    //     for( i = 35, sum = 0; i <= 45; i++)
    //  {
    //     sum += 1;
    //  }
    //  printf("the summary of %d and %d is:",35 ,45, sum);
/*代码复制，程序不良的表现*/

/*37.利用封装，自定义函数来简化*/
// void/*返回类型*/ sum/*函数名*/ (int begin, int end ) /*整个叫函数头*/
//     {
//         int i;
//         int total = 0;
//         for( i = begin; i <= end; i++)
//         {
//             total += i;
//         }
//         printf("the summary of %d and %d is: %d\n",begin ,end, total);
//     }  /*函数体*/
// int main()
//     {
//         sum(1,10);
//         sum(20,30);
//         sum(35,45);


/*38.从函数中返回值*/
// int max (int a, int b){  /*函数有先后关系，先定义，再调用*/
//     int ret;
//     if (a > b){
//         ret = a;
//     }else{
//         ret = b;
//     }
//     return ret;
// }

// int a, b, c;
//     a = 5;
//     b = 6;
//     c = max(10 , 12);
//     c = max(a , b);/*c的数值为上一次函数结果的返回值*/
//     c = max(c , 23);
//     c = max(max(c , a) , 5);
//     printf("%d\n", max(a , b));/*嵌套使用*/
//     max(12,13);/*未赋值，未被输出，丢掉*/

/*39.函数声明与定义*/

// int max (int a, int b); /*声明*/

// int a, b, c;
//     a = 5;
//     b = 6;
//     c = max(10 , 12);
//     c = max(a , b);/*c的数值为上一次函数结果的返回值*/
//     c = max(c , 23);
//     c = max(max(c , a) , 5);
//     printf("%d\n", max(a , b));/*嵌套使用*/
//     max(12,13);/*未赋值，未被输出，丢掉*/

// int max (int a, int b){  /*定义*/
//     int ret;
//     if (a > b){
//         ret = a;
//     }else{
//         ret = b;
//     }
//     return ret;
// }


/*40.数组*/

// int x;
// double sum = 0;
// int cnt = 0;
// /*定义数组，分别是<类型>名称[数量]*/
// int number[100];
// scanf("%d", &x);
// while (x != -1){
//     number[cnt] = x;/*对数组元素赋值*/
//     sum += x;
//     cnt ++;
//     scanf("%d", &x);
// }
// if (cnt > 0){
//     int i;
//     double average = sum / cnt;
//     for (i=0; i<cnt; i++){
//         if (number[i] > average){/*使用数组中的元素遍历*/
//         printf("%d ", number[i]);
//         }
//     }
// }


/*41.统计*/
// const int number = 10;
// int x;
// int count[number];/*命名为计数器数组，记录每一个数字出现的次数*/
// int i;

// for (i=0; i<number; i++){
//     count[i] = 0;
// }/*初始化每一个计数器*/
// scanf("%d", &x);/*读一个数字*/
// while (x != -1){
//     if (x>=0 && x<=9){
//         count[x]++;
//     }
//     scanf("%d", &x);/*接着读下一个数字*/
// }
// for (i=0; i<number; i++){
//     printf("%d:%d\n", i, count[i]);/*遍历范围内所有整数，统计每个出现的数字的次数*/
// }

/*42.数组定位赋值，C99*/
// int a[10]={[1]=3,[3]=5,[5]=7};/*数组中指定位置赋值，其他位置为0*/

/*43.数组的大小*/
// sizeof(a)/sizeof(a[0])/*数组的大小/数组中元素的大小=数组中元素的个数,好用*/
  
/*44.遍历数组几种形式*/
// for (i=0; i<length; i++){
//     b[i]=a[i];/*遍历数组，复制数组*/
// }

// for (i=0; i<number; i++){
//     count[i]=0;/*遍历数组，初始化数组*/
// }

// for (i=0; i<length; i++){
//     if ( a[i] == key){
//         ret = i;
//         break;/*遍历数组，查找数组中是否有指定的元素*/
// }

// for (i=0; i<cnt; i++){
//      if ( number[i] > average){
//         printf("%d ", number[i]);
//         break;/*遍历数组，查找数组中是否有指定的元素*/
//     }
// }

// for (i=0; i<number; i++){
//     printf("%d:%d\n", i, count[i]);/*遍历数组,输出数组中每个元素的值*/
// }


/*45.搜索*/
/*
找出key在数组中的位置
@param a 数组
@param length 数组的长度
@param key 要查找的元素
@return key在数组中的位置，如果没有找到，返回-1
*/
//     int a[]={1,2,3,4,5,6,7,8,9,10};
//     int x;
//     int loc;
//     printf("请输入要查找的数字:\n");
//     scanf("%d", &x);
//     loc = search(a, sizeof(a)/sizeof(a[0]), x);
//     if (loc != -1){
//         printf("数字%d在数组中的位置是:%d\n", x, loc);
//     }else{
//         printf("数字%d不在数组中\n", x);
//     }
// return 0; 
// }
// int search(int a[], int length, int key){
//     int i;
//     for (i=0; i<length; i++){
//         if (a[i] == key){
//             return i;
//             break;/*遍历数组，查找数组中是否有指定的元素,提前中断*/
//         }
//     }
//     return -1;
// }


/*46.数组：素数的例子*/
/*原解决方法*/
// int x;
// scanf("%d", &x);
// printf("please insert the number: %d\n", x);
// if (isprime(x)){
//     printf("%d is a prime number\n", x);
// }else{
//     printf("%d is not a prime number\n", x);
// return 0; 
// }

// int isprime(intx){/*最基础的定义*/
//     int ret = 1; //假设是质数，ret为1表示是质数，0表示不是质数
//     int i;
//     if (x == 1){
//         ret = 0; //1不是质数
//     }
//     for (i = 2; i < x; i++){/*要判断 x 是不是质数，就要在 2 到 x-1 这个范围内，没有任何数能整除 x*/
//         if (x % i == 0){
//             ret = 0; //不是质数
//             break;
//         }
//     }
//     return ret;
// }

/*47.优化1：偶数去除，计算量小一半*/
// int isprime(intx){
//     int ret = 1; //假设是质数，ret为1表示是质数，0表示不是质数
//     int i;
//     if (x == 1 || (x%2 == 0 && x != 2)){
//         ret = 0; //1不是质数
//     }
//     for (i = 3; i < x; i += 2){/*要判断 x 是不是质数，就要在 2 到 x-1 这个范围内，没有任何数能整除 x*/
//         if (x % i == 0){
//             ret = 0; //不是质数
//             break;
//         }
//     }
//     return ret;
// }

/*48.优化2：开平方*/
// int isprime(intx){
//     int ret = 1; //假设是质数，ret为1表示是质数，0表示不是质数
//     int i;
//     if (x == 1 || (x%2 == 0 && x != 2)){
//         ret = 0; //1不是质数
//     }
//     for (i = 3; i < sqrt(x); i += 2){/*要判断 x 是不是质数，就要在 2 到 x-1 这个范围内，没有任何数能整除 x*/
//         if (x % i == 0){
//             ret = 0; //不是质数
//             break;
//         }
//     }
//     return ret;
// }

/*49.数组方法1*/
//     const int number = 10;/*定义数组的大小*/
//     int prime[number];
//     prime[0] = 2;/*第一个质数是2*/
//     int cnt = 1;
//     int i = 3;

//     while (cnt < number)/*循环次数未知，用while循环条件限定，cnt找够10个，现在人为定义一个*/
//     {   
//         if ( isprime(i, prime, cnt) )
//         {
//             prime[cnt++] = i;
//         }
//         {
//             printf("i=%d \tcnt=%d\n", i, cnt);
//             int i;
//             for( i=0; i<cnt; i++)
//             {
//                 printf("%d ", prime[i]);
//             }
//         }
//         i++;
    
//     }
//     for (i = 0; i < cnt; i++)
//     {
//         printf("%d ", prime[i]);
//         if (i % 10 == 9)
//         {
//             printf("\n");
//         }else
//         {
//             printf(" ");
//         }
//     }
//     return 0;
// }

// int isprime(int x, int isknowprimes[], int count){
//     int ret = 1; //假设是质数，ret为1表示是质数，0表示不是质数
//     int i;
//     if (x == 1 || (x%2 == 0 && x != 2)){
//         ret = 0; //1不是质数，偶数不是素数
//     }
//     for (i = 0; i < count; i++){/*要判断 x 是不是质数，在已知素数集合内，没有任何数能整除 x*/
//         if (x % isknowprimes[i] == 0){
//             ret = 0; //不是质数
//             break;
//         }
//     }
//     return ret;
// }

/*50.数组方法2*/

// const int maxprime = 25;/*定义数组的大小(要求多少以内的素数)*/
// int prime[maxprime];/*定义数组，存储素数*/
// int i;
// int x;
//     for (i = 0; i < maxprime; i++)
//     {
//         prime[i] = 1;/*初始化数组*/
//     }
//     for (x = 2; x < maxprime; x++)/*外层x递增*/
//     {
//         if (prime[x])/*如果第x个位置是素数*/
//         {
//             for (i = 2; i*x < maxprime; i ++ )/*将这个位置的倍数位置标记为非素数*/
//             {
//                 prime[i*x] = 0;
//             }
//         }
//     }
//     for (i = 2; i < maxprime; i++)
//     {
//         if (prime[i])/*如果是素数*/
//         {
//             printf("%d\t ", i);/*输出的是下标，用位置代表素数*/
//         }
//     }
//     printf("\n");

// return 0;
// }

/*51.二维数组*/
/*行可省略，列不行*/
// int a[][5] = {
//     {1,2,3,4,5},
//     {6,7,8,9,10},
// } ;

/*52.井字棋*/
// const int size = 3;
// int board[size][size];
// int i,j;
// int numO;
// int numX;
// int result = -1;/*-1表示未结束，0表示平局，1表示O赢，2表示X赢*/

// for (i = 0; i < size; i++)
// {
//     for (j = 0; j < size; j++)
//     {
//         scanf("%d", &board[i][j]);/*读入矩阵*/
//     }
// }

// for (i = 0; i < size; i++){/*检查行*/
//     numO = 0;
//     numX = 0;/*初始化两个值*/
//     for (j = 0; j < size; j++){
//         if (board[i][j] == 0){
//             numO++;
//         }else if (board[i][j] == 1){
//             numX++;
//         }if (numO == 3){
//             result = 1;
//         }else if (numX == 3){
//             result = 2;
//         }
//     }
// }

// for (j = 0; j < size && result == -1; j++){/*检查列*/
//     numO = 0;
//     numX = 0;/*初始化两个值*/
//     for (i = 0; i < size; i++){
//         if (board[i][j] == 0){
//             numO++;
//         }else if (board[i][j] == 1){
//             numX++;
//         }if (numO == 3){
//             result = 1;
//         }else if (numX == 3){
//             result = 2;
//         }
//     }
// }


// numO = numX = 0;/*初始化两个值*/
// for (i = 0; i < size; i++){/*检查对角线*/
//     if (board[i][i] == 0){
//         numO++;
//     }else if (board[i][i] == 1){
//         numX++;
//     }if (numO == 3){
//         result = 1;
//     }else if (numX == 3){
//         result = 2;
//     }
// }

// numO = numX = 0;/*初始化两个值*/
// for (i = 0; i < size; i++){/*检查反对角线*/
//     if (board[i][size - 1 - i] == 0){/*size-1-i表示反对角线的下标*/
//         numO++;
//     }else if (board[i][size - 1 - i] == 1){
//         numX++;
//     }if (numO == 3){
//         result = 1;
//     }else if (numX == 3){
//         result = 2;
//     }
// }

/*53.指针*/
/*运算符&，作用是获取变量的地址 */


// int a;
// a = 6;
// printf("size of int: %ld bytes\n", sizeof(int));/*输出变量int的大小，单位是字节*/
// printf("size of double: %ld bytes\n", sizeof(double));/*输出变量double的大小，是int的两倍，单位是字节*/
// printf("size of a: %ld bytes\n", sizeof(a));/*输出变量a的大小，单位是字节*/

// int i = 0;
// printf("0x%p \n", &i);/*%p输出地址，16位进制，输出变量i的地址*/

/*指针是保存变量地址的变量，只有地址*/
// int i;
// int *p = &i;/*定义一个指针变量p，保存变量i的地址,p指向变量i*/
// int *p,q;/*定义一个指针变量p，保存变量i的地址，q只是一个普通变量，保存一个整数*/

// int i = 6;
// printf("&i=%p\n", &i);
// f(&i);

// return 0;
// }

// void f(int *p)/*定义一个函数f，参数是一个指针变量p，保存变量i的地址*/
// {
//     printf("p=%p\n", p);/*输出指针变量p的值，即变量i的地址*/
//     printf("*p=%d\n", *p);/*输出指针变量p指向的变量的值，即变量i的值*/
//     *p = 10;/*修改指针变量p指向的变量的值，即修改变量i的值*/
//     printf("*p=%d\n", *p);/*输出指针变量p指向的变量的值，即修改后的变量i的值*/
// }

/*54. 指针的使用 */
/*1.交换数值*/
// int a = 5;
// int b = 10;
// swap(&a, &b);/*调用函数swap，传入变量a和b的地址*/
// printf("a=%d, b=%d\n", a, b);/*输出交换后的变量a和b的值*/
// return 0;
// }
// int swap(int *p, int *q)/*定义一个函数swap，参数是两个指针变量p和q，保存变量a和b的地址*/
// {
//     int temp;
//     temp = *p;/*将指针变量p指向的变量的值赋给temp，即将变量a的值赋给temp*/
//     *p = *q;/*将指针变量q指向的变量的值赋给指针变量p指向的变量，即将变量b的值赋给变量a*/
//     *q = temp;/*将temp的值赋给指针变量q指向的变量，即将temp的值赋给变量b*/
//     return 0;
// }

/*2.函数返回多个值*/
// int a[]={1,2,3,4,5};
// int min, max;
// minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);/*调用函数minmax，传入数组a的地址，数组长度，调用min和max的地址*/
// printf("min=%d, max=%d\n", min, max);/*输出函数min*/
// return 0;
// }

// void minmax(int a[], int length, int *min, int *max)/*定义一个函数minmax，参数是一个数组a，数组长度length，两个指针变量min和max，保存最小值和最大值的地址*/
// {
//     int i;
//     *min = a[0];/*将数组a的第一个元素赋给指针变量min指向的变量，即将最小值初始化为数组的第一个元素*/
//     *max = a[0];/*将数组a的第一个元素赋给指针变量max指向的变量，即将最大值初始化为数组的第一个元素*/
//     for (i = 1; i < length; i++)/*遍历数组a，从第二个元素开始*/
//     {
//         if (a[i] < *min)/*如果当前元素小于最小值*/
//         {
//             *min = a[i];/*将当前元素赋给最小值*/
//         }
//         if (a[i] > *max)/*如果当前元素大于最大值*/
//         {
//             *max = a[i];/*将当前元素赋给最大值*/
//         }
//     }
// }

/*3.函数返回状态，指针返回结果*/
// double a;
// double b;
// double c;
// printf("please insert two numbers:\n");/*输出输入的两个整数*/
// scanf("%lf %lf", &a, &b);/*输入两个浮点数，分别赋给变量a和b*/
// if (divide(a, b, &c) == 1)/*调用函数divide，传入变量a和b的值，传入变量c的地址，如果返回值为0，表示除法成功*/
// {
//     printf("the result of %lf / %lf is: %lf\n", a, b, c);/*输出除法结果*/
// }
// return 0;
// }

// int divide(double a, double b, double *result)/*定义一个函数divide，参数是两个浮点数a和b，指针变量result保存除法结果的地址*/
// {   
//     int ret = 1;/*定义一个变量ret，保存函数返回值，1表示除法失败，0表示除法成功*/
//     if (b == 0)/*如果除数为0*/
//     {
//         return -1;/*返回-1，表示除法失败*/
//     }
//     *result = a / b;/*将除法结果赋给指针变量result指向的变量，即将除法结果赋给变量c*/
//     return ret;/*返回返回值*/
// }


 /*传入函数的数组组成了什么？？！*/
 /*函数参数表中的数组，其实是指针，但是可以用数组的方式进行运算*/
/*以minmax函数为例*/
// int a[]={1,2,3,4,5};
// int min, max;
// minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);/*调用函数minmax，传入数组a的地址，数组长度，调用min和max的地址*/
// printf("min=%d, max=%d\n", min, max);/*输出函数min*/
// return 0;
// }

// void minmax(int a[], int length, int *min, int *max)
/*定义一个函数minmax，参数是一个数组a，数组长度length，两个指针变量min和max，保存最小值和最大值的地址*/
/*也可以写作*/
// void minmax(int *a /*指针*/, int length, int *min, int *max)
// {
//     int i;
//     *min = a[0];/*将数组a的第一个元素赋给指针变量min指向的变量，即将最小值初始化为数组的第一个元素*/
//     *max = a[0];/*将数组a的第一个元素赋给指针变量max指向的变量，即将最大值初始化为数组的第一个元素*/
//     for (i = 1; i < length; i++)/*遍历数组a，从第二个元素开始*/
//     {
//         if (a[i] < *min)/*如果当前元素小于最小值*/
//         {
//             *min = a[i];/*将当前元素赋给最小值*/
//         }
//         if (a[i] > *max)/*如果当前元素大于最大值*/
//         {
//             *max = a[i];/*将当前元素赋给最大值*/
//         }
//     }
// }

/*4. const/数组/指针,关于锁指针地址还是锁数据内容*/
/*指针是const*/
// int* const q = &i;/*指针q是常量，不能改变指针的地址，但是可以改变指针指向的变量的值*/
// *q = 26; //ok/*可以改变指针指向的变量的值*/
// q++; //error/*不可以改变指针的地址*/

/*所指是const*/
// const int* p = &i;/*锁住了指针p指向的变量，不能改变指针指向的变量的值，但是可以改变指针的地址*/
// *p = 26; //error/*不可以改变指针指向的变量的值*/
// i = 26; //ok/*i只是不能通过指针去改,不是本身不能改*/
// p = &j; //ok/*可以改变指针的地址*/

/*5. 指针的运算*/
char ac[] = {1, 2, 3, 4, 5};
char *p = ac;/*指针p指向数组ac的首地址*/
printf("%p\n", p);/*输出指针p的值，即数组ac的首地址*/
printf("%p\n", p + 1);/*输出指针p的值，即数组ac的下一个元素的地址*/
    //说明*p --> ac[0]/*输出指针p指向的变量的值，即数组ac的第一个元素的值*/
    //说明*(p + 1) --> ac[1]/*输出指针p指向的变量的值，即数组ac的第二个元素的值*/

/*加减，递增递减，比较大小都可以运算，但不可以乘除，+、+=、-、-=、++、--，两个指针相减*/
char *p1 = &ac[5];/*指针p1指向数组ac的第五个元素的地址*/
printf("p1 - p = %d\n", p1 - p);/*输出指针p和指针p1的差值，即数组ac的首地址和第五个元素的地址的差值*/
/*等价于 (size of (ac)) / (size of (ac[0])) */

int ai[] = {1, 2, 3, 4, 5};
int *q = ai;/*指针q指向数组ai的首地址*/
int *q1 = &ai[5];/*指针q1指向数组ai的第五个元素的地址*/
printf("%p\n", q);/*输出指针q的值，即数组ai的首地址*/
printf("%p\n", q + 1);/*输出指针q的值，即数组ai的下一个元素的地址*/
printf("q1 - q = %d\n", q1 - q);/*输出指针q和指针q1的差值，即数组ai的首地址和第五个元素的地址的差值*/
return 0;
}

int am[] ={1, 2, 5, 6, -1};
int i;
/*利用指针的运算可以方便地遍历数组，访问数组元素*/
for (i = 0; i < sizeof(am)/sizeof(am[0]); i++)
{
    printf("%d ", am[i]);/*输出指针q指向的变量的值，即数组ai的第i个元素的值*/
}
/*就可写作*/
for (i = 0; p != -1; p++)/*利用指针的运算可以方便地遍历数组，访问数组元素*/
{
    printf("%d ", *p);/*输出指针p指向的变量的值，即数组ac的第i个元素的值*/
}
