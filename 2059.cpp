#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int L;
	int N, C, T;
	int VR, VT1, VT2;
	while(cin>>L){
		cin>>N>>C>>T;
		cin>>VR>>VT1>>VT2;
		vector<int>path;
		path.push_back(0);
		for(int i=1; i<=N; ++i){
			double tem;
			cin>>tem;
			path.push_back(tem);
		}
		path.push_back(L);
		vector<double>dp(N+2, 0);
		for(int i=1; i<=N+1; ++i){
			double min_ = 1000000;
			for(int j=0; j<i; ++j){
				double d = path[i]-path[j];
				double tem;
				if(d >= C)
					tem = dp[j] + C*1.0/VT1 + (d-C)*1.0/VT2;
				else
					tem = dp[j] + d*1.0/VT1;
				if(j>0)	
					tem += T;
				if(tem<min_)
					min_ = tem;
			}
			dp[i] = min_;
		}
		double time = L*1.0/VR;
		if(dp[N+1]<time)
			cout<<"What a pity rabbit!"<<endl;  
        	else  
            		cout<<"Good job,rabbit!"<<endl;  
	}
	return 0;
}
