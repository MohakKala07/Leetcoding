# Write your MySQL query statement below

SELECT p.firstname,p.lastname,a.city,a.state FROM Person AS p LEFT JOIN Address AS a ON p.personId = a.personId;