# Write your MySQL query statement below
SELECT cu.name AS Customers FROM Customers cu LEFT JOIN Orders o ON cu.id=o.customerId WHERE o.id IS NULL