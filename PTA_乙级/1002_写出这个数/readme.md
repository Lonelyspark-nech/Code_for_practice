1002.写出这个数
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805324509200384&page=0

C++中，可以使用typeid函数查看变量类型，需要引入<typeinfo>头文件。查看变量名称时，使用typeid(x).name()输出。

string可以用string类型的迭代器遍历，但是*it的类型却是char型。

string.insert()有多种原型，其中一个是string.insert(下标位置，待插入字符串)，在给定下标位置之前插入。