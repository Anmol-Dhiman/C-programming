#include  <stdio.h>

//  addition  function
void  addition_of_two(int  rows,  int  columns,  int  matrix1[10][10],  int  matrix2[10][10],  int  matrixFinal[10][10])
{

//  initialise  all  elements  to  0  first for  (int  i  =  0;  i  <  rows;  i++)
{
    for (int i = 0; i < columns ; i++)
    {
        
    
    
for  (int  j  =  0;  j  <  columns;  j++)
{
matrixFinal[i][j]  =  0;
}}
}
//  addition  of  elements
for  (int  i  =  0;  i  <  rows;  i++)
{
for  (int  j  =  0;  j  <  columns;  j++)
{
matrixFinal[i][j]  =  matrix1[i][j]  +  matrix2[i][j];
}
}

printf("\nFinal  Matrix:  \n");
//  displaying  the  final  matrix for  (int  i  =  0;  i  <  rows;  i++)
{
    for (int i = 0; i <columns ; i++)
    {
       
    
    
for  (int  j  =  0;  j  <  columns;  j++)
{
printf("%5d",  matrixFinal[i][j]);
}}
printf("\n");
}
}

//subtraction  function
void  subtraction_of_two(int  rows,  int  columns,  int  mat1[10][10],  int  mat2[10][ 10],  int  matFinal[10][10])
{
//  initialise  all  elements  to  0  first for  (int  i  =  0;  i  <  rows;  i++)
{
    for (int i = 0; i < columns; i++)
    {
       
    
    
for  (int  j  =  0;  j  <  columns;  j++)
{
matFinal[i][j]  =  0;
}}
}
 
//  subtraction  of  elements
for  (int  i  =  0;  i  <  rows;  i++)
{
for  (int  j  =  0;  j  <  columns;  j++)
{
matFinal[i][j]  =  mat1[i][j]  -  mat2[i][j];
}
}
printf("\nFinal  Matrix:  \n");
//  displaying  the  final  matrix for  (int  i  =  0;  i  <  rows;  i++)
{
    for (int i = 0; i < columns; i++)
    {
      
    
    
for  (int  j  =  0;  j  <  columns;  j++)
{
printf("%5d",  matFinal[i][j]);
}}
printf("\n");
}
}

//  matrix  multiplication
void  matrix_multiplication(int  r1,  int  c1,  int  r2,  int  c2,  int  matrix1[10][10]
,  int  matrix2[10][10],  int  matrixFinal[10][10])
{
//  first  we  will  initialise  all  elements  of  final  matrix  to  zero
//  we  will  take  r1  and  c2  because  final  matrix  will  be  r1  x  c2  order

for  (int  i  =  0;  i  <  r1;  i++)
{
for  (int  j  =  0;  j  <  c2;  j++)
{
matrixFinal[i][j]  =  0;
}
}

//  now  we  will  multiply  two  matrices for  (int  i  =  0;  i  <  r1;  i++)
{
   
    
for  (int  j  =  0;  j  <  c1;  j++)
{
for  (int  k  =  0;  k  <  c2;  k++)
{
matrixFinal[i][j]  +=  matrix1[i][k]  *  matrix2[k][j];  //  check  w ith  an  example  of  2  x  2
}
}
}
 
printf("\nFinal  Matrix:  \n");
//  displaying  the  final  matrix for  (int  i  =  0;  i  <  r1;  i++)
{
for  (int  j  =  0;  j  <  c2;  j++)
{
printf("%5d",  matrixFinal[i][j]);
}
printf("\n");
}
}

// transpose matrix
void  Transpose(int  r,  int  c,  int  matrix[10][10])
{
int  trans[10][10];

for  (int  i  =  0;  i  <  r;  i++)
{
for  (int  j  =  0;  j  <  c;  j++)
{
trans[j][i]  =  matrix[i][j];
}
}

printf("\nFinal  Matrix:  \n");
//  displaying  the  final  matrix for  (int  i  =  0;  i  <  c;  i++)
{
    for (int  i = 0; i < r; i++)
    {
      
    
    
for  (int  j  =  0;  j  <  r;  j++)
{
printf("%5d",  trans[i][j]);
}}
printf("\n");
}
}

// orthogonal finder
void  Orthogonal(int  matrix[10][10],  int  row1,  int  col1)
{
//  CONDITION  IS  THAT  MATRIX  MUST  BE  A  SQUARE  MATRIX  SO  PUT  IF- ELSE  IN  SWITCH  CASE  IN  MAIN
//  here  the  property  that  A  *  A(transpose)  =  I  will  tell  us  if  the  matrix is orthogonal or not
// first lets get the transpose of the input matrix

int  transA[10][10];
for  (int  i  =  0;  i  <  row1;  i++)
 
{
for  (int  j  =  0;  j  <  col1;  j++)
{
transA[j][i]  =  matrix[i][j];
}
}
//  now  we  just  need  to  multiply  A(transpose)  *  A  and  check  if  its  identity

int  matrixFinal[10][10];

for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  row1;  j++)
{
matrixFinal[i][j]  =  0;
}
}

//  now  we  will  multiply  two  matrices for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
for  (int  k  =  0;  k  <  row1;  k++)
{
matrixFinal[i][j]  +=  matrix[i][k]  *  transA[k][j];  //  check  wit h an example of 2 x 2
}
}
}

//  now  we  got  the  product  of  A*A(transpose)  lets  check  if  its  identity.
//  final  matrix  order  will  be  row1  x  row1 int  c1  =  0;
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  row1;  j++)
{
if  (i  ==  j  &&  matrixFinal[i][j]  !=  1)
{
c1  =  1;
}
else  if  (i  !=  j  &&  matrixFinal[i][j]  !=  0)
{
c1  =  1;
}
}
}
 

if (c1 == 1)
{
printf("Matrix  is  not  ORTHOGONAL");
}
else if (c1 == 0)
{
printf("Matrix  is  ORTHOGONAL");
}
}

void  determinant(int  a[10][10],  int  n)
{
int  determine; int  determinant;

//  only  possible  for  2x2  and  3x3  matrix if (n == 2)
{
determine  =  a[0][0]  *  a[1][1]  -  a[1][0]  *  a[0][1]; printf("\n\nDeterminant  of  2x2  matrix  is  :%d",  determine);
}

else if (n == 3)
{
determinant  =  a[0][0]  *  ((a[1][1]  *  a[2][2])  -  (a[2][1]  *  a[1][2]))  -
a[0][1]  *  (a[1][0]  *  a[2][2]  -  a[2][0]  *  a[1][2])  +  a[0][2]  *  (a[1][0]  *  a[2][ 1]  -  a[2][0]  *  a[1][1]);
printf("\nDeterminant  of  3X3  matrix:  %d",  determinant);
}
}

int main()
{
//  put  this  inside  switch  case  of  matrix  multiplication int  row1,  row2,  col1,  col2,  order;
int  arr1[10][10],  arr2[10][10],  arrFinal[10][10]; char  options;

// option chosen should be an integer
printf("Please  choose  the  operation  you  want  to  perform:\nPress  the  corres ponding  option\n1.)  Addition  of  two  matrices\n2.)  Subtraction  of  two  matrices\ n3.)  Matrix  Multilplication\n");  //  continue
printf("4.)  Transpose  of  matrix\n5.)  Orthogonality  Checker\n6.)  Determinan t  of  matrix  (2x2  and  3x3  only)\nOr  press  'q'  to  quit\n");

scanf("%c",  &options);
 
switch  (options)
{
case 'q':
printf("Quitting  the  calculator 	");
break; case '1':
printf("Enter  r1  and  c1:  "); scanf("%d  %d",  &row1,  &col1);

printf("Enter  r2  and  c2:  "); scanf("%d  %d",  &row2,  &col2);

for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix2  ",  i,  j); scanf("%d",  &arr2[i][j]);
}
}

printf("Matrix  1:\n");
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}
printf("\nMatrix  2:\n");
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)
{
printf("%5d",  arr2[i][j]);
}
printf("\n");
 
}
addition_of_two(row1,  col1,  arr1,  arr2,  arrFinal); break;
case '2':
printf("Enter  r1  and  c1:  "); scanf("%d  %d",  &row1,  &col1);

printf("Enter  r2  and  c2:  "); scanf("%d  %d",  &row2,  &col2);

for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix2  ",  i,  j); scanf("%d",  &arr2[i][j]);
}
}

printf("Matrix  1:\n");
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}
printf("\nMatrix  2:\n");
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)
{
printf("%5d",  arr2[i][j]);
}
printf("\n");
}
subtraction_of_two(row1,  col1,  arr1,  arr2,  arrFinal);
 
break; case '3':
printf("Enter  r1  and  c1:  "); scanf("%d  %d",  &row1,  &col1);

printf("Enter  r2  and  c2:  "); scanf("%d  %d",  &row2,  &col2); if  (col1  ==  row2)
{
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix2  ",  i,  j); scanf("%d",  &arr2[i][j]);
}
}

printf("Matrix  1:\n");
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}
printf("\nMatrix  2:\n");
for  (int  i  =  0;  i  <  row2;  i++)
{
for  (int  j  =  0;  j  <  col2;  j++)
{
printf("%5d",  arr2[i][j]);
}
printf("\n");
}
matrix_multiplication(row1,  col1,  row2,  col2,  arr1,  arr2,  arrFinal
);
 
break;
}
else
{
printf("Matrix  multiplication  is  not  possible 	");
break;
}

case '4':
printf("Enter  r1  and  c1:  "); scanf("%d  %d",  &row1,  &col1);

for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}

printf("Input  Matrix:\n");
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}
Transpose(row1,  col1,  arr1); case '5':
printf("Enter  r1  and  c1:  "); scanf("%d  %d",  &row1,  &col1); if  (row1  ==  col1)
{
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}

printf("Input  Matrix:\n");
 
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}

Orthogonal(arr1,  row1,  col1); break;
}
else{
printf("Please  enter  a  square  matrix....\n  Quitting  the  program"); break;
}

case '6':
printf("Enter  the  order  of  matrix:  "); scanf("%d",  &order);

if (order == 2 || order == 3)
{
for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)

{
printf("Enter  the  %d,%d  element  of  the  matrix1  ",  i,  j); scanf("%d",  &arr1[i][j]);
}
}

printf("Input  Matrix:\n");  for  (int  i  =  0;  i  <  row1;  i++)
{
for  (int  j  =  0;  j  <  col1;  j++)
{
printf("%5d",  arr1[i][j]);
}
printf("\n");
}

determinant(arr1,  order); break;
}
else
{
 
 
