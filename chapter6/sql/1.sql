-- Finding the title of shows with rating greater than 6
SELECT title FROM shows
WHERE id IN (
    SELECT show_id FROM ratings
    WHERE rating >= 6.0
    LIMIT 10
)
