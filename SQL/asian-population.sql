SELECT SUM(c.population) FROM city c, country cnt
WHERE c.countrycode = cnt.code
  AND cnt.continent = 'Asia';