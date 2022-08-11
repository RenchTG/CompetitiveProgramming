import java.util.Scanner;

public class Team
{
   public static void main(String[] args)
   {
      Scanner kb = new Scanner(System.in);
      int n = kb.nextInt();
      int x, y, z;
      int output = 0;
      
      for (int i = 0; i < n; i++)
      {
         x = kb.nextInt();
         y = kb.nextInt();
         z = kb.nextInt();
         
         if (x + y + z >= 2)
         {
            output += 1;
         }
         else
         {
            continue;
         }
      }
      System.out.println(output);
   }
}

