/******************************************************************************

    String to character is array.

*******************************************************************************/
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	Scanner x=new Scanner(System.in);
	String s=x.nextLine();
	char[] d=s.toCharArray();
	for(char i:d)
	    System.out.print(i+"");
	System.out.println();
	System.out.println(new String(d));
	}
}
