/* Define Procedure */
DELIMITER $$
CREATE PROCEDURE procedure_name (parameters)
BEGIN
    -- SQL statements
END$$
DELIMITER ;

/* Call */
CALL procedure_name(@result);
SELECT @result;  
