/**
 *
 *Filename: 1059.cpp
 *created in 2023/01/07 00:57:07
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int ex[500010];

inline bool isPrime(ll &x){
	if(x < 2)return false;
	for(ll i = 2; i <= x / i; i ++){
		if(x % i == 0)return false;
	}
	return true;
}

int main(int argc,char** argv){
	cin.tie(0);
	memset(ex, 0, sizeof ex);

	ll n, copy;
	ll minprime = 2;
	cin >> n;
	copy = n;
	while(n > 1){
		for(ll i = minprime; i <= n / i; i ++){
			if(isPrime(i)){
				minprime = i;
				while(n % i == 0){
					ex[minprime] ++;
					n /= i;
				}

			}
		}
		if(n > 1){
			ex[n] ++;
			minprime = n;
			n /= n;
		}

	}
	if(copy == 1) {
		cout << copy << "=" << 1 << endl;
		return 0;
	}
	cout << copy << "=";
	for(ll i = 2; i <= minprime; i ++){
		if(ex[i]){
			if(i == minprime && ex[i] > 1){
				cout << i << '^' << ex[i];
			}
			else if (i == minprime && ex[i] == 1){
				cout << i ;
			}
			else if(ex[i] == 1){
				cout << i << '*';
			}
			else cout << i << '^' << ex[i] << '*';
		}

	}
	cout << endl;


	return 0;
}
