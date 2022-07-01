# Write your MySQL query statement below
SELECT a.name as Employee FROM Employee a WHERE a.salary>(SELECT b.salary FROM Employee b WHERE a.managerId=b.id);
# select a.name as Employee from Employee a where a.salary>(select b.salary from Employee b where a.managerId=b.id);