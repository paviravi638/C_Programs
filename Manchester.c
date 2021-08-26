/*The function/method Manchester print space-separated integers with the following property ; for each element in the input list arr , if the bit arr[i] is the same as arr[i-1] , then the element of the output list is 0 . If they are different , then its 1 . For the first bit in the input list , assume its previous bit to be 0 . This encoding is stored in a new list .

The function/method Manchester accepts two arguments – len , an integer representing the length of the list and arr , a list of integers , respectively . Each element of arr represents a bit – 0 or 1

For example – if arr is {0 1 0 0 1 1 1 0} , the function/method should print an list{0 1 1 0 1 0  0 1} .*/



void manchester(int size,int* arr) 
{ 
 int result; 
 int* res=(int*)malloc(sizeof(int)*size); 
 int count=0; 
 for(int i=0;i<size;i++) 
 { 
  if(i==0) 
   result=(arr[i]==0); 
  else 
   result=(arr[i]==arr[i-1]); 
  res[i]=(result==0)?(0): (++count); 
 } 
 for(int i=0;i<size;i++) 
 { 
  printf("%d ",res[i]); 
 } 
} 
 
