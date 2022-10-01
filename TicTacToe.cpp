#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void fast(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("inp.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  #endif   
}

void solve()
{
  char pos[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
  int a;
  int curr=1;
  char t='X';
  while(true){
    do{
cout<<"ENTER A POSITION"<<endl;
cin>>a;
}while(pos[a-1]=='X' || pos[a-1]=='O');

  pos[a-1]=t;
  cout<<endl;
  cout<<" "<<pos[0]<<" | "<<pos[1]<<" | "<<pos[2]<<"  "<<endl;
  cout<<"---+---+---"<<endl;
  cout<<" "<<pos[3]<<" | "<<pos[4]<<" | "<<pos[5]<<"  "<<endl;
  cout<<"---+---+---"<<endl;
  cout<<" "<<pos[6]<<" | "<<pos[7]<<" | "<<pos[8]<<"  "<<endl;
  cout<<endl;

  if(pos[0]==t and pos[1]==t and pos[2]==t || 
    pos[3]==t and pos[4]==t and pos[5]==t ||
    pos[6]==t and pos[7]==t and pos[8]==t ||
    pos[0]==t and pos[3]==t and pos[6]==t || 
    pos[1]==t and pos[4]==t and pos[7]==t ||
    pos[2]==t and pos[5]==t and pos[8]==t ||
    pos[0]==t and pos[4]==t and pos[8]==t ||
    pos[2]==t and pos[4]==t and pos[6]==t){
    cout<<t<<" is WIINER"<<endl;
    break;

  }

  if(t=='X')t='O';
  else t='X';

  curr++;
  if(curr>9){
    cout<<"DRAW"<<endl;
    break;
  }
  }
}
int main() {
  fast();
  int t;
  cin>>t;

  while (t--){
    solve();
  }
}
