829.模拟队列
==
https://www.acwing.com/problem/content/831/

本题要求模拟一个队列。使用一个数组q，队尾指针tt，队头指针hh。初始化时令tt=0，hh=1。从下标1开始插入。本体要求实现四种操作。

第一，在队尾插入一个元素。操作和模拟栈相同，对tt操作。

第二，在队头弹出一个元素。操作和模拟栈相同，对hh操作。

第三，查询队头元素。直接输出q[hh]即可。

第四，判断队列是否为空。当hh>tt时队列为空。当hh=tt时，队列有一个元素。

需要注意的是，在数组中，当队列不空时，队尾指针在队头指针之前（或相等）。插入在队尾插入，而弹出在队头弹出。队尾在队头前面，并一直向前移动，领先于队头，如果只看名称的话，这是一件相当反直觉的事情。需要注意。