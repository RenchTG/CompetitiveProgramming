import java.util.Scanner;

public class PhoneCode
{
   public static void main(String[] args)
   {
      Scanner kb = new Scanner(System.in);
      int n = kb.nextInt();
      kb.nextLine();
     
      String input = "";
      for (int i = 0; i < n; i++)
      {
         input += kb.nextLine();
      }
     
      int len = input.length() / n;
      String temp = "";
      int count = 0;
      for (int b = 0; b < len; b ++)
      {
         for (int a = b; a < input.length(); a += len)
         {
            if (input.charAt(a) == input.charAt(b))
            {
               count++;
            }
         }
         if (count % n != 0)
            break;
      }
     
      System.out.println(count / n);
   }
}