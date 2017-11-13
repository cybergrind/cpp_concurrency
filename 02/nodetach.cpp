#include <iostream>
#include <thread>

using namespace std;

void inf_thread(){
  while (true){
    cout << "in thread\n";
  }
}


void run_thread(){
  thread inf(inf_thread);
  // terminate called without an active exception
  // make: *** [Makefile:5: run_nodetach] Aborted (core dumped)
  // uncomment detach to fix:
  // inf.detach();
}

int main(){
  cout << "before thread\n";
  try {
    run_thread();
  } catch (...){
    // never called, even when exception
    cout << "catch error\n";
  }
  // never called if exception occured
  cout << "main ok\n";
  return 0;
}
