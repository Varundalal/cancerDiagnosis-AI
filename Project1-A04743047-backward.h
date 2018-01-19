//Sidhant Chadha and Varun Dalal
#define Project1_-_A04743047_-_backward_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
char Conclusion_List[30][30];

char Variable_List[30][30];

char ClauseVariable_List[125][30];

char Variable[50];

char w;

char Cancer[4];
char BrainCancer[4];
char BladderCancer[4];
char LungCancer[4];
char PancreaticCancer[4];
char OvarianCancer[4];

char Symptom[4];
char Nausea[4];
char Headache[4];
char SwellingBrain[4];
char Seizures[4];
char Vomit[4];
char UrineColorChange[4];
char FrequentUrination[4];
char BurningSensation[4];
char Coughing[4];
char Wheezing[4];
char WeightLoss[4];
char Jaundice[4];
char Bloating[4];
char Cramps[4];



char buff[128];
int instlt[40];

int statsk[41];

int clausk[31];
int sn, f, i, j, s, k;

int sp;


void intializing()
{
sp=40;
for (i=1; i<=10; i++)
{
strcpy(Conclusion_List[i],"");

strcpy(Variable_List[i],"");

instlt[i]=0;

statsk[i]=0;

clausk[i]=0;

}

/*****Intializing Conclusion list    */

for (i=1; i<30; i++)  strcpy(ClauseVariable_List[i],"");

strcpy(Conclusion_List[1], "BrainCancer");

strcpy(Conclusion_List[2], "BrainCancer");



strcpy(Conclusion_List[3], "BrainCancer");
strcpy(Conclusion_List[4], "BrainCancer");
strcpy(Conclusion_List[5], "FrequentUrination");

strcpy(Conclusion_List[6], "BladderCancer");

strcpy(Conclusion_List[7], "BladderCancer");

strcpy(Conclusion_List[8], "Vomit");

strcpy(Conclusion_List[9], "BladderCancer");
strcpy(Conclusion_List[10], "BladderCancer");
strcpy(Conclusion_List[11], "Wheezing");
strcpy(Conclusion_List[12], "LungCancer");
strcpy(Conclusion_List[13], "Wheezing");
strcpy(Conclusion_List[14], "LungCancer");
strcpy(Conclusion_List[15], "Wheezing");
strcpy(Conclusion_List[16], "LungCancer");
strcpy(Conclusion_List[17], "Jaundice");
strcpy(Conclusion_List[18], "Jaundice");
strcpy(Conclusion_List[19], "PancreaticCancer");
strcpy(Conclusion_List[20], "PancreaticCancer");
strcpy(Conclusion_List[21], "Jaundice");
strcpy(Conclusion_List[22], "PancreaticCancer");
strcpy(Conclusion_List[23], "Bloating");
strcpy(Conclusion_List[24], "OvarianCancer");
strcpy(Conclusion_List[25], "OvarianCancer");




/****** Intializing variable list ****/




strcpy(Variable_List[1], "Symptom");

strcpy(Variable_List[2], "Nausea");

strcpy(Variable_List[3], "Headache");

strcpy(Variable_List[4], "SwellingBrain");

strcpy(Variable_List[5], "Seizures");

strcpy(Variable_List[6], "Vomit");


strcpy(Variable_List[7], "UrineColorChange");

strcpy(Variable_List[8], "FrequentUrination");

strcpy(Variable_List[9], "BurningSensation");

strcpy(Variable_List[10], "Coughing");

strcpy(Variable_List[11], "Wheezing");

strcpy(Variable_List[12], "WeightLoss");

strcpy(Variable_List[13], "Jaundice");

strcpy(Variable_List[14], "Bloating");

strcpy(Variable_List[15], "Cramps");


/*****  Clause variable List *****/



strcpy(ClauseVariable_List[1], "Symptom");

strcpy(ClauseVariable_List[5], "Symptom");
strcpy(ClauseVariable_List[6], "Headache");
strcpy(ClauseVariable_List[7], "Nausea");

strcpy(ClauseVariable_List[9], "Symptom");
strcpy(ClauseVariable_List[10], "Seizures");
strcpy(ClauseVariable_List[11], "SwellingBrain");

strcpy(ClauseVariable_List[13], "Nausea");
strcpy(ClauseVariable_List[14], "Coughing");
strcpy(ClauseVariable_List[15], "SwellingBrain");


strcpy(ClauseVariable_List[17], "Symptom");
strcpy(ClauseVariable_List[18], "Nausea");
strcpy(ClauseVariable_List[19], "UrineColorChange");

strcpy(ClauseVariable_List[21], "Nausea");
strcpy(ClauseVariable_List[22], "FrequentUrination");
strcpy(ClauseVariable_List[23], "UrineColorChange");

strcpy(ClauseVariable_List[25], "Nausea");
strcpy(ClauseVariable_List[26], "UrineColorChange");
strcpy(ClauseVariable_List[27], "FrequentUrination");



strcpy(ClauseVariable_List[29], "Symptom");
strcpy(ClauseVariable_List[30], "Nausea");
strcpy(ClauseVariable_List[31], "Headache");

strcpy(ClauseVariable_List[33], "Symptom");
strcpy(ClauseVariable_List[34], "Vomit");
strcpy(ClauseVariable_List[35], "BurningSensation");

strcpy(ClauseVariable_List[37], "Symptom");
strcpy(ClauseVariable_List[38], "Nausea");
strcpy(ClauseVariable_List[39], "Headache");
strcpy(ClauseVariable_List[40], "Vomit");



strcpy(ClauseVariable_List[41], "Symptom");
strcpy(ClauseVariable_List[42], "Nausea");
strcpy(ClauseVariable_List[43], "Coughing");

strcpy(ClauseVariable_List[45], "Symptom");
strcpy(ClauseVariable_List[46], "Wheezing");
strcpy(ClauseVariable_List[47], "Coughing");
//           strcpy(ClauseVariable_List[48], "Seizures");

strcpy(ClauseVariable_List[49], "Nausea");
strcpy(ClauseVariable_List[50], "Headache");
strcpy(ClauseVariable_List[51], "Seizure");
// strcpy(ClauseVariable_List[52], "Seizures");

strcpy(ClauseVariable_List[53], "Headache");
strcpy(ClauseVariable_List[54], "Seizures");
strcpy(ClauseVariable_List[55], "Wheezing");
//   strcpy(ClauseVariable_List[56], "Wheezing");

strcpy(ClauseVariable_List[57], "Nausea");
strcpy(ClauseVariable_List[58], "WeightLoss");
strcpy(ClauseVariable_List[59], "Coughing");
//     strcpy(ClauseVariable_List[60], "Coughing");


strcpy(ClauseVariable_List[61], "Symptom");
strcpy(ClauseVariable_List[62], "Coughing");
strcpy(ClauseVariable_List[63], "Wheezing");

strcpy(ClauseVariable_List[65], "Symptom");
strcpy(ClauseVariable_List[66], "Nausea");
strcpy(ClauseVariable_List[67], "WeightLoss");

strcpy(ClauseVariable_List[69], "Nausea");
strcpy(ClauseVariable_List[70], "Cramps");
strcpy(ClauseVariable_List[71], "WeightLoss");
//   strcpy(ClauseVariable_List[72], "WeightLoss");

strcpy(ClauseVariable_List[73], "Symptom");
strcpy(ClauseVariable_List[74], "Jaundice");
strcpy(ClauseVariable_List[75], "WeightLoss");

strcpy(ClauseVariable_List[77], "Symptom");
strcpy(ClauseVariable_List[78], "Jaundice");
strcpy(ClauseVariable_List[79], "Cramps");

strcpy(ClauseVariable_List[81], "Nausea");
strcpy(ClauseVariable_List[82], "Coughing");
strcpy(ClauseVariable_List[83], "WeightLoss");
//   strcpy(ClauseVariable_List[84], "WeightLoss");

strcpy(ClauseVariable_List[85], "Symptom");
strcpy(ClauseVariable_List[86], "Jaundice");
strcpy(ClauseVariable_List[87], "Coughing");

strcpy(ClauseVariable_List[89], "Symptom");
strcpy(ClauseVariable_List[90], "Nausea");
strcpy(ClauseVariable_List[91], "Cramps");

strcpy(ClauseVariable_List[93], "Symptom");
strcpy(ClauseVariable_List[94], "Bloating");
strcpy(ClauseVariable_List[95], "Cramps");

strcpy(ClauseVariable_List[97], "Nausea");
strcpy(ClauseVariable_List[98], "Cramps");
strcpy(ClauseVariable_List[99], "Bloating");
//   strcpy(ClauseVariable_List[100], "Bloating");














}
void Display()
{



cout<<"***** VARIABLE LIST *****\n"<<endl;

for(int z=1; z<16; z++)
cout<<"VARIABLE  "<<z<<"is -->>"<<Variable_List[z]<<endl;

cout<<"\n";
cout<<"\n";

cout<<"PRESS ENTER TO CONTINUE"<<endl;
getchar();

/****prinint Clause Variable list **/
for(int x=1; x<28; x++)
{
cout<<"** CLAUSE **"<<x<<"\n"<<endl;
for(int y=1; y<5; y++)
{
k = 4 * (x-1) + y;
cout<<"VARIABLE   "<<y<<" -->>"<<ClauseVariable_List[k]<<endl;
}

cout<<"\n";
if(x==8 || x==16 || x==24)
{
cout<<"PRESS ENTER TO CONTINUE"<<endl;
getchar();
}
}
}

void unconditional()
{
cout<<"\n\n ******************** PATIENT IS NOT HAVING ANY PROBLEM   ********************\n\n"<<endl;
//exit (EXIT_FAILURE);
}
void determine_member_concl_list(void)
{

/* routine to determine if a variable (Variable) is a member of the conclusion list (Conclusion_List).  if yes return sn != 0. if not a member sn=0; */
/* initially set to not a member */
sn = 0;
/* member of conclusion list to be searched is f */
i = f;
while((strcmp(Variable, Conclusion_List[i]) != 0) && (i<60))
{/* test for membership */

i=i+1;
}
if (strcmp(Variable, Conclusion_List[i]) == 0) sn = i;




}

void push_on_stack(void)
{

/* routine to push statement number (sn) and a clause number of 1 onto the
conclusion stack which consists of the statement stack (statsk) and the
clause stack (clausk)..to push decrement stack pointer (sp) */
{
//cout<<"statement number in push  is"<<sn<<"sp is"<<sp<<endl;
sp=sp-1;

statsk[sp] = sn;

clausk[sp] = 1;

return;

}
}

void instantiate(void)
{

i=1;
/* find variable in the list */
while((strcmp(Variable, Variable_List[i]) != 0) && (i<60)) i=i+1;

if((strcmp(Variable, Variable_List[i]) == 0) && (instlt[i] != 1))
/*found variable and not already instantiated */
{
instlt[i]=1; /*mark instantiated */

switch (i)

{



case 1: cout<<"As the Variable SYMPTOM is  not instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS ? (YES OR NO)"<<endl;
cin>>Symptom;
if(strcmp(Symptom,"NO")==0)
unconditional();
cout<<"Answer entered by user is -->> "<<Symptom<<endl;
break;



case 2:
cout<<"As the Variable NAUSEA is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  NAUSEA ? (YES OR NO)"<<endl;
cin>>Nausea;
cout<<"Answer entered by user is -->> "<<Nausea<<endl;

break;

case 3: cout<<"As the Variable HEADACHE is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF HEADACHE ? (YES OR NO)"<<endl;

cin>>Headache;
cout<<"Answer entered by user is -->> "<<Headache<<endl;
break;

case 4: cout<<"As the Variable SEIZURES is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF SEIZURES ? (YES OR NO)"<<endl;

cin>>Seizures;
cout<<"Answer entered by user is -->> "<<Seizures<<endl;
break;
case 5: cout<<"As the Variable SWELLING BRAIN is  not instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF SWELLING BRAIN ? (YES OR NO)"<<endl;
cin>>SwellingBrain;
cout<<"Answer entered by user is -->> "<<SwellingBrain<<endl;
break;
case 6: cout<<"As the Variable BURNING SENSATION WHILE URINATING is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF BURNING SENSATION WHILE URINATING  ? (YES OR NO)"<<endl;
cin>>BurningSensation;
cout<<"Answer entered by user is -->> "<<BurningSensation<<endl;
break;
case 7: cout<<"As the Variable URINE COLOR CHANGE is  not instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  URINE COLOR CHANGE ? (YES OR NO)"<<endl;
cin>>UrineColorChange;
cout<<"Answer entered by user is -->> "<<UrineColorChange<<endl;
break;
case 8: cout<<"As the Variable FREQUENT URINATION is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF FREQUENT URINATION ? (YES OR NO)"<<endl;
cin>>FrequentUrination;
cout<<"Answer entered by user is -->> "<<FrequentUrination<<endl;
break;

case 9: cout<<"As the Variable VOMIT is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF VOMIT ? (YES OR NO)"<<endl;
cin>>Vomit;
cout<<"Answer entered by user is -->> "<<Vomit<<endl;
break;

case 10:
cout<<"As the Variable COUGHING is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF COUGHING ? (YES OR NO)"<<endl;
cin>>Coughing;
cout<<"Answer entered by user is -->> "<<Coughing<<endl;
break;


case 11: cout<<"As the Variable WHEEZING is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  WHEEZING ? (YES OR NO)"<<endl;
cin>>Wheezing;
cout<<"Answer entered by user is -->> "<<Wheezing<<endl;
break;
case 12: cout<<"As the Variable WEIGHT LOSS is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF WEIGHT LOSS? (YES OR NO)"<<endl;
cin>>WeightLoss;
cout<<"Answer entered by user is -->> "<<WeightLoss<<endl;
break;

case 13: cout<<"As the Variable CRAMPS is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  CRAMPS ?(YES OR NO)"<<endl;
cin>>Cramps;
cout<<"Answer entered by user is -->> "<<Cramps<<endl;
break;

case 14: cout<<"As the Variable JAUNDICE is  not instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  JAUNDICE ? (YES OR NO)"<<endl;
cin>>Jaundice;
cout<<"Answer entered by user is -->> "<<Jaundice<<endl;
break;
case 15: cout<<"As the Variable BLOATING is not  instantiated asking user for input \n"<<endl;
cout<<"ARE YOU HAVING ANY SYMPTOMS OF  BLOATING ? (YES OR NO)"<<endl;
cin>>Bloating;
cout<<"Answer entered by user is -->> "<<Bloating<<endl;
break;


/* end of inputs statements for sample position knowledge base */

}

}
}
