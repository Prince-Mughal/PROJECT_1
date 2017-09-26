#include <iostream>
using namespace std;

int main(void){

/* To HOLD INPUT SECond(s)*/
long SEC    = 0;
/* TO HOLD HOUR(s) */
long HOUR   = 0;
/* TO HOLD MINUTE(s) */
long MINUTE = 0;
/* TO HOLD SECOND(s) */
long SECOND = 0;

/* INPUT VALIDATION */
do{
    cout<<"ENTER THE NUMBER OF SECOND(s)> ";
    cin>>SEC;
/* IF INPUT IS VALID
   THEN BREAK THE INIFINITE LOOP. */
    if(SEC >= 1000){
        break; }
/* PRINT WARNNING MESSAGE...*/
    cout<<"YOU SHOULD ENTER AN INTEGER GREATER THAN OR EQUAL TO 1000"<<endl;
}while(true);
/* PROCESS */

/* CALCULATE HOUR */
HOUR   =  SEC / 3600;
/* CALCULATE MINUTE */
MINUTE = (SEC % 3600) / 60;
/* CALCULATE SECONDS */
SECOND = (SEC % 3600) % 60;




/* DISPLAY RESULT ON SCREEN */
cout<<SEC
    <<" SECONDS IS EQUIVALENT TO "
    <<HOUR<<" HOUR(s) "
    <<MINUTE<<" MINUTE(s) "
    <<SECOND<<" SECOND(s). "<<endl;

return 0;}
