SELECT DISTINCT CITY FROM STATION
WHERE lower(SUBSTR(CITY,1,1)) in ('a', 'e', 'i', 'o', 'u');