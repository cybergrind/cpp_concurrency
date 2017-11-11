#include <iostream>
#include <thread>

using namespace std;

void inf_thread(){
  while (true){
    cout << "in thread\n";
  }
}

int main(){
  thread inf(inf_thread);
  cout << "main ok\n";
  // terminate called without an active exception
  // make: *** [Makefile:5: run_nodetach] Aborted (core dumped)
  // uncomment detach to fix:
  // inf.detach();
  return 0;
}
