#include <stdio.h>
#include<stdlib.h>
int main (){
int Roll_no;
char Name[20];
float Phx,Chem,CA,Total,Per;
printf("Enter the Roll number of the student :");
scanf("%i",&Roll_no);
printf("Enter name:");
scanf("%s",&Name);
printf("Enter the Marks of Subject Physics,Chemistry,Computer Application :");
scanf("%f%f%f",&Phx,&Chem,&CA);
printf("Roll no :%i\n",Roll_no);
printf("Name of the student : %s\n",Name);
printf("Marks of Physics :%.0f\n",Phx);
printf("Marks of Chemistry :%.0f\n",Chem);
printf("Marks of Computer Application :%.0f\n",CA);
Total=Phx+Chem+CA;
printf("Total Marks:%.0f\n",Total);

Per=Total/300*100;
printf("percentage :%.1f%%\n",Per);
if(Per>60){
    printf("Division = First\n");
}
else{
    printf("Division =Second\n");
}

return 0;
}
