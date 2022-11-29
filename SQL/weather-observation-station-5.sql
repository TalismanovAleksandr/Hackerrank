--MYSQL
select * from (select city, length(city) from station order by Length(city) asc, city ) a limit 1;
select * from (select city, length(city) from station order by Length(city) DESC, city) b limit 1;