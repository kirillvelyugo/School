#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    for (int i = 0; i < 52; i++)
    {
        s += "AB";
    }

    while (s.find ("AA") != string::npos || s.find ("BB") != string::npos || s.find ("AB") != string::npos)
    {
        if (s.find ("AA") != string::npos){
            int p = s.find ("AA");
            s.replace (p, 2, "B");
        }

        if (s.find ("BB") != string::npos)
	    {
	        int p2 = s.find ("BB");
	        s.replace (p2, 2, "A");
	    }

        if (s.find ("AB") != string::npos)
	    {
	        int p3 = s.find ("AB");
	        s.replace (p3, 2, "BA");
	    }
    }

  cout << s << endl;
  return 0;
}
