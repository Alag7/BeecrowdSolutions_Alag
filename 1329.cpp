#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	while(cin>>n, n){
		int m = 0, j = 0, game;
		for(int i=0; i<n; i++){
			cin>>game;
			if(game){
				j++;
			}
			else{
				m++;
			}
		}
		cout<<"Mary won "<<m<<" times and John won "<<j<<" times\n";
	}
	return 0;
}
