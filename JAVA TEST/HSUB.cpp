/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static class Customer
    {
        int price;
        int flavor;

    public
        Customer(int price, int flavor)
        {
            this.price = price;
            this.flavor = flavor;
        }
    }

    static class Chocolate
    {
        int price;
        int flavor;

    public
        Chocolate(int price, int flavor)
        {
            this.price = price;
            this.flavor = flavor;
        }
    }

    public static void
    main(String[] args) throws java.lang.Exception
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        List<Customer> customers = new ArrayList<>();
        for (int i = 0; i < n; i++)
        {
            int price = scanner.nextInt();
            int flavor = scanner.nextInt();
            customers.add(new Customer(price, flavor));
        }

        int m = scanner.nextInt();

        List<Chocolate> chocolates = new ArrayList<>();
        for (int i = 0; i < m; i++)
        {
            int price = scanner.nextInt();
            int flavor = scanner.nextInt();
            chocolates.add(new Chocolate(price, flavor));
        }

        int maxChocolatesSold = 0;
        int maxHappyCustomers = 0;
        boolean happyCustomerExists = false;

        for (Customer customer : customers)
        {
            int currentChocolatesSold = 0;
            int currentHappyCustomers = 0;

            for (Chocolate chocolate : chocolates)
            {
                if (chocolate.price == customer.price && chocolate.flavor == customer.flavor)
                {
                    currentChocolatesSold++;
                    currentHappyCustomers++;
                    happyCustomerExists = true;
                    break;
                }
            }

            if (currentChocolatesSold == 0)
            {
                for (Chocolate chocolate : chocolates)
                {
                    if (chocolate.price == customer.price && chocolate.flavor != customer.flavor)
                    {
                        currentChocolatesSold++;
                        break;
                    }
                }
            }

            maxChocolatesSold += currentChocolatesSold;
            maxHappyCustomers += currentHappyCustomers;
        }

        if (!happyCustomerExists)
        {
            maxHappyCustomers = 0;
        }

        System.out.println(maxChocolatesSold + " " + maxHappyCustomers);

        scanner.close();
    }
}
