
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
 public static void main (String[] args) throws java.lang.Exception
 {
  Scanner scanner = new Scanner(System.in);
        
        // Read the number of test cases
        int T = scanner.nextInt();
        
        // Process each test case
        for (int i = 0; i < T; i++) {
            // Read the length of the email
            int N = scanner.nextInt();
            
            // Read the email string
            String email = scanner.next();
            
            // Find the position of '@' and '.'
            int atPosition = email.indexOf('@');
            int dotPosition = email.indexOf('.');
            
            // Extract the username and email provider
            String username = email.substring(0, atPosition);
            String provider = email.substring(atPosition + 1, dotPosition);
            
            // Print the username and email provider
            System.out.println(username + " " + provider);
        }
        
        scanner.close();
 }
}