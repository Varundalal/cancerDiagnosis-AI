#include<iostream>
#include <stdio.h>
#include <string.h>
#include "Project1-A04743047-forward.h"


using namespace std;


int main()
{

	        initialize();
	        display();
   do{
	   initialize();
	    cout<<"\n";
        cout<<"===================================================================";
        cout<<"\n\n\n\n\n";
        cout<<"               WELCOME TO Cancer TREATMENT CLINIC     ";
        cout<<"\n\n\n\n\n";
        cout<<"===================================================================\n\n";

        cout<<"\n The following Cancers are treated in this clinic : \n";
        cout<<" 1. Brain Cancer \n";
        cout<<" 2. Blader Cancer \n";
        cout<<" 3. Lung Cancer \n";
        cout<<" 4. Pancreatic Cancer \n";
        cout<<" 5. Ovarian Cancer \n";





    /****** INFERENCE SECTION *****************/


     strcpy(c,"cancer");

    strcpy(cndvar[bp], c);

    bp = bp + 1;
    /* set the condition variable pointer consisting of the
    statement number (sn) and the clause number (cn) */
    sn = 1; cn = 1;
    /* find the next statement number containing the condition variable
    which is in front of the queue (cndvar), this statement number
    is located in the clause variable list (ClauseVariable_List) */
    /* start at the beginning */
    f=1;
    b496: search();
    /* point to first clause in statement */
    cn=1;
    if (sn != 0)
        /* more statements */
    {

        /* locate the clause */
        i = 4 * (sn-1) + cn;
        /* clause variable */
        strcpy(v, ClauseVariable_List[i]);
        /* are there any more clauses for this statement */
        while (strcmp(v, "") !=0)
            /* more clauses */
        {
            /* check instantiation of this clause */
            check_instantiation();
            cn = cn+1;
            /* check next clause */
            i = 4 * (sn-1) + cn;
            strcpy(v, ClauseVariable_List[i]);
        }

        /* no more clauses - check IF part of statement */
        s = 0;


        /* sample IF-THEN statements from the position knowledge base */
        switch(sn)
        {
        case 1: if (strcmp(cancer, "BrainCancer") == 0) s=1;
            break;
        case 2: if ( strcmp(cancer, "BladderCancer") == 0) s=1;
            break;
        case 3: if (strcmp(cancer, "LungCancer") ==0) s=1;
            break;
        case 4: if ( strcmp(cancer, "PancreaticCancer") == 0) s=1;
            break;
        case 5: if ( strcmp(cancer, "OvarianCancer") == 0) s=1;
            break;


        }




        /* see if the THEN part should be inovked, i.e., s=1 */
        if (s != 1)
        {   //cout<<"entered the s !=1 loop\n");
            f = sn + 1;
            goto b496;
        }



        /* invoke THEN part */
        switch (sn)
        {

            /* put variable on the conclusion variable queue */

        case 1:
            {
            strcpy(treatment, "Chemotherapy");
            cout<<"\n===================================================================\n\n\n";
            cout<<"                      TREATMENT = Chemo Therapy\n";
            cout<<"\n\n\n===================================================================\n\n\n";
            strcpy(v, "treatment");
            instantiate();
            break;}

        case 2:
            strcpy(treatment, "Transurethral Resuction Of Bladder");
            cout<<"\n===================================================================\n\n\n";
            cout<<"                TREATMENT = Transurethral Resuction Of Bladder\n";
            cout<<"\n\n\n===================================================================\n\n\n";
            strcpy(v, "treatment");
            instantiate();
            break;

        case 3:
            strcpy(treatment, "Radiation");
            cout<<"\n===================================================================\n\n\n";
            cout<<"             TREATMENT = Radiation\n";
            cout<<"\n\n\n===================================================================\n\n\n";
            strcpy(v, "treatment");
            instantiate();
            break;
        case 4:
            strcpy(treatment, "Surgery");
            cout<<"\n===================================================================\n\n\n";
            cout<<"          TREATMENT = Surgery\n";
            cout<<"\n\n\n===================================================================\n\n\n";
            strcpy(v, "treatment");
            instantiate();
            break;
        case 5:
            strcpy(treatment, "Surgery and Chemo Therapy");
            cout<<"\n===================================================================\n\n\n";
            cout<<"                       TREATMENT = Surgery and Chemo Therapy\n";
            cout<<"\n\n\n===================================================================\n\n\n";
            strcpy(v, "treatment");
            instantiate();
            break;


        }
        f = sn + 1;
        goto b496;
      }

     /* no more clauses in the clause variable list (ClauseVariable_List)
     containing the variable in front of the queue (cndvar(fp))
     then remove front variable (cndvar(fp)) and replace it by
     the next variable (cndvar(fp+1)). If no more variables are
     at the front of the queue, stop. */
     /* next queue variable */
     fp=fp+1;
      if (fp < bp)
      {
        /* check out the condition variable */
        f = 1;
        goto b496;
      }
     /* no more conclusion variables on queue */

     cout<<"\n\n Do you want to continue? Press 'Y' for yes and 'N' to exit.";
     cout<<"Any other character will exit. ";
     cin>>contin;
     cout<<"\n\n";
     }while(strcmp(contin,"Y") == 0  || strcmp(contin,"y") == 0);

    system("PAUSE");
}




