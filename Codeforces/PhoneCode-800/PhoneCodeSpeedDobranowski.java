import java.util.Scanner;

public class PhoneCodeSpeedDobranowski
{
   public static void main(String[] args)
   {
       Scanner kb = new Scanner(System.in);
       int n;
       n = kb.nextInt();
       kb.nextLine();
       
       String[] phones = new String[n];
       int count = 0;
       boolean broken = false;
   
       for (int i = 0; i < n; i++)
       {
           phones[i] = kb.nextLine();
       }
   
       for (int b = 0; b < phones[0].length(); b++)
       {
           for (int a = 0; a < n; a++)
           {
               if (a == 0)
               {
                   count++;
               }
               else if (phones[a].charAt(b) == phones[a - 1].charAt(b))
               {
                   count++;
               }
               else
               {
                   broken = true;
                   count -= a;
                   break;
               }
           }
           if (broken)
           {
               break;
           }
       }
   
       System.out.println(count / n);   
   }
}