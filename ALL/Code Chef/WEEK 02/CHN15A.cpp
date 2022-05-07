#include <iostream>
using namespace std;

void div(){
    int n,k;
    int count =0;
    cin >> n>>k;
    for(int i=0; i<n; i++ ){
        int x;
        cin >>x;
        x = x+k;
        if(x%7 == 0)
        count++;
        
    } 
    cout << count<< "\n";  
    

}
int main()
{
  int t;
  cin >>t;
  while(t--){
      div();
  }
}