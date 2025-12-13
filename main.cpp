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


  //1058


  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int N; cin >> N;

  char friends_arr[N+1][N+1];


  for(int i = 0 ; i<N; ++i){
    cin >> friends_arr[i];
  }

  int max_friends = 0 ;

  
  //검사하는 줄에 Y인경우 Y가 다른 줄에도 있는 경우
  //Y가 다른 줄에도 있는 경우 만약 A-B B-C, A-D D-C 
  //A-C는 이미 2-친구인경우 카운트 할 필요가없다.
  //중복이구나

  for(int i = 0 ; i<N; ++i){
    set<int> two_friends;

    for(int j = 0 ; j<N; ++j){
      if(i == j) continue; // 자기자신은 N이므로
      if(friends_arr[i][j] == 'Y'){
        two_friends.insert(j); //검사하는 줄에 Y

        for(int k = 0 ; k<N; ++k){
        if(k==i) continue;

        if(friends_arr[k][j] == 'Y'){
          two_friends.insert(k);
        }
        
        }
      }
      
     
    }

    max_friends = max(max_friends, (int)two_friends.size());

    //size()는 // size_t는 unsigned 정수형 (부호 없는 정수).

    //max(정수 , size_t); 니까 오류가 났던것.
  }

  cout << max_friends << '\n';


  return 0;
}
