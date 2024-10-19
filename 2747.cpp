#include <bits/stdc++.h>
using namespace std;

void dashes(){
	for(int i=0; i<39; i++){
		cout<<'-';
	}
	cout<<'\n';
}

void body(){
	for(int j=0; j<5; j++){
		cout<<'|';
		for(int i=0; i<37; i++){
			cout<<' ';
		}
		cout<<'|'<<'\n';
	}
}
	
int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	
	dashes();
	body();
	dashes();
	
	return 0;
}
