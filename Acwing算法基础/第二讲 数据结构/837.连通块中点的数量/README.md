837.连通块中点的数量
==
https://www.acwing.com/problem/content/839/

本题考查并查集。与上一题不同的是，本题需要多维护一个集合大小。需要多增加一个size数组。初始化时，令所有size为1。在维护过程中，只保证根节点的size元素有意义。

需要把基本操作改变一下。上一题中，合并集合不需要判断两个元素原先是否在同一个集合中，因为如果是的话，赋值操作不会改变值。但是在本题中，合并前需要判断两个元素不属于一个集合才能合并。合并完成后，令两个集合的size相加，赋给新的根节点。