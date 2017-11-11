#include <iostream>
#include <thread>

using namespace std;


class thread_task {
public:
  void operator()() const {
    cout << "print in thread\n";
  }
};

int main(){
  thread tt(thread_task{});
  tt.join();
  cout << "ok\n";
  return 0;
}
