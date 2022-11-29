SELECT c.name FROM city c, country cnt
WHERE c.CountryCode = cnt.code
  AND cnt.continent = 'Africa';