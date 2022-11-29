SELECT DISTINCT CITY FROM STATION
WHERE lower(substr(city,-1,1)) not in ('a','e','i','o','u');