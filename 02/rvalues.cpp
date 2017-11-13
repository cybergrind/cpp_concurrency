#include <iostream>

using namespace std;

struct SomeStruct {
  SomeStruct(string&& s) {
    swap(inner, s);
    cout << "In inner: " << &s << " "<< &inner << "\n";
  }
  string inner;
};

int main(){
  string&& i = "awesome";
  auto s = SomeStruct(move(i));
  cout << "Mem: " << &i << " Inner: "<< &s.inner <<"\n";
  cout << "Inner: " << s.inner << "\n";
  i = "new value";
  cout << "New i: " << i << " " << &i << "\n";
  cout << "Inner: " << s.inner << " " << &s.inner << "\n";
  cout << "ok\n";
  return 0;
};
