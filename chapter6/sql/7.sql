-- Shows Steve Carell starred
SELECT title FROM shows
WHERE id IN (
    SELECT show_id FROM stars
    WHERE person_id = (
        SELECT id FROM people
        WHERE name = 'Steve Carell'
    )
)
