#include <bits/stdc++.h>
using namespace std;

long long matrix[15][15];
int digits[15];

int cantDigits(long long n){
	int c=0;
	while(n){
		c++;
		n/=10;
	}
	return c;
}

void precompute(){
	long long v=1;
	for(int i=0; i<15; i++){
		matrix[i][i] = v;
		digits[i] = cantDigits(v);
		v *= 4;
	}
	for(int i=0; i<15; i++){
		for(int j=i+1; j<15; j++){
			matrix[i][j] = 2*matrix[i][j-1];
			matrix[j][i] = matrix[i][j];
		}
	}
}
	
void printMatrix(int n){
	for(int i=0; i<n; i++){
		cout<<right<<setw(digits[n-1])<<matrix[i][0];
		for(int j=1; j<n; j++){
			cout<<right<<setw(digits[n-1]+1)<<matrix[i][j];
		}
		cout<<'\n';
	}
	cout<<'\n';
}

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	precompute();
	int n;
	while(cin>>n, n){
		printMatrix(n);
	}
	return 0;
}
