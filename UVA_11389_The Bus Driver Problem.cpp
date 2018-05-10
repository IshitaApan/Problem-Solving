#include<iostream>
#include<algorithm>
using namespace std;
int *morn;
int *eve;
bool compare(int i,int j){
	return i>j;
}

int main() {
	int n,d,r;
	while(cin>>n>>d>>r && !(n==0 && d==0 && r==0)){
		morn = new int[n+1];
		eve = new int[n+1];

		for(int i=0;i<n;i++) cin>>morn[i];
		for(int i=0;i<n;i++) cin>>eve[i];

		sort(morn,morn+n);
		sort(eve,eve+n,compare);
		int cost = 0;
		for(int i=0;i<n;i++) {
			if((morn[i]+eve[i])>d) cost = cost+ ((morn[i]+eve[i])-d)*r;
		}

		cout<<cost<<endl;

	}

}

