# Write your MySQL query statement below

SELECT email AS Email FROM
(SELECT email,count(email) AS frequency FROM Person GROUP BY email) temp 
WHERE frequency>1 