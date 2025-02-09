1005.继续(3n+1)猜想
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805320306507776&page=0

值得注意的是，虽然题目输入数字的范围是2-100的正整数，但是验证过程中要计算(3n+1)/2，也就是说可能找到的数字范围比100大得多。事实上数组开到1000也报错了。开到10000通过。

vector没有find方法，可以用<algorithm>中的find方法，是find(v.begin(),v.end(),target),返回查找到的位置的迭代器，若无，则返回end().

vector.erase()之后，元素会前移。也就是说，迭代器目前指向的位置是之前的“下一个元素”的位置。如果直接前移，则遍历可能会漏。