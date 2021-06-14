#include<iostream>
using namespace std;

long long int arr[5][5];
int main(){
int keyi,keyj;
int perfect = 4;

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j] == 1){
				keyi = i;
				keyj = j;
				break;
			}
		}
	}
	
	cout<<(abs(2-keyi) + abs(2-keyj));	

return 0;
}
