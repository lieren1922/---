//
//  main.c
//  demo5
//
//  Created by 唐家轩 on 2021/8/2.
//

#include <stdio.h>
#include <assert.h>   //assert  断言
#include <unistd.h>
#include <string.h>

////浮点型在内存中的存储，分为float和double，以及long double型
//int main(){
////    9.0
////    1001.0
////    (-1)^0 * 1.001 * 2^3
////    (-1)^s * M     * 2^E
////    S=0
////    M=1.001
////    E=3
////
////    0.5
////    0.1  ---是0.5的二进制表示形式
////    (-1)^0 * 1.0 * 2^(-1)
////    S=0;M=1.0;E=-1
////    E为负数时，实际上真正存入内存中的E为 E+127=126；
//
//    int n=9;
//    float* pFloat=(float*)&n;
//    //00000000000000000000000000001001 ----补码
//    //
//    printf("     n的值为   %d\n",n);
//    printf("* pFloat的值为:%f\n",*pFloat);  //认为  00000000000000000000000000001001  是浮点型，为0 00000000 00000000000000000001001
//    //  (-1)^0 * 0.00000000000000000001001 * 2^(-126)       超级小的数字，直接就打印的0.000000
//
//    //整型和浮点型的存储方式不同
//    //整型在内存中以二进制补码的方式存储，
//
//    *pFloat=9.0;
//    //1001.0
//    //(-1)^0 * 1.0010 * 2^3;
//    //S=0,M=1.0010,E=3
//    //0  （3+127）
//    //0  10000010  00100000000000000000000;
//    //以上数字按十进制打印出来，就是1091567616
//    printf("     n的值为   %d\n",n);             //1091567616
//    printf("* pFloat的值为:%f\n",*pFloat);       //9.000000
//
//    return 0;
//}
//int main(){
//    float f=5.5;
//    //5.5
//    //101.1
//    //(-1)^0 * 1.011 * 2^2;
//    //S=0
//    //M=1.011
//    //E=2
//    //0 (2+127) (小数位只存 . 后面的数字,即 011)
//    //  0   10000001 01100000000000000000000
//    //符号位  指数位           小数位
//    //内存中放的是二进制位。但展示到屏幕上是16进制，4个二进制位是一个16进制位
//    //0100  0000  1011  0000  0000  0000  0000  0000
//    //  4    0     B      0    0      0     0    0
//    //0x40B00000
//    return 0;
//}

//int main(){
//    double a=1E10;
//    printf("%lf\n",a);
//    return 0;
//}

//char的范围是 127～ -128之间,unsigned char的范围为0～255,unsigned 是无符号
//int main(){
//    char arr[1000];          //char类型表示的范围为  127～ -128之间
//    int i=0;
//    for(i=0;i<1000;i++){
//        arr[i]=-1-i;
//    }
//    printf("%lu\n",strlen(arr));    //strlen()找到\0才停止   所以答案为 长度为 128+127=255
//    return 0;
//}

//int main(){
//    unsigned int i;          //因为unsigned int是无符号整型，所以i的值一直大于0；所以会无限循环下去
//    for(i=9;i>=0;i--){
//        printf("%u\n",i);
//        sleep(1.3);
//    }
//
//    return 0;
//}

//int main(){
//    int a=-20;
//    //10000000000000000000000000010100  --原码
//    //11111111111111111111111111101011  --反码
//    //11111111111111111111111111101100  --补码
//    unsigned int b=10;
//    //00000000000000000000000000001010  --原码和反码和补码都一样
//
//    //相加后为
//    //11111111111111111111111111110110  --结果的补码
//    //11111111111111111111111111110101  --结果的反码
//    //10000000000000000000000000001010  --结果的原码   打印时按照原码打印
//    //结果为-10
//    printf("%d\n",a+b);
//    return 0;
//}

//交换输出
//void Switch(int a,int b){
//    a=a^b;
//    b=a^b;
//    a=a^b;
//    printf("a=%d,b=%d\n",a,b);
//}
//
//int main(){
//    int a,b;
//    scanf("a=%d,b=%d",&a,&b);
//    Switch(a,b);
//}

//利用指针输出年，月，日
//void Print(char* str){
//    int i=0;
//    printf("year=");
//    for(i=0;i<4;i++){
//        printf("%c",*str);
//        str++;
//    }
//    printf("\n");
//    printf("month=");
//    for(i=0;i<2;i++){
//        printf("%c",*str);
//        str++;
//    }
//    printf("\n");
//    printf("date=");
//    for(i=0;i<2;i++){
//        printf("%c",*str);
//        str++;
//    }
//    printf("\n");
//}
//int main(){
//    char arr[8];
//    scanf("%s",arr);
//    Print(arr);
//    return 0;
//}

//int main(){
//        printf("%c",73);
//        printf("%c",32);
//        printf("%c",99);
//        printf("%c",97);
//        printf("%c",110);
//        printf("%c",32);
//        printf("%c",100);
//        printf("%c",111);
//        printf("%c",32);
//        printf("%c",105);
//        printf("%c",116);
//        printf("%c",33);
//        return 0;
//    }

//字符金字塔
//void Jzt(char a){
//    int i=0;     //控制行数
//    for(i=0;i<31;i++){      //打印5行
//        int j=0;           //控制空格数量
//        for(j=31-i;j>0;j--){
//            printf(" ");
//        }
//        int k=0;   //控制打印的字母数量
//        for(k=0;k<=i;k++){
//            printf("%c ",a);
//        }
//        printf("\n");   //每行打印完后换行
//    }
//}
//
//int main(){
//    char a;
//    scanf("%c",&a);  //输入想要打印的内容
//    Jzt(a);   //金字塔函数
//    return 0;
//}

//成绩输入与输出
//int main(){
//    int id=0;
//    float Cyuyan,math,english;
//    scanf("%d;",&id);
//    scanf("%f,%f,%f",&Cyuyan,&math,&english);
//    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",id,Cyuyan,math,english);
//    return 0;
//}

//int main(){
//    char a=-128;
//    //100000000000000000000000010000000   ---  -128的原码
//    //111111111111111111111111101111111   ---  -128的反码
//    //111111111111111111111111110000000   ---  -128的补码
//    //10000000发生整形提升，补符号位 1，得到111111111111111111111111110000000,打印规则是无符号数，所以此时的补码和原码一样，打印出来是4294967168
//
//    char b=128;
//    printf("%u\n",a);
//    printf("%u\n",b);
//
//    //%d是打印十进制有符号数字
//    //%u是打印十进制无符号数字
//
//    return 0;
//}

//设计一个小程序，判断当前机器的字节序
//int a=20;
//16进制 ：0x 14 00 00 00
//大端存储方式：00 00 00 14
//小端存储方式：14 00 00 00
//低地址--------------------------------------->>>高地址
//int Zijiexu(void){
//    int a=1;
////    char* p=(char*)&a;
////    return *p;           //简化之后的代码
//
//    //再简化
//    return *(char*)&a;
//
////    if(*p == 1){
////        return 1;
////    }
////    else{
////        return 0;
////    }
//}
//int main(){
//    if(Zijiexu()){
//        printf("小端\n");
//    }
//    else{
//        printf("大端\n");
//    }
//    return 0;
//}

//int main(){
//    int a=20;  //正数的原码，反码，补码是相同的，和无符号整数是一样的
//    //00000000000000000000000000010100 ---原码
//    //00000000000000000000000000010100 ---反码
//    //0000 0000 0000 0000 0000 0000 0001 0100 ---补码
//    //  0    0    0    0    0    0    1    4     所以内存展示出来16进制是14000000
//    int b=-10;
//    //10000000000000000000000000001010  ---原码
//    //11111111111111111111111111110101  ---反码 是原码符号位不变，其他位按位取反
//    //1111 1111 1111 1111 1111 1111 1111 0110  ---补码 是反码加1
//    //  F   F    F     F    F    F    F    6     所以内存展示出来16进制是FFFFFFF6
//
//    return 0;
//}

//void test(void){
//    printf("hehe\n");
//}
//int main(){
//    test();
//    return 0;
//}

//int main(){
//    int a=10;
//    float b=10.0;
//
//    printf("%p\n",&a);
//    printf("%p\n",&b);
//
//    return 0;
//}

//模拟实现库函数strcpy
//void my_strcpy(char* dest,char* source ){
//    if(dest != NULL && source != NULL){
//    while(*source != '\0'){
//    *dest=*source;
//    dest++;
//    source++;
//    }
//    *dest=*source;
//    }
//}
//char* my_strcpy(char* dest,const char* source ){
//    char* ret=dest;
//    assert(dest != NULL);
//    assert(source != NULL);
//    while(*source != '\0'){
//    *dest=*source;
//    dest++;
//    source++;
//    }
//    *dest=*source;
//    return ret;
//}
//
//int main(){
//    //strcpy
//    //字符串拷贝
//    char arr1[]="#######################";
//    char arr2[]="bit";
//
//    printf("%s\n",my_strcpy(arr1,arr2));
//    return 0;
//}

//int main(){
//    int count=0;
//    int i=0;
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//
//    printf("id arr=%p\n",arr);
//    printf("id   i=%p\n",&i);
//    for(i=0;i<=12;i++){
//        printf("hehe\n");
//        arr[i]=0;
//    }
//    return 0;
//}

//int main(){
//    int i=0;
//    int sum=0;
//    int n=0;
//    int ret=1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//        int j=0;
//        for(j=1;j<=i;j++){
//            ret *= j;
//        }
//        sum+=ret;
//        ret=1;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//求1！+2！+3！+...
//求阶乘的模块
//int Jiechen(int n){
//    if(n==0){
//        return 1;
//    }
//    else{
//        return n*Jiechen(n-1);
//    }
//}
////求阶乘和的模块
//int JiechenSum(int n){
//    int i=0;
//    int sum=0;
//    for(i=1;i<=n;i++){
//        sum=sum+Jiechen(i);
//    }
//    return sum;
//}
////程序入口
//int main(){
//    int n=0;
//    printf("请输入数字n，以求取1直到n！的和\n");
//    scanf("%d",&n);
//    int sum=JiechenSum(n);
//    printf("%d\n",sum);
//    return 0;
//}

//typedef struct Stu             //typedef相当于是把 struct Stu 类型重新起了一个名字
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//
//void Print1(Stu n){
//    printf("name:%s\n", n.name);
//    printf("age: %d\n", n.age);
//    printf("tele:%s\n", n.tele);
//    printf("sex: %s\n", n.sex);
//}
//
//void Print2(Stu* ps){
//    printf("name:%s\n", ps->name);
//    printf("age: %d\n", ps->age);
//    printf("tele:%s\n", ps->tele);
//}
//
//int main(){
//    Stu s={"lisi",20,"15566778899","nan"};
//    //打印结构体数据
//    //Print2更好，不管是在时间方面还是在空间方面。
//    Print1(s);         //传结构体
//    printf("\n");
//    Print2(&s);        //传地址
//    return 0;
//}

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
