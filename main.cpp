#include <cstdlib>
#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>


using namespace std;



string s;


int main() {


  //1541

  


  //최소 양수가 있다고 가정하면 뒤에 오는것들은 모두 빼기가 와야한다.

  
  string num = "";
  //55
  //55-50+40 55-(50+40) = -35
  //sum = 55 -> m = true 55-50 + 니까 num = "" -> 40
  //sum -= stoi(40);

  bool m = false;

  int sum = 0 ; //결과값

  cin >> s;

  for(int i = 0 ; i<=s.size(); ++i){
    if(s[i] == '+' || s[i] == '-' || s[i] == '\0'){
      if(m == true){
        sum -= stoi(num);
        num = "";
      }
      else if(m == false){

        sum += stoi(num);
        num = "";
      }
    }
    else{
      num += s[i];
    }

    if(s[i] == '-'){
      m = true;
    }
    //

  }

  

  cout << sum <<'\n';

  return 0;
}
