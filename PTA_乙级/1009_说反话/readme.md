1009.说反话
==
https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805314941992960&page=0

cin读取时会以空格作为分界。读取带空格的字符串时，需要用getline，原型有两个。

1.cin.getline(string,int读取字符数,char结束字符)。结束字符若不指定，则是回车。

2.getline(stream输入流,string,char结束字符)。若是标准输入，则输入流是cin。

注意<<和>>运算符。<<是插入运算符，向流中传送数据。而>>是提取运算符，从流中提取数据。也就是说，这两个符号的用法，在cin和cout中和直觉相反：cout<<用于标准输出，也就是向标准输出流插入数据；cin>>用于标准输入，也就是从标准输入流中提取数据。

stringstream字符流对象可以直接声明，也可以用一个string初始化，即stringstream ss(str)。

可以利用sstream拆解带空格字符串中的空格：对于被这样的一个string初始化过的sstream，用while(ss>>out)就可以了。被分解的部分会依次存入out中。

string.find(char)返回该字符在母串中的下标位置，若不存在，则返回string::npos。那之后，可以用substr拆解。