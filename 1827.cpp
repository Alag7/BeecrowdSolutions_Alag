#include <bits/stdc++.h>
using namespace std;

void printM(vector<vector<int>>&m, int sz){
	for(int i=0; i<sz; i++){
		for(int j=0; j<sz; j++){
			cout<<m[i][j];
		}
		cout<<'\n';
	}
	cout<<'\n';
}

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	
	int n;
	while(cin>>n){
		vector<vector<int>>sq(n, vector<int>(n, 0));
		int m = n/3;
		for(int i=0; i<n; i++){
			if(i == n/2){
				sq[i][i] = 4;
			}
			else{
				sq[i][i] = 2;
				sq[i][n-i-1] = 3;
			}
		}
		for(int i=m; i<(n-m); i++){
			for(int j=m; j<(n-m); j++){
				if(sq[i][j] != 4){
					sq[i][j] = 1;
				}
			}
		}
		printM(sq, n);
	}
	
	return 0;
}
