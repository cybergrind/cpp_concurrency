#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

void in_thread() {
  std::cout << "I'm in thread\n";
  for (int i=0; i<10; i++){
    std::cout << ".";
    this_thread::sleep_for(chrono::nanoseconds(1));
  }
}

int main() {
  cout << "before thread\n";
  thread t(in_thread);
  this_thread::sleep_for(chrono::nanoseconds(100000));
  cout << "before join\n";
  
  t.join();
  cout << "after join\n";
  return 0;
}
