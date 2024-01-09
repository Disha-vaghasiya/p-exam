#include <stdio.h>

 main() 
{
	 FILE *friut_file = fopen("fruit.txt", "w");
     FILE *color_file = fopen("color.txt", "w");
int i;
    
        
  
           fprintf(fruit_file, "%d\n", i);
       

   
        fprintf(color_file, "%d\n", i);
        
    


  fclose(fruit_file);
  fclose(color_file);
}
