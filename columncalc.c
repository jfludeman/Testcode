#include <stdio.h>
int main(void){
  int addint = 1;
  int countint = 1;
  int actnum = 0;
  int innerint = 1;
  int w; int e;int n; int q; int num;int flip =  1;int mainloop;
  printf("enter int  ");
  scanf("%d",&n);
    for(mainloop = 0; mainloop<n; mainloop++){
    countint = countint+1;
    if(n %  2 == 0){
      q = n/2;}
    else{
      q = (n+1)/2;}
   
    if( flip == 1){
      for(w = 1; w <  countint+1; w++){
	num = q+addint;
	actnum = actnum+1;
	printf("ia  %d  %d \n",num,actnum);
      if(actnum == n*n-1){
	return 0;}}
      for(e = 1; e < innerint+1;e++){
	num = q - e+addint; 
	actnum = actnum+1;
	printf("ib  %d  %d\n",num,actnum);
	if(actnum == n*n-1){
	  return 0;}
      }
     
      innerint = innerint+1;
      flip = -1;
       
    }
      else{
      for(w = 1; w <  countint+1; w++){
	num = q-addint;
	actnum = actnum+1;
	printf("iia %d  %d\n",num,actnum);
	if(actnum == n*n-1){
	  return 0;}
      }
      for(e = 1; e < innerint+1;e++){
	num = q +  e-addint; 
	actnum = actnum+1;
	printf("iib %d  %d\n",num,actnum);
	if(actnum == n*n-1){
	  return 0;}
      }
      
     
      innerint = innerint+1;
      flip = 1;
      addint = addint +1;
      }
 
     
 }
}

