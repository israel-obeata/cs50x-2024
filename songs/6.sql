SELECT name FROM songs
WHERE artist_id = (
    SELECT id FROM aritists
    WHERE name = 'Post Malon'
);
