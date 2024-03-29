#include<iostream>
#include<string>
#include"Person.h"
//如果直接使用这种方式会出现报错，因为编译器只能看到头文件中的代码而无法生成源文件代码中的函数
//原因是类模板函数的创建时机是调用阶段，只有在调用的时候才会创建
//

//第一种解决方式，直接包含 源文件
#include"Person.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include"Person.hpp"
using namespace std;
//
// 1.3.7 类模板分文件编写
// 学习目标：
// 掌握类模板成员函数分文件编写产生的问题以及解决方式
// 问题：
// 类模板中成员函数创建时机实在调用阶段，导致分文件编写时链接不到
// 解决：
// 解决方式1：直接包含.cpp源文件
// 解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp,hpp是约定的名称，并不是强制
// 
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "姓名：" << m_Name << " 年龄：" << m_Age << endl;
//}

void test01()
{
	Person<string, int> p("Jerry", 18);
	p.ShowPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}