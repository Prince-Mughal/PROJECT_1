#include <iostream>
#include <ctype.h> /* toupper(), tolower(), topunct(),islower(),isupper()*/
using namespace std;

int main(void){

/* TO HOLD A CHARACTER */
unsigned char CHAR;
/* PROMPT A MESSAGE */
cout<<"ENTER A CHARACTER: ";
CHAR = cin.get(); /* READ A CHARACTER */
/* CHECK INPUT AND PROCESS IT ACCORDINGLY */

/* UPPER TO LOWERCASE */
if( isupper(CHAR) != 0 ){
    cout<<CHAR
        <<" CONVERTED TO "
        <<(char)tolower(CHAR)
        <<endl;
/* LOWER TO UPPER CASE */
}else if( islower(CHAR) != 0 ){
    cout<<CHAR
        <<" CONVERTED TO "
        <<(char)toupper(CHAR)
        <<endl;
/* CHECK SPECIAL CHARACTER 
(EXCLUDING ALPHANUMERIC AND SPACE) */
}else if( ispunct(CHAR) != 0 ){
    cout<<CHAR
        <<" IS SPECIAL CHARACTER."
        <<endl;
}


return 0;}
