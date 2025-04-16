-- Find a list of shows that are comedies
SELECT title FROM shows
JOIN genres ON shows.id = genres.show_id
WHERE genre = 'Comedy'
LIMIT 10
