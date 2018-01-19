//Sidhant Chadha and Varun Dalal
#include "Project1-A04743047-backward.h"
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<cstdlib>
#include<cstring>

using namespace std;


int main()

{
intializing();
Display();


cout<<"\n"<<endl;
cout<<"*******************************************************************"<<endl;
cout<<"\n\n\n\n\n"<<endl;
cout<<"               WELCOME TO EXPERT BASED CANCER DIAGONOSIS SYSTEM      "<<endl;
cout<<"\n\n\n\n\n"<<endl;

cout<<"*******************************************************************\n\n"<<endl;

cout<<"\n PLEASE SELECT FROM THE FOLLOWING LIST OF SYMPTOMS : \n"<<endl;

cout<<" 1. ARE YOU HAVING ANY HEADACHE ? \n"<<endl;
cout<<" 2. ARE YOU HAVING ANY SWELLING IN BRAIN ? \n"<<endl;
cout<<" 3. ARE YOU HAVING ANY SEIZURES ?  \n"<<endl;
cout<<" 4. ARE YOU HAVING ANY VOMMITTING ?  \n"<<endl;
cout<<" 5. ARE YOU HAVING ANY CHANGE IN URINE COLOR ? \n"<<endl;
cout<<" 6. ARE YOU HAVING ANY FREQUENT URINATION PROBLEM ? \n"<<endl;
cout<<" 7. ARE YOU HAVING ANY BURNING SENSATION WHILE URINATING ?  \n"<<endl;
cout<<" 8. ARE YOU HAVING ANY COUGH ? \n"<<endl;
cout<<"9. ARE YOU HAVING ANY WHEEZING PROBLEM ? \n"<<endl;
cout<<"10. ARE YOU HAVING ANY WEIGHT LOSS RELATED PROBLEMS ? \n"<<endl;
cout<<"11.ARE YOU HAVING ANY JAUNDICE FEVER ? \n"<<endl;
cout<<"12.ARE YOU HAVING ANY BLOATING ? \n"<<endl;
cout<<"13.ARE YOU HAVING ANY CRAMPS  ? \n"<<endl;


/****** inference section *****/
char choice[1];
renter:
cout<<"ENTER CHOICES FROM 1-11 ONLY : "<<endl;
cin>>choice;
if(strcmp(choice,"1")== 0)
strcpy(Variable,"BrainCancer");

else if(strcmp(choice,"2")== 0)
strcpy(Variable,"BrainCancer");

else if(strcmp(choice,"3")==0)
strcpy(Variable,"BrainCancer");

else if(strcmp(choice,"4")==0)
strcpy(Variable,"BladderCancer");

else if(strcmp(choice,"5")==0)
strcpy(Variable,"BladderCancer");

else if(strcmp(choice,"6")==0)
strcpy(Variable,"BladderCancer");

else if(strcmp(choice,"7")==0)
strcpy(Variable,"BladderCancer");

else if(strcmp(choice,"8")==0)
strcpy(Variable,"LungCancer");

else if(strcmp(choice,"9")==0)
strcpy(Variable,"LungCancer");

else if(strcmp(choice,"10")==0)
strcpy(Variable,"PancreaticCancer");

else if(strcmp(choice,"11")==0)
strcpy(Variable,"PancreaticCancer");

else if(strcmp(choice,"12")==0)
strcpy(Variable,"OvarianCancer");

else if(strcmp(choice,"13")==0)
strcpy(Variable,"OvarianCancer");



else
goto renter;

/* Getting Conclusion from user and finding out the conclusion number from the conclusion list */
b520: f=1;
determine_member_concl_list();
int rule;
if (sn != 0)
{
/***pushing the statement no and clause number  on stack and incrementing the stack**/
do
{

push_on_stack();
do
{
/* calculating  clause location in clause-variable list */

b545: i= (statsk[sp] -1) *4
+ clausk[sp];

rule=statsk[sp];
cout<<"Rule to check is "<<statsk[sp]<<"\n"<<endl;
strcpy(Variable, ClauseVariable_List[i]);

if(strcmp(Variable,"") != 0)
{

/*determining whether it is this clause variable a conclusion or not ? */
f = 1;
cout<<"Checking  the variable  "<<clausk[sp]<<" of rule "<<rule<<" and  Variable is "<<Variable<<"\n"<<endl;
determine_member_concl_list();
if(sn != 0)
{

/* Means conclusion again pushing statement no  and conclusion no on  stack */
cout<<"As the Variable " <<Variable<<" is Member of Conclusion list, We need to check another rule \n"<<endl;
goto b520;


}

instantiate();

clausk[sp] = clausk[sp] + 1;

}

}while(strcmp(Variable, "") != 0);



/*no more clauses check if part of statement */



sn = statsk[sp];


s = 0;
//cout<<"Sn : "<<sn;

switch (sn) {


case 1: if ((strcmp(Symptom, "NO") == 0))


s = 1;

break;


case 2:// cout<<"S = "<<Symptom<<" H = "<<Headache<<" N = "<<Nausea;
if((strcmp(Symptom, "YES") == 0) &&
strcmp(Headache, "YES") == 0 && strcmp(Nausea, "YES")==0)
{
  strcpy(Seizures,"YES");
  s = 1;
 // cout<<"In LOOP";
}

break;

case 3: if((strcmp(Symptom, "YES") == 0) &&
strcmp(Seizures, "YES") == 0 && strcmp(SwellingBrain, "YES")==0 )
{
  strcpy(BrainCancer,"YES");
  s = 1;
}
break;

case 4 : if((strcmp(Symptom, "YES") == 0) &&
/* strcmp(Nausea, "YES") == 0 && */strcmp(Coughing, "YES")==0 && strcmp(SwellingBrain, "YES")==0 )
{
  strcpy(BrainCancer,"YES");
  s = 1;
}


break;
case 5: if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(UrineColorChange, "YES")==0 )
{
//  cout<<"Symptom"<<Symptom<<endl>;
//  cout<<""
  strcpy(FrequentUrination,"YES");
  s = 1;
}
break;

break;

case 6 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(FrequentUrination, "YES") == 0 && strcmp(UrineColorChange, "YES")==0 )

{
  strcpy(BladderCancer,"YES");
  s = 1;
}
break;


case 7 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(UrineColorChange, "YES")==0) /*&& strcmp(FrequentUrination, "NO")==0 )*/

{
  strcpy(BladderCancer,"YES");
  s = 1;
}
break;
case 8 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(Headache, "NO")==0)

{
  strcpy(Vomit,"YES");
  s = 1;
}
break;
case 9 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Vomit, "YES") == 0 && strcmp(BurningSensation, "YES")==0)

{
  strcpy(BladderCancer,"YES");
  s = 1;
}
break;
case 10 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(Headache, "YES")==0 && strcmp(Vomit, "NO")==0 )

{
  strcpy(BladderCancer,"NO");
  s = 1;
}
break;
case 11 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(Coughing, "YES")==0)

{
  strcpy(Wheezing,"YES");
  s = 1;
}
break;
case 12 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Wheezing, "YES") == 0 && strcmp(Coughing, "YES")==0 )

{
  strcpy(LungCancer,"YES");
  s = 1;
}
break;
case 13 : if(
strcmp(Nausea, "YES") == 0 && strcmp(Headache, "YES")==0 && strcmp(Seizures, "NO")==0 )

{
  strcpy(Wheezing,"YES");
  s = 1;
}
break;
case 14 : if(
strcmp(Headache, "YES") == 0 && strcmp(Seizures, "NO")==0 && strcmp(Wheezing, "YES")==0 )

{
  strcpy(LungCancer,"YES");
  s = 1;
}

break;

case 15 : if(
strcmp(Nausea, "YES") == 0 && strcmp(WeightLoss, "NO")==0 && strcmp(Coughing, "YES")==0 )

{
  strcpy(Wheezing,"YES");
  s = 1;
}
break;

case 16 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Coughing, "YES") == 0 && strcmp(Wheezing, "YES")==0)

{
  strcpy(LungCancer,"YES");
  s = 1;
}
break;

case 17 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(WeightLoss, "YES")==0)

{
  strcpy(Jaundice,"YES");
  s = 1;
}
break;
case 18 : if(
strcmp(Nausea, "YES") == 0 && strcmp(Cramps, "YES")==0 && strcmp(WeightLoss, "YES")==0 )

{
  strcpy(Jaundice,"YES");
  s = 1;
}
break;
case 19 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Jaundice, "YES") == 0 && strcmp(WeightLoss, "YES")==0 )

{
  strcpy(PancreaticCancer,"YES");
  s = 1;
}
break;
case 20 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Jaundice, "YES") == 0 && strcmp(Cramps, "YES")==0 )

{
  strcpy(PancreaticCancer,"YES");
  s = 1;
}
break;
case 21 : if(
strcmp(Nausea, "YES") == 0 && strcmp(Coughing, "YES")==0 && strcmp(WeightLoss, "YES")==0 )

{
  strcpy(Jaundice,"YES");
  s = 1;
}
break;
case 22 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Jaundice, "YES") == 0 && strcmp(Coughing, "YES")==0)

{
  strcpy(PancreaticCancer,"YES");
  s = 1;
}
break;

case 23 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Nausea, "YES") == 0 && strcmp(Bloating, "YES")==0)

{
  strcpy(OvarianCancer,"YES");
  s = 1;
}
break;
case 24 : if((strcmp(Symptom, "YES") == 0) &&
strcmp(Bloating, "YES") == 0 && strcmp(Cramps, "YES")==0 )

{
  strcpy(OvarianCancer,"YES");
  s = 1;
}
break;
case 25 : if(
strcmp(Nausea, "YES") == 0 && strcmp(Cramps, "YES")==0
&& strcmp(Bloating, "NO")==0 )

{
  strcpy(OvarianCancer,"NO");
  s = 1;
}
break;















}





if( s != 1)

{

/* failed..search rest of statements for same conclusion */

/* get conclusion */
i = statsk[sp];

strcpy(Variable, Conclusion_List[i]);

/* search for conclusion starting at the next statement number */

f = statsk[sp] + 1;

determine_member_concl_list();

sp = sp+1;



}
/* pop old conclusion and put on new one */
}while((s != 1) && (sn !=0));


if(s==0 && sn ==0 && sp !=42)

cout<<"\n\n ******************** PROBLEM NOT FOUND IN DATABASE   ********************\n\n "<<s<<endl;
if(s != 0)

{
switch (sn) {

case 1: strcpy(Symptom, "NO");

cout<<"Patient is not having any kind of Cancer. \n"<<endl;

break;

case 2: strcpy(Seizures, "YES");

cout<<"Cancer is: BRAIN CANCER \n"<<endl;

break;


case 3: strcpy(BrainCancer, "YES");

cout<<"Cancer is: BRAIN CANCER \n"<<endl;
break;


case 4: strcpy(BrainCancer, "YES");

cout<<"Cancer is: BRAIN CANCER \n"<<endl;
break;


case 5: strcpy(FrequentUrination, "YES");

cout<<"PATIENT IS NOT HAVING ANY PROBLEM "<<endl;

break;



case 6: strcpy(BladderCancer, "YES");

cout<<"Cancer is: BLADDER CANCER \n"<<endl;

break;



case 7: strcpy(BladderCancer, "YES");

cout<<"Cancer is BLADDER CANCER.\n"<<endl;

break;
case 8: strcpy(Vomit, "YES");
cout<<"Cancer is: BLADDER CANCER \n"<<endl;
break;
case 9: strcpy(BladderCancer, "YES");
cout<<"Cancer is: BLADDER CANCER \n"<<endl;
break;
case 10: strcpy(BladderCancer, "NO");
cout<<"Patient is not having any kind of Cancer .\n"<<endl;
break;
case 11: strcpy(Wheezing, "YES");
cout<<"Cancer is: LUNG CANCER \n"<<endl;
break;
case 12: strcpy(LungCancer, "YES");
cout<<"Cancer is: LUNG CANCER \n"<<endl;
break;
case 13: strcpy(Wheezing, "YES");
	   cout<<"Patient is not having any kind of Cancer \n"<<endl;
break;
case 14: strcpy(LungCancer, "YES");
cout<<"Cancer is: LUNG CANCER.\n"<<endl;
break;
case 15: strcpy(Wheezing, "YES");
cout<<"Cancer is: LUNG CANCER \n"<<endl;


break;
case 16: strcpy(LungCancer, "YES");
cout<<"Cancer is: LUNG CANCER  \n"<<endl;
break;
case 17: strcpy(Jaundice, "YES");
break;
case 18: strcpy(Jaundice, "YES");
break;
case 19: strcpy(PancreaticCancer, "YES");
cout<<"Cancer is: PANCREATIC CANCER  \n"<<endl;
break;
case 20: strcpy(PancreaticCancer, "YES");
cout<<"Cancer is: PANCREATIC CANCER \n"<<endl;
break;
case 21: strcpy(Jaundice, "YES");
break;
case 22: strcpy(PancreaticCancer, "YES");
cout<<"Cancer is: PANCREATIC CANCER  \n"<<endl;
break;
case 23: strcpy(Bloating, "YES");
cout<<"Cancer is: OVARIAN CANCER"<<endl;
break;
case 24: strcpy(OvarianCancer, "YES");
cout<<"Cancer is: OVARIAN CANCER \n"<<endl;
break;
case 25: strcpy(OvarianCancer, "NO");
cout<<"PATIENT IS NOT HAVING ANY PROBLEM .\n"<<endl;
break;



}

/* pop the stack */

sp=sp+1;

if(sp >= 40)

/* finished */

cout<<"*** SUCCESS *** \n"<<endl;

else {

/* stack is not empty */

/* get next clause then continue */



clausk[sp] = clausk[sp]+1;

goto b545;

}

}

}

return 0;

}







