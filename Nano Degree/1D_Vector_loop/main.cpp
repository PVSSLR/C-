#include "iostream"
#include "vector"

using std::cout;
using std::vector;

int main() {
 vector<int> v{1,2,3};
 for (int i : v) {
     cout<<i<<"\n";
 }
}

