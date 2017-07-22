#include <iostream>
#include <cstring>
using namespace std;


int main() {
   char input[] = "jsdfjdsfhracecarksdfjsdkfmalayalamcheck";
   char* ptr = input;

   int location = 0;
   int maxsize = 0;
   for ( int a = 0; a < strlen(input) - 1; a++ ) {
       int left = a;
       int right = a;
       int count = 0;
       while ( left > 0 ) {
           if ( input[left--] != input[right++] ) {
               break;
           }
           count++;
       }
       if ( count > maxsize ) {
          maxsize = count;
          location = a;
       }
   }

   cout << maxsize << " @ " << location << endl;
   int start = location - maxsize;
   int end = location + maxsize;
   for ( int a = start + 1; a < end; a++ ) {
       cout << input[a];
   }
   return 0;
}
