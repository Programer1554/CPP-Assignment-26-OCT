#include <iostream>
using namespace std;
class natural{
public:
  int a;
  int n;
  int sum;
  meth(){
    cin>>n;
    for(a=1; a<=n; a++){
      sum+=a;
    }
    cout<<sum;
  }
};

int main(){
  meth();
  return 0;
}
