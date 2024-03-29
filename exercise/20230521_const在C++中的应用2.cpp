#include <iostream>

using namespace std;

int main()
{
    /* C和C++中const的区别是什么？
    1) const的编译方式不同，C++中所有出现const常量名字的地方都被常量的初始值替换了
        而C中const常变量就是当做一个变量来编译生成指令的
    */

    //const int x; //在C++中，const修饰的量称为常量，一定要初始化，否则会在编译阶段报错

    int b = 10;
    const int a = b; //用一个变量来初始化const变量，因此把a看作常变量
    printf("a = %d\n", a);

    int arr[a] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //常量可以作为数组大小
    printf("arr[0] = %d\n", arr[0]);

    // const int *p = &a; //a是常量，p是指向常量的指针(底层const)
    int *p = (int*)&a; //通过强制类型转换，将const int*转换成int*
    *p = 20;
    // 指针p本质上已经修改了a的值
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("a = %d\n", a); //20，在编译阶段没有作常量替换，所以这里和a的值有关
    printf("*p = %d\n", *p); //20
    printf("*(&a) = %d\n", *(&a)); //20

    return 0;
}