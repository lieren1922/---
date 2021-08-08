//
//  main.c
//  demo5
//
//  Created by 唐家轩 on 2021/8/2.
//

#include <stdio.h>

typedef struct Stu             //typedef相当于是把 struct Stu 类型重新起了一个名字
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

void Print1(Stu n){
    printf("name:%s\n", n.name);
    printf("age: %d\n", n.age);
    printf("tele:%s\n", n.tele);
    printf("sex: %s\n", n.sex);
}

void Print2(Stu* ps){
    printf("name:%s\n", ps->name);
    printf("age: %d\n", ps->age);
    printf("tele:%s\n", ps->tele);
}

int main(){
    Stu s={"lisi",20,"15566778899","nan"};
    //打印结构体数据
    //Print2更好，不管是在时间方面还是在空间方面。
    Print1(s);         //传结构体
    printf("\n");
    Print2(&s);        //传地址
    return 0;
}





















//结构体
//struct Stu              //定义一个结构体类型
//{
//    //成员变量
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//} s1,s2,s3;        //s1,s2,s3是三个全局的结构体变量，这里的s1，s2，s3是结构体变量
//
//typedef struct Stu             //typedef相当于是把 struct Stu 类型重新起了一个名字
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;                         //重新起名为Stu，这里的Stu是类型
//
//int main(){
//    struct Stu s1={"张三",20,"15349734595","男"};     //创建一个结构体变量，是局部的结构体变量
//    Stu s2={"头强",21,"13456799890","女"};
//    return 0;
//}

//结构体的嵌套初始化
//struct S{
//    int a;
//    char c;
//    char arr[20];
//    double p;
//};
//
//struct P{
//    char ch[10];
//    struct S s1;
//    char* pc;
//};
//
//int main(){
//    char arr[]="hello bit\n";
//    struct P p={"hehe",{10,'m',"hello world",3.14159},arr};
//    printf("%s\n",p.ch);
//    printf("%s\n",p.s1.arr);
//    return 0;
//}













//递归和非递归实现输出第n个斐波那契数列
//int main(){
//
//    return 0;
//}


//递归实现计算n的k次方
//double Mi(int n,int k){
//    double res=0;
//    if(k>0){
//        res=n*Mi(n,k-1);
//    }
//    else if(k==0){
//        res=1;
//    }
//    else if(k<0){
//        res=(1/Mi(n,-k));
//    }
//    return res;
//}
//int main(){
//    int n=0;
//    int k=0;
//    scanf("%d%d",&n,&k);
//    double res=Mi(n,k);
//    printf("%lf\n",res);
//    return 0;
//}

//返回数字之和-------递归
//int DigitSum(unsigned int num){
//    if(num>9){
//        return DigitSum(num/10)+num%10;
//    }
//    else{
//        return num;
//    }
//}
//int main(){
//    unsigned int num=0;
//    scanf("%d",&num);
//    int sum=DigitSum(num);
//    printf("%d\n",sum);
//    return 0;
//}

//返回数字之和
//int Sum(int n){
//    int a=0;
//    int sum=0;
//    while(n != 0){
//        a=n%10;
//        n=n/10;
//        sum=sum+a;
//    }
//    return sum;
//}
//
//int main(){
//    int num=0;
//    scanf("%d",&num);
//    int sum = Sum(num);
//    printf("%d\n",sum);
//    return 0;
//}

//逆序打印字符串-----递归的方法
//gfedcba\0
//用递归的方法实现时，分解为两个步骤
//1:a和f的转换
//2:逆序b c d e
//int my_strlen(char* arr){
//    int count=0;
//    while(*arr != '\0'){
//        count++;
//        arr++;
//    }
//    return count;
//}
////void reverce_string(char arr[]){
////    int left=0;
////    int right=my_strlen(arr)-1;
////
////    while(left<right){
////    int tmp=arr[left];
////    arr[left]=arr[right];
////    arr[right]=tmp;
////        left++;
////        right--;
////    }
////}
//void reverce_string(char* arr){
//    char tmp=arr[0];
//    int strlen=my_strlen(arr);
//    arr[0]=arr[strlen-1];
//    arr[strlen-1]='\0';
//    if(my_strlen(arr+1)>=2){
//        reverce_string(arr+1);
//    }
//    arr[strlen-1]=tmp;
//}
//
//int main(){
//    char arr[]="abcdefg";   //gfedcba\0
//    reverce_string(arr );
//    printf("%s\n",arr);
//    return 0;
//}

//逆序打印字符串---自己写的思路，用指针
//int my_strlen(char* arr){
//    int count=0;
//    while(*arr != '\0'){
//        count++;
//        arr++;
//    }
//    return count;
//}
//
//void reverse_arr(char* arr){
//    int strlen=my_strlen(arr)-1;
//    while((arr+strlen)>=arr){
//    char a=*(arr+strlen);
//        strlen--;
//    printf("%c",a);
//    }
//    printf("\n");
//}
//
//int main(){
//    char arr[]="abcdefghigklmn";
//    reverse_arr(arr);
//    return 0;
//}

//递归实现打印一个整数的每一位
//void print(int n){
//    while(n != 0){
//    printf("%d",n%10);
//    n=n/10;
//    }
//}
//
//
//int main(){
//    int a=0;
//    scanf("%d",&a);
//    print(a);
//    return 0;
//}

//乘法口诀表
//void Fun(int a){
//    int i=0;       //行数
//    int j=0;       //列数
//    for(i=1;i<=a;i++){
//        for(j=1;j<=i;j++){
//            printf("%d*%d=%-4d",i,j,i*j);
//        }
//        printf("\n");
//    }
//}
//
//int main(){
//    int a=0;
//    scanf("%d",&a);
//    Fun(a);
//    return 0;
//}

//递归
//int fun(int n){
//    if(n==5){
//        return 2;
//    }
//    else{
//        return 2*fun(n+1);
//    }
//}
//
//
//int main(){
//    int n=fun(2);
//    printf("%d\n",n);
//    return 0;
//}

//使用指针打印数组内容
//void print(int* p,int sz){
//    int i=0;
//    for(i=0;i<sz;i++){
//        printf("%d ",*(p+i));
//    }
//    printf("\n");
//}
//
//
//int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    print(arr,sz);
//    return 0;
//}

//交换两个变量，不允许创建临时变量----------------按位异或的方法
//a=00000000000000000000000000000101  --5
//b=00000000000000000000000000000011  --3
//a=00000000000000000000000000000110  --6
//b=00000000000000000000000000000101  --5
//a=00000000000000000000000000000011  --3
//
//void exchange(int a,int b){
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("%d  %d\n",a,b);
//}
//
//
//int main(){
//    int a=0;
//    int b=0;
//    scanf("%d%d",&a,&b);
//    exchange(a,b);
//    return 0;
//}

//交换两个变量，不允许创建临时变量
//a=5,b=3
//00000000000000000000000000000111   7
//00000000000000000000000000000011   3
//00000000000000000000000000000100   4
//a=00000000000000000000000000001000
//void exchange(int a,int b){
//    a=a+b;
//    b=a-b;
//    a=a-b;
//    printf("%d  %d\n",a,b);
//}
//int main(){
//    int a=0;
//    int b=0;
//    scanf("%d%d",&a,&b);
//    exchange(a,b);
//    return 0;
//}

//求二进制中不同位的个数
//int count_diff(int a,int b){
//    int c=0;
//    c=a^b;
//    int count=0;
//    while(c){
//        c=c&(c-1);
//        count++;
//    }
//    return count;
//}
//
//int main(){
//    //00000000000000000000000000000110
//    //00000000000000000000000000111110
//    //a和b异或完之后，得到
//    //00000000000000000000000000111000
//    //即只要输出异或结果中1的个数即可；
//    //有3位是不同的
//    int a,b;
//    scanf("%d%d",&a,&b);
//    int count=count_diff(a,b);
//    printf("不同位有%d位.\n",count);
//    return 0;
//}

//获取打印二进制的奇数位和偶数位
//void print(int a){
//    int i=0;
//    printf("奇数位\n");
//    for(i=30;i>=0;i-=2){
//        int b=(a>>i&1);
//        printf("%d",b);
//    }
//    printf("\n");
//    printf("偶数位\n");
//    for(i=31;i>=0;i-=2){
//        int b=(a>>i&1);
//        printf("%d",b);
//    }
//    printf("\n");
//}
//
//int main(){
//    int a=0;
//    scanf("%d",&a);
//    print(a);
//    return 0;
//}

//getchar（）     获取一个字符,注意，一次只能拿到一个字符
//putchar（）     输出一个字符
//int main(){
//    char ch;
//    //EOF  end of file,文件结束标志
//    while((ch=getchar())!=EOF){
//        printf("%c\n",ch+32);
//        getchar();       //清空输入缓冲区
//    }
//    return 0;
//}

//int main(){
//    char a,b;
//    scanf("%c\n",&a);
//    scanf("%c",&b);
//    printf("%c\n",a+32);
//    printf("%c\n",b+32);
//    return 0;
//}

//int main(){
//    char a=0;
//    scanf("%c",&a);
//    int i=0;
//    for(i=1;i<6;i++){
//        int j=0;
//        for(j=0;j<i;j++){
//            printf("%c ",a);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//统计一个二进制数字中1的个数
//13的二进制为   00000000000000000000000000001101
//13%2==1,就得到二进制位中最后一位的1；
//13/2=6，去掉最后一位，得到00000000000000000000000000000110
//int count_one(unsigned int n){             //unsigned int 表示无符号整形,
//    int count=0;
//    while(n){
//        if(n%2==1){
//            count++;
//        }
//        n=n/2;
//    }
//    return count;
//}
//int main(){
//    int a=0;
//    scanf("%d",&a);
//    int count=count_one(a);
////    int i=0;
////    for(i=0;i<32;i++){
////        if(a>>(i+1)==1){
////            count++;
////        }
////    }
//    printf("%d\n",count);
//    return 0;
//}

//int count_one(int a){
//    int count=0;
//
//    while(a){
//    a=a&(a-1);
//    count++;
//    }
//    return count;
//}
//
////最好的算法
//int main(){
//    int n=0;
//    printf("请输入一个数字：\n");
//    scanf("%d",&n);
//    int count=count_one(n);
//    printf("二进制中有%d个1\n",count);
//    return 0;
//}

//冒泡排序：
//int main(){
//
//    return 0;
//}

//int i;        //全局变量--未初始化时是0
//int main(){
//    i--;
//    if(i>sizeof(i)){                //sizeof（）计算变量\类型所占空间的大小，规定它是无符号数，在比较大小时，i=-1，要先将i转换为无符号数，因为-1的补码首位为1，在转换为无符号数之后很大，所以输出了>
//        printf(">\n");
//    }
//    else{
//        printf("<\n");
//    }
//    return 0;
//}

//交换数组内容
//
//void exchange(int* arr1,int* arr2,int sz){
//    int arre[]={0};  //用来存储交换的数据的；
//    int i=0;
////    int* pa=arr1;
////    int* pb=arr2;
//    for(i=0;i<=sz;i++){
//    arre[i]=arr1[i];
//    arr1[i]=arr2[i];
//    arr2[i]=arre[i];
//    }
//}
//int main(){
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10]={2,3,2,3,43,5,24,32,9,3};
//    static int sz=sizeof(arr1)/sizeof(arr1[0]);
//    int i=0;
//    int tmp=0;
//    for(i=0;i<sz;i++){
//        tmp=arr1[i];
//        arr1[i]=arr2[i];
//        arr2[i]=tmp;
//    }
//    printf("arr1= ");
//    for(i=0;i<sz;i++){
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//    printf("arr2= ");
//    for(i=0;i<sz;i++){
//        printf("%d ",arr2[i]);
//    }
//    printf("\n");
//    return 0;
//}

//指针数组：存放指针的数组
//数组指针：指向数组的指针
//int main(){
//    int a=10;
//    int b=20;
//    int c=30;
//
////    int* pa=&a;
////    int* pb=&b;
////    int* pc=&c;
//    int i=0;
//    int* arr[3]={&a,&b,&c};
//    for(i=0;i<4;i++){
//        printf("%d\n",*(arr[i]));
//    }
//
//    return 0;
//}

//二级指针
//int main(){
//    int a=10;
//    int* pa=&a;    //一级指针
//    int** ppa=&pa; //二级指针
//    int*** pppa=&ppa; //三级指针
//
//    printf("%d\n",***pppa);
//    return 0;
//}

//倒叙输出；
//int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=9;
//    while(i!=-1){
//        printf("%d ",arr[i]);
//        i--;
//    }
//    return 0;
//}
