-- The id of stars in the show The Office
SELECT person_id FROM stars
WHERE show_id = (
    SELECT id FROM shows
    WHERE title = 'The Office' AND year = 2005
)
