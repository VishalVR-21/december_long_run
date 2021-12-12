#include<bits/stdc++.h>

using namespace std;

int mostFrequent(vector < int > & arr, int n)
 {
  unordered_map < int, int > hash;
  int res = -1;
  
  for (int i = 0; i < arr.size(); i++) 
  {
    hash[arr[i]]++;
  }

  for (auto i: hash) 
  {
    if (res < i.second) 
    {
        res = i.second;
    }
  }
  return res;
}

int main() {
  int a = 0;
  int b = -1;
  int t, n, f;
  cin >> t;
  while (t--) {
    cin >> n;
    vector < int > arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    f = mostFrequent(arr, n);
    if (f == n) {
      cout << a << endl;
    } else if (f <= 1 && n>=2) {
      cout << b << endl;
    } else {
      cout << (n-f+1) << endl;
    }
  }
  return 0;
}