import java.util.Scanner;

public class WayTooLongWords
{
   public static void main(String[] args)
   {
      Scanner kb = new Scanner(System.in);
      int numOfWords = kb.nextInt();
      kb.nextLine();
      String output = "";
      
      for (int i = 0; i < numOfWords; i++)
      {
         String word = kb.nextLine();
         if (word.length() > 10)
         {
            if (i == numOfWords - 1)
            {
               output += (word.substring(0, 1) + (word.length() - 2) + word.substring(word.length() - 1));
            }
            else
            {
               output += (word.substring(0, 1) + (word.length() - 2) + word.substring(word.length() - 1) + "\n");
            }
         }
         else
         {
            if (i == numOfWords - 1)
            {
               output += word;
            }
            else
            {
               output += word + "\n";
            }
            
         }
      }
      System.out.print(output);
   }
}

