#include <iostream>
using namespace std;
#include<cstring>
void trimSpaces(char input[]) 
{
    int j=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]!=' ')
        {
        
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


