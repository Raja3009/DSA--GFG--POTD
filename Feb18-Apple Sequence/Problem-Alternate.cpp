#include<bits/stdc++.h>
using namespace std;

TC - O(N)
SC - O(1)

class Solution{
public:
int appleSequence(int n,int m,string arr){
	int st = 0;
	int ans = 0;
	int count = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] == 'A'){
			ans = max(ans,i-st+1);
		}
		else if(arr[i] == 'O'){
			count++;
			if(count>m){
				while(st<i and arr[st] !='O'){
					st++;
				}
				st++;
			}
			ans = max(ans,i-st+1);
		}
	}
	return ans;
}
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		int M;
		cin>>N>>M;
		string arr;
		cin>>arr;
		
		Solution ob;
		cout<<ob.appleSequence(N,M,arr)<<endl;
	}
	return 0;
}