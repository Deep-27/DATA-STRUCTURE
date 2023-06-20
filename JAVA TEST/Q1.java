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
        String userHandle = scanner.nextLine();
        String fullName = getFullName(userHandle);
        System.out.println(fullName);
    }

    public static String getFullName(String userHandle) {
        String[] parts = userHandle.split("_");
        String firstName = capitalizeFirstLetter(parts[0]);
        String lastName = capitalizeFirstLetter(parts[1]);
        return firstName + " " + lastName;
    }

    public static String capitalizeFirstLetter(String word) {
        return Character.toUpperCase(word.charAt(0)) + word.substring(1).toLowerCase();
    }
}