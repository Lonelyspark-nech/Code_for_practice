852.spfa判断负环
==
https://www.acwing.com/problem/content/description/854/

本题考察负权图中负权回路的判断。本题使用spfa算法，进行一些改动。

在普通的spfa算法中，dis[i]表示从顶点1到顶点i的最短路径距离。增加一个cnt[n]数组，表示这一最短路径的长度。当dis[i]被dis[j]更新时，cnt[i]置为cnt[j]+1。也就是对于这一条边来说，终点的最短路径长度是起点最短路径长度+1。当cnt[i]大于等于n时，该路径中的顶点数为n+1个，也就是说至少有一个重复顶点，即出现了负权回路，返回true。当队列为空，算法结束，且没有返回true时，证明没有负权回路，返回false。

需要注意的是，题目并不保证是连通图。也就是说，虽然可能存在负权回路，但是并不一定由顶点一出发就可以达到。该问题的解决方法是，初始化时，将所有顶点都入队。这样就可以从所有顶点开始遍历。dis[i]表示以i为终点的一条最短路径的长度，cnt[i]表示该条路径的跳数。至于路径的起点是哪个顶点并不重要，因为不论是哪条路径，只要cnt[i]<n时结束算法，就意味着这条路径上没有负权回路。反之，若存在负权回路，则一定会在cnt>=n时继续更新。这里dis[i]的绝对值就没有意义，只需要相对的大小就可以了。从这个角度讲，dis数组甚至不需要初始化。