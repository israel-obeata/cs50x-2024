SELECT DISTINCT(name) FROM people
JOIN stars ON people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE name != 'Kevin Bacon' AND movies.title IN (
    SELECT title FROM movies
    JOIN stars ON people.id = stars.person_id
    JOIN movies ON stars.movie_id = movies.id
    WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
);
