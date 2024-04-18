#include<stdio.h>

int main()
{

   int start_value, stop_value, count;

   printf("Please Enter The Start Value : ");

   scanf("%d", &start_value);

   printf("Please Enter The Stop Value : ");
   scanf("%d", &stop_value);

  int range = (stop_value-start_value);
  int prime[range];

for (start_value=start_value; start_value<=stop_value; start_value++) {

  count = 0;

}

//if (number <0)
  //  sign = -1;

    //else if (number == 0)
    //sign = 0;

    //else //must be a positive number
    //sign =1;

printf ("Start Value = %i\n", start_value);

printf ("Stop Value = %i\n", stop_value);

printf ("The Range = %i\n", range);


return 0;

}
