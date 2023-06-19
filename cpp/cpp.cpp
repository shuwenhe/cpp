#include <iostream>

using namespace std;

// 高斯求和公式求和1+2+3+...+100
int gauss() {
    int sum = 0;
    sum = (1+100)*100/2;
    cout << "gauss sum=" << sum << endl;
    return 0;
}

// for循环求和1+2+3+...+100
int forSum(){
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "for sum=" << sum << endl;
    return 0;
}
// linux命令
// 文件命令

// C++
// 数据类型
int intType(){
	// int 整型
	int num = 10;
	cout<<"num = "<<num<<endl;
	return 0;
}

int shortType(){
	short short_num = 20;
	cout<<"short_num = "<<short_num<<endl;
	return 0;
}

int longType(){
	long long_num = 1234567890;
	cout<<"long_num = "<<long_num<<endl;
	return 0;
}

int longLongType(){
	long long long_long_num =9876543210;
	cout<<"longLong_num ="<<long_long_num<<endl;
	return 0;
}	

// 浮点型
int floatType(){
	float pi = 3.14;
	cout<<"pi ="<<pi<<endl;
	return 0;
}


// 二进制


// 哈希表

// 图

// 树
// 二叉树
// 二叉树：前序、中序、后续遍历

// 字符串的操作

// 递归

// 时间复杂度

// algorithm

// sort 排序
// 插入排序
// 冒泡排序
// 堆排序
// 归并排序

// 分治算法

// 2022CSP-S-1 假期计划（holiday）
// 小熊的地图上有n个点，其中编号为l的是它的家、编号为 2,3,…,n的都是景点。部分点对之间有双向直达的公交线路。如果点 x与 z1、z1 与 z2、……、zk−1 与 zk、zk 与y之间均有直达的线路，那么我们称 x与 y之间的行程可转车 k次通达；特别地，如果点 x与 y之间有直达的线路，则称可转车 0次通达。
// 很快就要放假了，小熊计划从家出发去 4个不同的景点游玩，完成 5 段行程后回家：家 →→ 景点 A →→ 景点 B →→ 景点 C →→ 景点 D →→ 家且每段行程最多转车 k次。转车时经过的点没有任何限制，既可以是家、也可以是景点，还可以重复经过相同的点。例如，在景点 A →→ 景点 B 的这段行程中，转车时经过的点可以是家、也可以是景点 C，还可以是景点 D →→ 家这段行程转车时经过的点。
// 假设每个景点都有一个分数，请帮小熊规划一个行程，使得小熊访问的四个不同景点的分数之和最大。
int holiday(){
	cout<<"holiday"<<endl;
	return 0;
}

int hello(){
	cout<<"hello"<<endl;
	return 0;
}

#include<iostream>  
#include <limits>
 
using namespace std;  
  
int typeTest()  {  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}

// 局部变量
int sum(){
	int a,b,sum; // 局部变量声明
	a = 1,b = 2; // 实际初始化
	sum = a + b;
	cout<<"sum = "<<sum<<endl;
	return 0;
}

int main() {
	sum();
}

