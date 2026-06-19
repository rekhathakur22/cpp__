
// c++11 introduced array class it offered many advantages over c-styles arrays
// advantages of array class over c styles arrays is
// 1. it wraps the c-style array and provide extra functionalities and safety features
// 2. it knows its own size and can be used in range based for loops and does not require pass the size of the array to functions
// 3. it can not decayed in pointer and can be used as a member of a class
// 4. Array classes are generally more efficient, light-weight and reliable than C-style arrays.

// operations on array
// 1. at()
// 2. get()
// 3. front()
// 4. back()
// 5. operator[]
// 6. size()
// 7. fill()
// 8. max_size()
// 9. swap()
// 10. empty()

#include <iostream>
#include <array>
#include <tuple> // for get() function
using namespace std;

array<int, 5> arr; // {0,0,0,0,0}  default initialization of array class

int main()
{
  array<int, 5> ar; // {?,?,?,?,?} ?-> garbage value
  cout << ar[3];
  return 0;
}
