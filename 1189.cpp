#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	float matrix[12][12];
	long double total=0;
	int k=0, cont=0;
	char c;
	cin>>c;
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			cin>>matrix[i][j];
			if(j<k){
				total += matrix[i][j];
				cont++;
			}
		}
		if(i<5){
			k++;
		}
		if(i>5){
			k--;
		}
	}
	if(c == 'M'){
		total /= cont;
	}
	cout<<fixed<<setprecision(1)<<total<<'\n';
	return 0;
}
