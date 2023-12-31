#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

//parata spoj******************+++++++++++++++++++++++++++++

bool isposs(vector<int> cooksRank,int nP,int mid){
	int currP = 0;
	for(int i=0;i<cooksRank.size();i++)
	{
		int R = cooksRank[i], j=1;
		int timetoken = 0;
		
		while(true){
			if(timetoken + j*R <=mid){
				++currP;
				timetoken += j*R;
				++j;
			}
			else{
				break;
			}
		}
			if(currP>= nP){
		return true;
	}
	}
		return false;
	
}

int Mintimetotask(vector<int> cooksRank,int nP){
	int start =0;
	int highest  = *max_element(cooksRank.begin(),cooksRank.end());
	int end  = highest * (nP * (nP +1)/2);
	
	int ans  =-1;
	
	while(start<=end){
		int mid = start + (end-start)/2;
		
		if(isposs(cooksRank,nP,mid)){
			ans = mid;
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;
}

int main() {
int T;
cin>>T;

while(T--)
{
	int nP,nC;
	cin>>nP>>nC;
	
	vector<int> cooksRank;
	
	while(nC--)
	{
		int R;
		cin>>R;
		
		cooksRank.push_back(R);
	}
	cout<<Mintimetotask(cooksRank,nP)<<endl;
}
	return 0;
}