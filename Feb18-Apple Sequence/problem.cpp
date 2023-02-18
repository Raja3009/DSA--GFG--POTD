#include<bits/stdc++.h>
using namespace std;

Two Pointer
TC - O(N)
SC - O(1)
class Solution{
    public:
    
    int appleSequence(int n,int m,string arr){
        int st = 0;
        int end = 0;
        int ans = 0;
        while(end<n){
            if(m>0){
                if(arr[end] == 'O'){
                    m--;
                }
            }
            else{
                if(arr[end] == 'O'){
                    while(st<end && arr[st] !='O'){
                        st++;
                    }
                    st++;
                }
            }
            ans = max(ans,end-st+1);
            end++;
        }
        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        string arr;
        cin>>arr;

        Solution ob;
        cout<<ob.appleSequence(N,M,arr)<<endl;
    }
    return 0;
}