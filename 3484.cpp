#include <bits/stdc++.h>
using namespace std;

vector<int>minimo;

struct Node{
	int dato;
	Node * izq, * der;
	
	Node(int d){
		dato = d;
		izq = nullptr;
		der = nullptr;
	}
};

void actualizar(int d, int n){
	if(minimo.size() <= n){
		minimo.push_back(d);
	}
	else{
		minimo[n] = min(minimo[n], d);
	}
}

void agregarNodo(Node* actual, int d, int n){
	if(d < actual->dato){
		if(actual->izq == nullptr){
			actual->izq = new Node(d);
			actualizar(d, n);
		}
		else{
			agregarNodo(actual->izq, d, n+1);
		}
	}
	else{
		if(actual->der == nullptr){
			actual->der = new Node(d);
			actualizar(d, n);
		}
		else{
			agregarNodo(actual->der, d, n+1);
		}
	}
}

int main(int argc, char *argv[]) {
	int n, h;
	cin>>n>>h;
	
	Node * raiz;
	raiz = new Node(h);
	minimo.push_back(h);
	
	for(int i=1; i<n; i++){
		cin>>h;
		agregarNodo(raiz, h, 1);
	}
	
	for(int i=0; i<int(minimo.size()); i++){
		cout<<i<<" "<<minimo[i]<<'\n';
	}
	
	return 0;
}
