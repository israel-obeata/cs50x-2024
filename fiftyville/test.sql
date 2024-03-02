SELECT people.name FROM people
  JOIN bakery_security_logs AS bakery ON people.license_plate = bakery.license_plate
  JOIN phone_calls ON people.name = phone_calls.caller
  --JOIN passengers ON people.passport_number = passengers.passport_number
  --JOIN bank_accounts ON people.id = bank_accounts.person_id
  --JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
 WHERE bakery.year = 2023 AND bakery.month = 7 AND bakery.day = 28
   AND bakery.hour = 10
   AND bakery.minute >= 15 AND bakery.minute <= 25
   AND bakery.activity = 'exit'
   --AND phone_calls.year = 2023 AND phone_calls.month = 7 AND phone_calls.day = 28
   --AND phone_calls.duration <= 60
   --AND passengers.flight_id = 36
   --AND atm_transactions.atm_location = 'Leggett Street'
   --AND atm_transactions.year = 2023 AND atm_transactions.month = 7 AND atm_transactions.day = 28
   --AND atm_transactions.transaction_type = 'withdraw';
