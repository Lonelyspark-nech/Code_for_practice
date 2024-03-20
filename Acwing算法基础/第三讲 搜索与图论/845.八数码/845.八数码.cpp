#include<iostream>
#include<cstring>
#include<queue>
#include<unordered_set>
using namespace std;

string start;
string target="12345678x";

typedef pair<string,int>PII;
queue<PII> q;
unordered_set<string> s;

int bfs(){
	q.push({start,0});
	while(!q.empty()){
		PII now=q.front();
		q.pop();
		if(target==now.first)return now.second;
		else{
			string tmp;
			tmp=now.first;
			int i=tmp.find('x');
			if(i!=0&&i!=3&&i!=6){
				swap(tmp[i],tmp[i-1]);
				if(s.find(tmp)==s.end()){
					s.insert(tmp);
					q.push({tmp,now.second+1});
				}
				swap(tmp[i],tmp[i-1]);
			}
			if(i!=2&&i!=5&&i!=8){
				swap(tmp[i],tmp[i+1]);
				if(s.find(tmp)==s.end()){
					s.insert(tmp);
					q.push({tmp,now.second+1});
				}
				swap(tmp[i],tmp[i+1]);
			}
			if(i!=0&&i!=1&&i!=2){
				swap(tmp[i],tmp[i-3]);
				if(s.find(tmp)==s.end()){
					s.insert(tmp);
					q.push({tmp,now.second+1});
				}
				swap(tmp[i],tmp[i-3]);
			}
			if(i!=6&&i!=7&&i!=8){
				swap(tmp[i],tmp[i+3]);
				if(s.find(tmp)==s.end()){
					s.insert(tmp);
					q.push({tmp,now.second+1});
				}
				swap(tmp[i],tmp[i+3]);
			}
		}
	}
	return -1;
}

int main(){
	char a[2];
	for(int i=0;i<9;i++){
		cin>>a;
		start+=*a;
	}
	int res=bfs();
	printf("%d",res); 
	return 0;
} 
