#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std; 

class Solutions{
public:
vector<vector<int>> spiral(int m, int n){ // m-> number of rows, n-> number of columns
    int top=0;int buttom=m-1;
    int left=0;int right=n-1; 
    char x = 'X';
    vector<vector<int>> results(m, vector<int>(n, 0));
    while(top<=buttom && left<=right){
        for(int i=left;i<=right;i++){
            results[top][i]=x;
        }
        top++;
        for(int i=top;i<=buttom;i++){
            results[i][right]=x;
        }
        right--;
        
        if(top<=buttom){
            for(int i=right;i>=left;i--){
                results[buttom][i]=x;
            }
            buttom--;
        }
        if(left<=right){
            for(int i=buttom;i>=top;i--){
                results[i][left]=x;
            }
            left++;
        }
        x = (x == '0')? 'X': '0';
    }   
    return results;
    }
};

int main(){
    Solutions sol;
    vector<vector<int>> results = sol.spiral(7,10);
    for(const auto &row:results){
        for(char val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}