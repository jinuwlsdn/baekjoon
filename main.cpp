#include <cstdlib>
#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <stack>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>



 //1074 Z

//등분하면서 자취를 남기면될것같은데

using namespace std;






int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  
  
  //2512

  //지방의 수 N 3<=N<=10000 
  //총 예산 M은 N이상 10억이하 

  //모든 요청이 배정될 수 있는 경우엔 요청한 금액 그대로 배정.

  //일단 지방에서 요구하느 예산요청들의 합을 비교해야한다
  //국가예산 > 지방예산 -> max 비교
  //국가예산 < 지방예산 <- 상한액 설정 
  
  
  // 정해진 총액 이하에서 
  // 가능한 한 최대의 총 예산을 다음과 같은 방법으로 배정한다.
  


  int N,M;

  cin >> N;

  vector<int> value(N);


  //총 예산이 M이니까 
  int sum = 0;

  int max_value = 0;
  for(int i = 0 ; i <N; ++i){
    cin >> value[i];
    sum += value[i];
    
    if(max_value < value[i]) max_value = value[i];
  }

  cin >> M;

  //M은 국가예산
  if(M > sum) cout << max_value << '\n';  return 0;


  int result = 0;


  int low = 1 ; 
  int high = max_value;


  while(low <= high){
    int mid = (low + high) / 2;


    int area_sum = 0;

    //mid 보다 값이 큰 value가 있다면 그 value 대신
    //mid의 값으로 sum에다가 더한다.

    for(int i = 0 ; i < N; ++i){
      if(mid >= value[i]){
        area_sum += value[i];
      }
      else{
        //mid < value[i]


      
        area_sum += mid;
      }
    }


    //처음의 mid의 값은 75인데 
    //그러면 처음 반복문의 경우에는 
    //120 110 140 150 > M

    //area_sum > M
    if(area_sum <= M) {
      result = mid;

      low = mid + 1;
    }
    else{
      high = mid - 1;
    }


  }


  cout << result << '\n';


 
  return 0;
}