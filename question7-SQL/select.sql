select name from dogs
UNION -- union makes distinct (different from UNION ALL)
select name from cats;