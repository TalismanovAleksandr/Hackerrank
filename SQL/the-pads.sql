SELECT * FROM (
                  SELECT name||'('||SUBSTR(OCCUPATION,1,1)||')' FROM OCCUPATIONS
                  ORDER BY name)
UNION
SELECT * FROM (
                  SELECT 'There are a total of ' ||COUNT(OCCUPATION)||' '|| LOWER(OCCUPATION)||'s.' FROM OCCUPATIONS
                  GROUP BY OCCUPATION
                  ORDER BY COUNT(OCCUPATION));