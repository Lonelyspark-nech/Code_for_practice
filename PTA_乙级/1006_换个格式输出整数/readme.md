1006.换个格式输出整数
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805318855278592&page=0

string类的常见用法：

1.插入
--
s.push_back('c'):尾插一个字符；

s.insert(pos,'c'):在指定位置插入一个字符。pos可以使用迭代器。

2.拼接
--
s.append('s'):两个字符串进行拼接。

也可以直接使用加法。

3.遍历
--
使用下标或者迭代器。

正向迭代器:string::iterator iter=s.begin()

反向迭代器:string::iterator iter=s.rbegin()