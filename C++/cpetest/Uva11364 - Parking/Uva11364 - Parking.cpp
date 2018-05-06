/*******************************************************/
/* UVa 11364 Parking                                   */
/* Author: LanyiKnight [at] knightzone.org             */
/* Version: 2012/09/19                                 */
/*******************************************************/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int t, n, shop[25];
  while( scanf( "%d", &t ) != EOF ){
    for( int i = 0 ; i < t ; i++ ){
      cin>>n;
      for( int j = 0 ; j < n ; j++ )
        {cin>>shop[j];}
      sort( shop, shop+n );
      printf( "%d\n", (shop[n-1]-shop[0])*2 );
    }
  }
  return 0;
}
