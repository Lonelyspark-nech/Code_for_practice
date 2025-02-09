1017.A除以B
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805305181847552&page=0

考查高精度除法。这里的除数B是在int类型范围之内的。

vector.front()和vector.back()返回首尾元素的引用。最后注意去除前导零。每个输入都可能有前导零。

vector.pop_back()可以删除最后一个元素。会缩减vector的size，但是不会真正“删除”这个元素。