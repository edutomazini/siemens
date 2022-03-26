SELECT
    CASE
        WHEN grade < 8 THEN
            NULL
        ELSE
            name
    END name,
    grade,
    value
FROM Students, Notes
WHERE value >= min_value AND value <= max_value
ORDER BY grade DESC, Name DESC;