package p1;
import java.util.*;
public class palin {
	public static void checkPal(String s)

	  {
	    String reverse = new StringBuffer(s).reverse().toString();
	    if (s.equals(reverse))

	      System.out.println("Palindrome");
	    else
	      System.out.println("Not a Palindrome");
	  }

	  public static void main (String[] args){	  
		  Scanner obj =new Scanner(System.in);
		  String str=new String();
		  str=obj.nextLine();
	    checkPal(str);
	  }

}
