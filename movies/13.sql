SELECT name FROM peoples
JOIN stars ON peoples.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE 
