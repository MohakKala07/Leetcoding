# Write your MySQL query statement below

SELECT IFNULL(
(SELECT DISTINCT Salary from Employee ORDER BY Salary DESC LIMIT 1 OFFSET 1),NULL)
 AS SecondHighestSalary