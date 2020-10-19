#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char str[] = "parrot,owl,sparrow,pigeon,crow";
    char delim[] = ",";
    cout << "The tokens are:" << endl;
    char *token = strtok(str,delim);
    while (token!=NULL)
    {
        cout << token << endl;
        token = strtok(NULL,delim);
    }
   /* cout << token << endl;
     char *token1 = strtok(str,delim);
     cout << token1 << endl; */
    return 0;
}
