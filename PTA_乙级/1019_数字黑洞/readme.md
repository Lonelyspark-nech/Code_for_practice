1019.数字黑洞
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805302786899968&page=0

虽然题目描述中说输入是四位正整数，但是输入格式中只给定了范围，而没有给定位数。也就是说，输入不一定是4位。

同时，在计算过程中，由于stoi会去除前导零，注意输出位数，同时要注意剩余结果不足四位的情况。

string不能insert一个常字符。