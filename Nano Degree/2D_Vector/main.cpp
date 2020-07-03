#include "iostream"
#include "vector"
using std::vector;
using std::cout;
int main(){
    vector<vector<int>> v_2{{1,2,3},{4,5,6},{7,8,6}};
    cout<<v_2[0][1];
    cout<<v_2[0][2];
    cout<<v_2[0][3];
    cout<<v_2[1][0];
    cout<<v_2[1][1];
    cout<<v_2[1][2];
    cout<<"\n";
}