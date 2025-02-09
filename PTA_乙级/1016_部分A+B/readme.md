1016.部分A+B
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805306310115328&page=0

string.erase()可用来删除字符。可以给定单个位置（不是迭代器），删除到结尾的所有字符（包括该位置）；也可以再给定长度，删除从该位置开始这些长度的字符。返回修改后的string对象引用。同时会修改原string对象。

若参数是单个迭代器，则删除迭代器位置的单个字符；若是两个迭代器，则删除之间的所有字符。返回删除后下一个位置的迭代器。

string.replace()可用于替换字符。

<algorithm>中的count函数，可用于统计字符出现次数。count(begin(),end(),char)。