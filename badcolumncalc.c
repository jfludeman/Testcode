#include <stdio.h>
int main(void){
  int n;
  int p;
  printf("enter int  ");
  scanf("%d",&n);
  int colvec[n*n];
  int countint = 3;
  int addint = -1;
  int subint;  int q; int i;  int w;int e;int addstand;
  int colnum;
  int num = 4;
  if(n %  2 == 0){
    q = n/2;}
  else{
    q = (n+1)/2;}
  if(n == 1){
    colvec[0] = q;
    return 0;
  }
  if(n == 2 ){
    colvec[0] = q;
    colvec[1] = q+1;  
    colvec[2] = q+1;
    colvec[3] = q;
    return 0;
    

  }
  colvec[0] = q;
  colvec[2] = q+1;  
  colvec[1] = q+1;
  colvec[3] = q;
  colvec[4] = q-1;
 for(e = 0; e < n-1; e++){
   for (i = 1; i < countint;i++){
     colnum = q + addint;
     num = num+1;
     colvec[num] = colnum;
     printf("i    %d\n", colnum);
     if (num == n*n-1){
       /*for(p = 0; p < n*n; p++){
	 printf("%d\n",colvec[p]);}*/
	return 0;
      }
    }
    if (addint >0){
      subint = 1;
      addstand = addint;
      printf("%d",addint);
      for (w = 1; w <  countint; w++){
	colnum = q+addint-subint;
	num = num+1;	   
	colvec[num] = colnum;
	printf("ii   %d\n", colnum);
	subint = subint+1;    
	if (num == n*n-1){
	  return 0;}
      }
      addstand = addint-subint+1;
    }
       
    else{
      addstand = addint;
      subint = 1;
      for (w = 1; w <  countint; w++){
	colnum = q+addint+subint;
	num = num+1;
	colvec[num] = colnum;
	printf("iii %d\n", colnum);
	subint = subint+1;  
	if (num == n*n-1){
	  return 0;}  
      }
      addstand = addint+subint-1;
    }
    countint = countint+1;
    addint = addstand;
     }
}
    
