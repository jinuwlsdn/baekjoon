#include <cstdlib>
#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>



using namespace std;

char friends_arr[51][51];



int main() {


    //1058


  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int N; cin >> N;


  for(int i = 0 ; i<N; ++i){
    char friends; cin >> friends;

    friends_arr[i] = friends; //?
  }


  return 0;
}
