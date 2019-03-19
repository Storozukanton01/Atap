#include <iostream>
#include <vector>

using namespace std;

int main()

{
 int n, m, mid;
 cin >> n >> m;
 vector<int> a(n);
 vector<int> b(m);
 int res=0, res1=0;
 for (int i = 0; i < n; ++i)
  {
 cin >> a[i];
  }
  for (int i = 0; i < m; ++i)
  {
 cin >> b[i];
  }
  for (int i = 0; i < m; i++)
    {
  int l = 0, r = n - 1;
  while (l < r)
        {
         mid = (l + r) / 2;
            if (a[mid] == b[i])
            {
              res=mid;
              r=mid-1;
            }
            else if(a[mid]>b[i])
            {
             r = mid - 1;
            }
            else 
            {
             l=mid + 1;
            }
        }
        while (l < r)
        {
         mid = (l + r) / 2;
            if (a[mid] == b[i])
            {
              res1=mid;
              l=mid+1;
            }
            else if(a[mid]>b[i])
            {
             r = mid - 1;
            }
            else 
            {
             l=mid + 1;
            }
        }
        cout<<res<<" "<<res1<<endl;
    }
}
