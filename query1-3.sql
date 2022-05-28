SELECT first_name,last_name,rental_date FROM customer
INNER JOIN rental ON customer.customer_id=rental.customer_id
WHERE rental_date=( SELECT MIN(rental_date) FROM rental WHERE return_date IS NULL);