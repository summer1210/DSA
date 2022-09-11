Select name as Customers
From Customers
Where id not in(select customerId from Orders )
