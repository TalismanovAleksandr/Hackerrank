SELECT (CASE WHEN grade >= 8 THEN S.name ELSE 'NULL' END) name, g.grade, s.marks
FROM students s
         JOIN
     grades g
     ON s.marks BETWEEN g.min_mark AND g.max_mark
ORDER BY g.grade DESC, name, marks;