#include <iostream>
#include <thread>

using namespace std;


class thread_task {
public:
  void operator()() const {
    cout << "print in thread\n";
  }
};


struct SomeStrunct {
  int a;
  int b;
};

int main(){
  thread tt(thread_task{});
  int a=1;
  int b=0;
  int c = a/b;
  cout << (char) c;
  tt.join();
  cout << "ok\n";
  return 0;
}
