#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
//
// 常用集合算法
// 学习目标：
// 掌握常用的集合算法
// 算法简介：
// set_intersection		//求两个容器的交集
// set_union			//求两个容器的并集
// set_difference		//求两个容器的差集
// 
// set_union
// 功能描述：
// 求两个容器的并集
// 函数原型：
// set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 求两个集合的并集
// 注意：两个集合必须是有序序列
// beg1容器1开始迭代器
// end1容器1结束迭代器
// beg2容器2开始迭代器
// end2容器2结束迭代器
// dest目标容器开始迭代器
// 
// 总结：
// 求并集的两个集合必须是有序序列
// 目标容器开辟空间需要两个容器相加
// set_union返回值既是并集中最后一个元素的位置
//

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v1.push_back(i + 5);
	}

	vector<int> vTarget;
	//目标容器需要提前开辟空间
	//最特殊的情况 两个容器没有交集，并集就是两个容器size的相加
	vTarget.resize(v1.size() + v2.size());

	//获取交集
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}