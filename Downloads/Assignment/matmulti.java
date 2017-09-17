package p1;
import java.util.*;
public class matmulti {


public static void main(String args[])

{

    int q,p,m,n,k,d,c,sum=0;;
    Scanner gin = new Scanner(System.in);

    System.out.println("Enter the values of m and n of matrix");
    m = gin.nextInt();
    n = gin.nextInt();
    int firstmat[][] = new int[m][n];
    System.out.println("Enter value of first");
    for(c=0;c<m;c++)
       for(d=0;d<n;d++)
          firstmat[c][d] = gin.nextInt();
    System.out.println("Enter the number of rows and columns of second matrix");
    p = gin.nextInt();
    q = gin.nextInt();
    if ( n != p )
       System.out.println("Error");
    else
    {
       int secondmat[][] = new int[p][q];
       int multiply[][] = new int[m][q];
       System.out.println("Enter the values of second matrix");
       for(c=0;c<p;c++)
           for(d=0;d<q;d++)
              firstmat[c][d] = gin.nextInt();

       for(c=0;c<m;c++)  {
    	   for(d=0;d<q;d++)

          {   
    		   for(k=0;k<p;k++)

             {

                sum = sum + firstmat[c][k]*secondmat[k][d];

             }
             multiply[c][d] = sum;
             sum = 0;
          }
       }
       System.out.println("Product of entered matrices:-");

       for(c=0;c<m;c++)  {
    	    for ( d = 0 ; d < q ; d++ )

             System.out.print(multiply[c][d]+"\t");
    	    System.out.print("\n");

       }

    }

 }
}
