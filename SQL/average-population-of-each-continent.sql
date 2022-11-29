SELECT cnt.continent, FLOOR(AVG(c.population)) FROM country cnt, city c
WHERE c.countryCode = cnt.code
GROUP BY cnt.continent;