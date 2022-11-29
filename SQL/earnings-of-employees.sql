--MySQL
SELECT MAX(salary * months), COUNT(*)
FROM Employee
GROUP BY salary * months
ORDER BY  salary * months DESC
    LIMIT 1;

--oracle
SELECT * FROM (
      SELECT MAX(salary * months) salary, COUNT(*) cnt FROM EMPLOYEE
      GROUP BY salary * months
      ORDER BY salary DESC)
WHERE rownum <= 1;