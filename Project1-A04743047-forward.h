#ifndef Project1_-_A04743047_-_forward_H
#define Project1_-_A04743047_-_forward_H
#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int flag;
char cndvar[10][15];
char Variable_List[20][20], /* variable list*/
ClauseVariable_List[20][20]; /* clause var list */
char c[20], vp[15], /* condition variable */
v[15]; /*variable */
char treatment[50];
char cancer[30];
char Position[15], /* position */  qu[15]; /* qualify */
char size[50];
int Instantiated_List[10];         /* instantiated list*/
int f, i, j, k, s, fp   /* front pointer */;
int  bp  /* back pointer */,  gr /* grade */,  sn; /* statement number */
int cn;  /* clause number */
int choice;
char contin[2];

void initialize(void);
void display(void);
void search(void);
void check_instantiation(void);
void instantiate(void);


//==========================================================================
/* Iinitialize the clause variable list, conclusion variable queue and other variables
to initial values as per the forward chaining algorithm*/

void initialize()
{


   fp=1;
    bp=1;

    for (i=1;i < 20; i++)
        strcpy(ClauseVariable_List[i], "");
    for (i=1;i < 11; i++)
        strcpy(cndvar[i], "");
    for (i=1;i < 11; i++)
        Instantiated_List[i]=0;
    for (i=1;i < 11; i++)
        strcpy(Variable_List[i], "");
    for (i=1;i < 11; i++)
    {
        strcpy(cndvar[i], "");
        strcpy(Variable_List[i], "");
        Instantiated_List[i]=0;
    }

    /* enter variables which are in the IF part, 1 at a time in
    the exact order that they occur. Up to 3 variables per
    IF statement. Do not duplicate any variable names. Any
    name is used only once. If no more variables left, just
    hit return key */
    strcpy(Variable_List[1], "cancer");


    /* enter variables as they appear in the IF clauses, Up to 3
    variables per IF statement. If no more variables left, just
    hit return key */

    strcpy(ClauseVariable_List[1], "cancer");
    strcpy(ClauseVariable_List[5], "cancer");
    strcpy(ClauseVariable_List[9], "cancer");
    strcpy(ClauseVariable_List[13], "cancer");
    strcpy(ClauseVariable_List[17], "cancer");

}
    /* Display the values in VARIABLE LIST and CLAUSE-VARIABLE POINTER */
    void display(void)
    {
         cout<<"************ VARIABLE LIST **************\n";
                  cout<<Variable_List[1]<<endl;

         cout<<"\n********** CLAUSE-VARIABLE LIST **********\n";
         for (i = 1; i < 6; i++)
             {

                 for (j = 1; j < 5; j++)
                 {
                     k = 4 * (i - 1) + j;
                     cout<<"VARIABLE   "<<j<<" -->>"<<ClauseVariable_List[k]<<endl;
                 }

                 }



    }



    //==========================================================================
    /* Search clause variable list for a varialbe (ClauseVariable_List) equal to the
    one in front of the conclusion queue (cndvar). Return the statement
    number (sn). If there is no match, i.e., sn=0, the first statement
    for the space is f. */
    void search()
    {

        flag = 0;
        sn = f;

        while ((flag == 0) && (sn <= 19))
        {
            cn=1;
            k = (sn-1)*4+cn;
            while ((strcmp(ClauseVariable_List[k], cndvar[fp]) != 0) && (cn < 5))
            {
                cn = cn+1;
                k = (sn-1)*4+cn;

            }

            if (strcmp(ClauseVariable_List[k], cndvar[fp]) == 0) flag = 1;
            if (flag == 0) sn = sn+1;
        }
        if (flag == 0) sn=0;
    }





    //==========================================================================
    /* Routine to instantiate a variable (v) if it isn't already.
    The instantiate indication (Instantiated_List) is a 0 if not, a 1 if it is.
    The vriable list (Variable_List) contains the variable (v) */
    void check_instantiation()
    {
        i=1;

        /* find variable in the variable list */
        while ((strcmp(v, Variable_List[i]) != 0) && (i < 4))
         i = i+1;

        /* check if already instantiated */
        if (Instantiated_List[i] != 1)
        {
            /* mark instantiated */
            Instantiated_List[i] = 1;
            /* the designer of this knowledge base places the input
            statements to instantiate the variables in this case
            statement */

            cout<<"\nPlease enter the number corresponding to the cancer for which treatment is required : ";
            cin>>choice;

                   if( choice == 1)
                   {
                	 cout<<"\nRule 1 is executed \n\n";
                	 cout<<"Brain Cancer variable is instantiated\n\n";
                      strcpy(cancer,"BrainCancer");
                   }
                   else if(choice == 2)
                   {
                	   cout<<"\nRule 2 is executed \n\n";
                  	 cout<<"Bladder Cancer variable is instantiated\n\n";
                      strcpy(cancer,"BladderCancer");
                   }
                   else if(choice == 3)
                   {
                	   cout<<"\nRule 3 is executed \n\n";
                  	 cout<<"Lung Cancer variable is instantiated\n\n";
                      strcpy(cancer,"LungCancer");
                   }
                   else if(choice == 4)
                   {
                	   cout<<"\nRule 4 is executed \n\n";
                  	 cout<<"Pancreatic Cancer variable is instantiated\n\n";
                      strcpy(cancer,"PancreaticCancer");
                   }
                   else if(choice == 5)
                   {
                	   cout<<"\nRule 5 is executed \n\n";
                  	 cout<<"Ovarian Cancer variable is instantiated\n\n";
                      strcpy(cancer,"Ovarian Cancer");
                   }

                   else
                      {
                      cout<<"\n ENTER NUMBERS FROM 1-18 ONLY \n\n";
                     }

                     /* end of input statements for the position knowledge base */
    }


    }


    //==========================================================================
    /* Routine to instantiate a varialbe (v) and then place it on the
    back of the queu (cndvar[bp]), if it is not already there. */
    void instantiate()
    {
        i=1;
        /* find varialbe in the varialbe list (Variable_List) */
        while ((strcmp(v, Variable_List[i]) != 0) && (i <= 10)) i=i+1;

        /* instantiate it */
        Instantiated_List[i] = 1;
        i = 1;

        /* determine if (v) is or already has been on the queue (cndvar) */
        while ((strcmp(v, cndvar[i]) != 0) && (i <= 10)) i=i+1;
        /* variable has not been on the queue. Store it in the back of the queue */
        if (strcmp(v, cndvar[i]) != 0)
        {
            strcpy(cndvar[bp], v);
            bp=bp+1;
        }

    }






#endif /* Project1_-_A04743047_-_forward_H*/
