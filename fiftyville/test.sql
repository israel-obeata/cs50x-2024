SELECT people.name FROM people
  JOIN bakery_security_logs AS bakery ON people.license_plate = bakery.license_plate
  JOIN phone_calls AS calls ON people.phone_number = calls.caller
  JOIN passengers ON people.passport_number = passengers.passport_number
  JOIN bank_accounts AS bank ON people.id = bank.person_id
  JOIN atm_transactions AS atm ON bank.account_number = atm.account_number
 WHERE bakery.year = 2023 AND bakery.month = 7 AND bakery.day = 28
   AND bakery.hour = 10
   AND bakery.minute >= 15 AND bakery.minute <= 25
   AND bakery.activity = 'exit'
   AND calls.year = 2023 AND calls.month = 7 AND calls.day = 28
   AND calls.duration <= 60
   AND passengers.flight_id = 36
   AND atm.atm_location = 'Leggett Street'
   AND atm.year = 2023 AND atm.month = 7 AND atm.day = 28
   AND atm.transaction_type = 'withdraw';

-- Find the accomplice
SELECT name FROM people AS p
 WHERE 
 WHERE
 WHERE c.caller = 'Bruce'
   AND c.year = 2023 AND c.month = 7 AND c.day = 28
   AND c.duration <= 60;

