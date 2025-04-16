-- Find a list of shows that are comedies
SELECT title from shows
WHERE id IN (
    SELECT show_id FROM genres
    WHERE genre = 'Comedy'
    LIMIT 10
)
