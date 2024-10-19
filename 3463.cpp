#include <bits/stdc++.h>
#define TOPE 2147483648
using namespace std;

map<long long, vector<pair<int, int>>>mapaSumas;
vector<long long>cuadrados;
vector<tuple<int, int, int, int>>casos;
int valorObjetivo;

void precalcular(){
	long long n=0, sum;
	while(n*n*n*n <= INT_MAX){
		cuadrados.push_back(n*n*n*n);
		n++;
	}
//	cout<<n<<endl;
	n = cuadrados.size();
	for(int i=0; i<n and 2*cuadrados[i] <= TOPE; i++){
		for(int j=i; j<n and cuadrados[i] + cuadrados[j] <= TOPE; j++){
			sum = cuadrados[i] + cuadrados[j];
			mapaSumas[sum].push_back({i, j});
		}
	}
}
	
void solve(){
	long long valor;
	auto limite = mapaSumas.upper_bound(valorObjetivo);
	
	for(auto it = mapaSumas.begin(); 2*(it->first) <= valorObjetivo; it++){
		valor = valorObjetivo - (it->first);
		while(limite == mapaSumas.end() or limite->first > valor){
			limite--;
		}
		if(limite->first == valor){
			for(auto& c1 : it->second){
				for(auto& c2 : limite->second){
					if(c1.second <= c2.first){
						casos.push_back({c1.first, c1.second, c2.first, c2.second});
					}
				}
			}
		}
		
	}
}

int main(int argc, char *argv[]) {
//	cin.tie(0); ios_base::sync_with_stdio(0);
	int q;
	cin>>q;
	precalcular();
	while(q--){
		cin>>valorObjetivo;
		solve(); //Meet in the middle approach
		sort(casos.rbegin(), casos.rend());
		cout<<casos.size()<<'\n';
		while(!casos.empty()){
			auto t = casos.back();
			cout<<get<0>(t)<<' '<<get<1>(t)<<' '<<get<2>(t)<<' '<<get<3>(t)<<'\n';
			casos.pop_back();
		}
	}
	
	return 0;
}
