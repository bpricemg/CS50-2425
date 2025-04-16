-- List of shows with rating greater than 6
-- Using a JOIN statment (exact to 1.sql but with JOIN)
SELECT title FROM shows
JOIN ratings on shows.id = ratings.show_id
WHERE rating >= 6.0
LIMIT 10;
