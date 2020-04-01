import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

 

   

    public static void main(String[] args) 
    {
       Scanner scan = new Scanner(System.in);

        String s = scan.nextLine();

      int len=s.length();
        
        Double root=Math.sqrt(len);
        int round=(int)Math.ceil(root);
        
        char arr[]=s.toCharArray();
        
        for(int i=0;i<round;i++)
        {
            int count=0,j=i;
            
            while(j<len)
            {
                System.out.print(arr[j]);
                j+=round;
                count++;
            }
        
System.out.print(" ");
            }
      //  return 0;
    }
}
