#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	string name; int c, newtons;
	cin>>c;
	while(c--){
		cin>>name>>newtons;
		if(name == "Thor"){
			cout<<"Y\n";
		}
		else{
			cout<<"N\n";
		}
	}
	return 0;
}
