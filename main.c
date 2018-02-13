#include <stdio.h>
#include <math.h>
#include <string.h>
int rowmaker(int *rowvec,int n){
  int countint = 3;
  int addint = 1;
  int subint;  int q; int i;  int w;int e;int addstand;
  int colnum;
  int num = 2;
  int rownum;
  if(n %  2 == 0){
    q = n/2;}
  else{
    q = (n+1)/2;}
  if(n < 2){
    rowvec[0] = q;
    return 0;
  }
  rowvec[0] = q;
  rowvec[1] = q;
  rowvec[2] = q+1;
    for(e = 0; e < n-1; e++){
  
      for (i = 1; i < countint; i++){
	rownum = q + addint;
	num = num+1;
     
	rowvec[num] = rownum;
	if (num == n*n-1){
	  return 0;
	}
      }
      if (addint >0){
	subint = 1;
	addstand = addint;
	for (w = 1; w <  countint; w++){
	  rownum = q+addint-subint;
	  num = num+1;	   
	  rowvec[num] = rownum;
	  subint = subint+1;    
	}
	addstand = addint-subint+1;
      }
       
      else{
	addstand = addint;
	subint = 1;
	for (w = 1; w <  countint; w++){
	  rownum = q+addint+subint;
	  num = num+1;
	  rowvec[num] = rownum;
	  subint = subint+1;    
	}
	addstand = addint+subint-1;
      }
      countint = countint+1;
      addint = addstand;
    }
}
int colmaker(int *colvec,int n){
  int addint = 1;
  int countint = 1;
  int actnum = 0;
  int innerint = 1;
  int w; int e; int q; int num;int flip =  1;int mainloop;
    for(mainloop = 0; mainloop<n; mainloop++){
    countint = countint+1;
    if(n %  2 == 0){
      q = n/2;}
    else{
      q = (n+1)/2;}
    if(n ==1){
      colvec[0] = q/2;
      return 0;}
    colvec[0] = q;
    if( flip == 1){
      for(w = 1; w <  countint+1; w++){
	num = q+addint;
	actnum = actnum+1;
        colvec[actnum] = num;
	if(actnum == n*n-1){
	  return 0;}}
      for(e = 1; e < innerint+1;e++){
	num = q - e+addint; 
	actnum = actnum+1;
	colvec[actnum] = num;
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
	colvec[actnum] = num;
	if(actnum == n*n-1){
	  return 0;}
      }
      for(e = 1; e < innerint+1;e++){
	num = q +  e-addint; 
	actnum = actnum+1;
	colvec[actnum] = num;
	if(actnum == n*n-1){
	  return 0;}
      }
      
     
      innerint = innerint+1;
      flip = 1;
      addint = addint +1;
      }
 
     
 }
}


 int main(void){
  int n;
  int p;
  printf("Input: ");
  scanf("%d",&n);
  printf("Output:\n");
  int rowvec[n*n];
  int colvec[n*n];
  int spirmat[n][n];
  int a=1;
  int row;
  int columns;
  int length;
  int k;
  int inlength;
  rowmaker(rowvec, n);
  colmaker(colvec, n);
  for(p = 0; p < n*n; p++){
    spirmat[rowvec[p]-1][colvec[p]-1] = a;
    a = a+1;
 
  }
  length = floor(log10(n*n))+1;
   for (row=0; row<n; row++){
    for(columns=0; columns<n; columns++) {
      int strpls[length+1];
      inlength =  floor(log10(spirmat[row][columns]))+1;
      if(inlength ==1){
	printf(" ");}
      printf("%d", spirmat[row][columns]);
      for(k = 0; k < length+1-inlength; k++){
        printf(" ");
	if(inlength ==1){
	  for(k = 0; k < length-inlength; k++){
	    printf(" ");
	  }
	}
      
	else{
	
	  for(k = 0; k < length+1-inlength; k++){
	 
	    printf(" ");
	  }
	}
      }
    }
    printf("\n");
  }
 }
