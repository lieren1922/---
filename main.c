//
//  main.c
//  demo6
//
//  Created by 唐家轩 on 2021/8/11.
//

#include <stdio.h>

//指针详解
//1：指针是一个变量，用来存放地址，地址唯一指向一块空间；
//2：指针的大小是固定的，32位平台有32根地址线，为4个字节；64位平台有64根地址线，可以表示2^64次方个地址，指针大小为8个字节
//3：指针的类型决定了指针+-整数的步长，以及解引用时的权限
//4:指针的运算

//函数指针数组的案例------计算器---------(转移表)

//void menu(void){
//    printf("********1:Add********\n");
//    printf("********2:Sub********\n");
//    printf("********3:Mul********\n");
//    printf("********4:Div********\n");
//    printf("********0:exit*******\n");
//}
//
//int Add(int x,int y){
//    return x+y;
//}
//int Sub(int x,int y){
//    return x-y;
//}
//int Mul(int x,int y){
//    return x*y;
//}
//int Div(int x,int y){
//    return x/y;
//}

//int main(){
//    int input=0;
//    do{
//        menu();
//        printf("请选择模式：");
//        scanf("%d",&input);
//        int x=0;
//        int y=0;
//        switch(input){
//            case 1:
//                printf("请输入两个数字\n");
//                scanf("%d%d",&x,&y);
//                printf("%d\n",Add(x,y));
//                break;
//            case 2:
//                printf("请输入两个数字\n");
//                scanf("%d%d",&x,&y);
//                printf("%d\n",Sub(x,y));
//                break;
//            case 3:
//                printf("请输入两个数字\n");
//                scanf("%d%d",&x,&y);
//                printf("%d\n",Mul(x,y));
//                break;
//            case 4:
//                printf("请输入两个数字\n");
//                scanf("%d%d",&x,&y);
//                printf("%d\n",Div(x,y));
//                break;
//            case 0:
//                printf("退出\n");
//                break;
//            default:
//                printf("模式选择错误!\n");
//                break;
//        }
//    }while(input);
//    return 0;
//}

//没有switch case 的繁杂
//int main(){
//    int input=0;
//    int x=0;
//    int y=0;
//    int (*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};
//    do{
//        menu();
//        printf("请选择模式：");
//        scanf("%d",&input);
//        if(input>=1 && input<=4){
//            printf("请输入两个操作数\n");
//            scanf("%d%d",&x,&y);
//            int ret = pfArr[input](x,y);
//            printf("%d\n",ret);
//        }
//        else if(input==0){
//            printf("退出\n");
//        }
//        else{
//            printf("模式选择错误\n");
//        }
//    }while(input);
//    return 0;
//}

//利用回调函数
//void Calc(int (*pf)(int,int)){
//    int x=0;
//    int y=0;
//    printf("请输入两个数字\n");
//    scanf("%d%d",&x,&y);
//    printf("%d\n",pf(x,y));
//}
//int main(){
//    int input=0;
//    do{
//        menu();
//        printf("请选择模式：");
//        scanf("%d",&input);
//        switch(input){
//            case 1:
//                Calc(Add);
//                break;
//            case 2:
//                Calc(Sub);
//                break;
//            case 3:
//                Calc(Mul);
//                break;
//            case 4:
//                Calc(Div);
//                break;
//            case 0:
//                printf("退出\n");
//                break;
//            default:
//                printf("模式选择错误!\n");
//                break;
//        }
//    }while(input);
//    return 0;
//}

//int Add(int x,int y){
//    return x+y;
//}
//
//
//int main(){
//    int arr[10]={0};
//    int (*p)[10]=&arr;
//    int (*pfArr[4])(int,int);
//    int (*(*ppfArr)[4])(int,int)=&pfArr;
//    //ppfArr是一个数组指针，指针指向的数组有4个元素，元素的类型为函数指针
//    return 0;
//}












//函数指针
//函数指针数组
//
//int Add(int x,int y){
//    return x+y;
//}
//
//int Sub(int x,int y){
//    return x-y;
//}
//
//int Mul(int x,int y){
//    return x*y;
//}
//
//int Div(int x,int y){
//    return x/y;
//}
//int main(){
//    int* arr[5];   //----就是一个指针数组 ，数组的每个元素都是指针，所以叫指针数组
//    int(*pa[4])(int,int)={Add,Sub,Mul,Div};           //函数指针数组
//    int i=0;
//    for(i=0;i<4;i++){
//        printf("%d\n",pa[i](2,3));
//    }
//    return 0;
//}

//char* my_strcpy(char* dest,const char* src);
////写一个函数指针pf,指向my_strcpy
//char* (*pf)(char*,const char*);
////写一个函数指针数组pfArr，能够存放4个my_strcpy的地址
//char* (* pfArr[4])(char*,const char*);








//void Print(char* str){
//    printf("%s\n",str);
//}
//
//
//int main(){
//    void (*p)(char*)=&Print;
//    (*p)("hello world");
//    return 0;
//}
//signal是一个函数声明
//signal函数的参数有2个，1个是int，一个是函数指针，该函数指针指向的函数参数是int，返回类型是void）
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void）
//void(*          signal(int,void(*)(int))           )(int);
////简化
//typedef void(* pfun_t )(int);  //重命名的pfun_t要放在（*   ）里，而不是放到外面
//pfun_t  signal(int,pfun_t);
//
//
//
//
//int Add(int x,int y){
//    int c=0;
//    c=x+y;
//    return c;
//}
//
//int main(){
//    int a=3;
//    int b=5;
//    printf("%d\n",(*Add)(a,b));
//
//    //&Add和Add是一样的
////    printf("%p\n",&Add);
////    printf("%p\n",Add);
//
//    int (*pa)(int,int)=&Add;//这就是一个函数指针     ,Add其实就是pa
//    printf("%d\n",(pa)(2,9));  //不加 * 也没有影响；
//    printf("%d\n",(************pa)(3,4));   //加不加 * 完全没有影响
//
//    return 0;
//}

//数组参数和指针参数-------写代码时要将数组或指针传递给函数，怎样设计函数的参数呢？

//void test(int arr[3][5]){
//
//}
//
//void test1(int arr[][5]){
//
//}
//
//void test2(int arr[3][]){           //行可以省略，但是列不能省略
//
//}
//
//int main(){
//    int arr[3][5]={0};
//    test(arr);
////    test1(arr);
//    test2(arr);
//    return 0;
//}

//void test(int *arr){   //err
//
//}
//
//void test(int(*arr)[5]){
//
//}
//
//int main(){
//    int arr[3][5]={0};
//    test(arr);
//    return 0;
//}

//回顾
//int main(){
//    //字符指针
//    char ch='w';
//    char* p=&ch;
//    const char* p2="abcdef";
//    //指针数组
//    int* arr[10];
//    char* ach[6];
//    //数组指针
//    //int* p1 ----整型指针
//    //char* p2 ----字符指针
//    int arr2[5];  //---数组
//    int (*pc)[5]= &arr2;
//    return 0;
//}



//数组指针

//void Print1(int arr[3][5],int x,int y){     //参数是数组的形式
//    int i,j;
//    for(i=0;i<x;i++){
//        for(j=0;j<y;j++){
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void Print2(int (*pa)[5],int x,int y){     //参数是数组指针的形式
//    int i=0;
//    for(i=0;i<x;i++){
//        int j=0;
//        for(j=0;j<y;j++){
//            //printf("%d ",*(*(pa+i)+j));
//            //另一种写法
//            printf("%d ",(*(pa+i))[j]);
//        }
//        printf("\n");
//    }
//}
//
//int main(){
//    int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};  //--二维数组
//    Print1(arr,3,5);
//    Print2(arr,3,5);
//    return 0;
//}

//int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int* p=arr;   //数组名就是首元素地址
//    int i=0;
//    for(i=0;i<10;i++){
////        printf("%d ",*(p+i));
////        printf("%d ",*(arr+i));   //-----起到和上面一样的结果。
////        printf("%d ",arr[i]);
//        printf("%d ",p[i]);
//        //以上的几种写法都是一样的；
//    }
//    return 0;
//}

//int main(){
//    int* p=NULL;   //p是整型指针---指向整型的指针 --- 可以存放整型的地址
//    char* pc=NULL; //pc是字符指针---指向字符的指针 --- 可以存放字符的地址
    //数组指针 --- 存放数组的地址
    
//    int arr[10]={0};
    //arr---首元素的地址
    //&arr[0]---首元素的地址
    //&arr---数组的地址

//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int(*p) [10] = &arr;  //将数组的地址存起来,放到数组指针p中
//    int i=0;
//    for(i=0;i<10;i++){
//        printf("%d\n",*p[i]);
//    }
//
//
//
//    return 0;
//}

//int main(){
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int (*p)[10] = &arr;
//    int i=0;
//    for(i=0;i<10;i++){
//        printf("%d\n",(*p)[i]);    //p其实是数组的指针，*p就是整个数组，（*p)[i]就可以访问数组的元素
//    }
//    for(i=0;i<10;i++){
//        printf("%d ",*(*p+i));
//    }
//    return 0;
//}

//指针数组，是数组,用来存放指针
//int main(){
//    int arr1[]={1,2,3,4,5};
//    int arr2[]={2,3,4,5,6};
//    int arr3[]={3,4,5,6,7};
//
//    int* parr[]={arr1,arr2,arr3};
//
//    int i=0;
//    for(i=0;i<3;i++){
//        int j=0;
//        for(j=0;j<=4;j++){
//            printf("%d ",*(parr[i]+j));
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main(){
//    int arr[10]={0};   //创建了一个整形数组
//    char ch[5]={0};    //字符数组
//    int* parr[5];      //存放整形指针的数组，简称指针数组
//    char* parr2[5];    //存放字符指针的数组
//    return 0;
//}

//int main(){
//    int a=10;
//    int b=20;
//    int c=30;
//    int d=40;
//    int* arr[4]={&a,&b,&c,&d};
//    int i=0;
//    for(i=0;i<4;i++){
//        printf("%d ",*arr[i]);
//    }
//
//    return 0;
//}

//int main(){
//    char arr1[]="abcdef";
//    char arr2[]="abcdef";
//    char* p1="abcdef";
//    char* p2="abcdef";
//    if(p1==p2){           //两块内容是一样的，在内存中只创建了一份，p1和p2存的是a的地址，所以是一样的
//        printf("hehe\n");
//    }
//    else{
//        printf("haha\n");
//    }
//    return 0;
//}

//int main(){
////    char arr[] = {"abcdef"};
////    char* p = arr;
////    printf("%s\n",arr);  //%s是打印字符串
////    printf("%s\n",p);    //p其实是字符数组首元素的地址，打印直到遇到\0;
////    printf("%c\n",*p);   //如果以%c打印，p是首元素的地址。*p解引用，打印出一个字符a
//
//    const char* pc="abcdef";   //"abcdef"是一个常量字符串
//    *pc='Q';             //常量表达式不可以被修改
//    printf("%s\n",pc);
//
//
//    return 0;
//}


//void test(int* arr){
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    printf("%d\n",sz);
//}
//
//int main() {
//    int arr[10]={0};
//    test(arr);
//    return 0;
//}
