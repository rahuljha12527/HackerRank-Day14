#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


class Difference{
private:
	vector<int> elements;

public:
	int maximumDifference;

	Difference(std::vector<int> a){
		elements=a;
		maximumDifference=0;	
	}
	void computeDifference(){
		int n=elements.size()-1;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(maximumDifference<abs(elements[i]-elements[j+1])){
					maximumDifference=abs(elements[i]-elements[j+1]);
				}
			}
		}
	}
};


int main(){
	int N;
	cin>>N;
	std::vector<int> v;
	for(int i=0;i<N;i++){
		int e;
		cin>>e;
		v.push_back(e);
	}

	Difference d(v);
	d.computeDifference();
	cout<<d.maximumDifference;

	return 0;
}
