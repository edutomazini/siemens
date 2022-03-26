SELECT
    CASE
        WHEN grade < 8 THEN
            NULL
        ELSE
            name
    END name,
    grade,
    value
FROM
    (SELECT
            id,
            name,
            (SELECT
                    grade
                FROM
                    notes
                WHERE
                        value >= min_value
                    AND value <= max_value) grade,
            value
        FROM
            students)
ORDER BY
    grade DESC,
    name DESC;