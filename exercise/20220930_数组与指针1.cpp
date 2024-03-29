//日期：20220930
//内容：指向数组的指针与指向数组元素的指针
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; //数组名是指向数组首元素的指针
    // 一维数组名指向数组中的第一个元素，二维数组名指向数组中的第一个行数组
    int *p1; //p1是指向int类型的指针，所以可以指向数组中的第一个元素，但p1不可以指向整个数组
    int (*p2)[5]; //p2是指向拥有5个整型元素数组的指针，指向的是整个数组
    // 运算符优先级：圆括号 > 方括号 > 取内容运算符
    
    p1 = arr; //数组名是数组元素的首地址，也即指向数组中的第一个元素
    p2 = &arr; //要对整个数组取地址，才能赋给p2指针

    // 数组的地址与数组中第一个元素的地址相同但含义不同，*p2 = *(&arr) = *(&p1) = p1
    // 指针加减运算的偏移量要根据指针所指向的元素的整体大小来计算，而不是单个元素的大小
    // 指针取下标运算与加减运算类似，也要根据指针所指向元素整体进行编号再取内容
    cout << p1 << ' ' << p1 + 1 << endl; 
    cout << *p1 << ' ' << *p1 + 1 << endl;
    cout << p2 << ' ' << p2 + 1 << endl;
    cout << *p2 << ' ' << *p2 + 1 << endl;
    cout << **p2 << ' ' << *(int *)p2 << endl;

    return 0;
}