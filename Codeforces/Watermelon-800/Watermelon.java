import java.util.Scanner;

public class Watermelon
{
   public static void main(String[] args)
   {
      Scanner kb = new Scanner(System.in);
      int num = kb.nextInt();
      
      if (num % 2 == 0 && num != 2)
      {
         System.out.println("YES");
      }
      else
      {
         System.out.println("NO");
      }
   }
}

