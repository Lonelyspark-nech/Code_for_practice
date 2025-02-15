1025.反转链表
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805296180871168

手动建立链表然后翻转就行。命名时不要取过于简洁常见的，可能与库命名冲突。注意以下几点：

1.一旦反转，链表的起始元素就会改变

2.反转之后，各部分的连接方式需要注意。即前一部分的最后一个元素指向后一部分的第一个元素。若后一部分翻转了，前一部分末尾元素的next也要更新。但若后一部分不足以反转，那这部分就不用更新。或者会更新一个相同的值。

3.调试时需要注意边界值，比如单位为1的翻转（即实际不反转），以及单位和链表长度相同的翻转（整体翻转）等。题目给出了翻转单位K是小于等于N的，同时N、K是正整数，也就是说任一个为零、或者K>N的情况不用考虑。使用边界条件调试会事半功倍。

4.最难想的一点：题目给出的N是链节数目，而不是链表长度。也就是说，给出的链节之中，有可能存在不属于链表的链节。需要遍历一次，更新链表长度。