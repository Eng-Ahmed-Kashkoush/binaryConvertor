// The hello world program
#include <iostream>
#include <string>

using namespace std;

// todo The function
void TraverseString(string &Name)
#include <string>
{
  // ! Loop throug characters of the string-->Name
  for (int i = 0; i < Name.length(); i++)
  {
   
    cout << Name[i] << " --> " << int(Name[i]) << " -->";

    // ?Traverse the decimal to  binary
      int n = int(Name[i]);
   int l;
   string bin;

  
   for (l = 0; n > 0;)
   {
     // so that I get the net value of the decimal
     l = n % 2;
     n = (n - (n % 2)) / 2;
     // converting a number into a string
     bin += to_string(l);
   }
   cout << bin << endl;
  cout << i << endl;
  
  }
}



// Driver Code
int main()
{
  string Name = "Ahmed Kashkoush";

  TraverseString(Name);

  return 0;
}
