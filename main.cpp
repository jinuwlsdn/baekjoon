#include <cstdlib>
#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>


using namespace std;





int main() {


  //1439


  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  string s; cin >> s; 

  int zero =0;
  int one =0;

  if(s[0] == '0') zero++;
  else one ++;

  for(int i = 1; i <s.length() ; ++i){
    if(s[i] != s[i-1]){
      if(s[i] == '0') zero++;
      else one++;
    }
  }

  cout << min(zero,one) << '\n';
  


  


  return 0;
}
