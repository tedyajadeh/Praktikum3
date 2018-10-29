#include<stdio.h>
main()
{ int A,B,C;
  scanf("%i %i %i", &A,&B,&C);
  if(A==B)
    { if(A==C)
	  printf("SEGITIGA SAMA SISI");
	else
  	  printf("SEGITIGA SAMA KAKI");
    }
  else
     { if(A==C)
	   printf("SEGITIGA SAMA KAKI");
	else
         { if(B==C)
		 printf("SEGITIGA SAMA KAKI");
   	     else
              printf("SEGITIGA SEMBARANG");
         }
    }
}
