SELECT people.name FROM people
  JOIN bakery_security_logs ON people.license_plate = bakery_security_logs.license_plate
  JOIN phone_calls ON people.name = phone_calls.caller
  JOIN passengers ON people.passport_number = passengers.passport_number
  JOIN bank_accounts ON people.id = bank_accounts.person_id
  JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
 WHERE people.license_plate IN
       (SELECT license_plate FROM bakery_security_logs
         WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10
           AND minute >= 15 AND minute <= 25
           AND activity = 'exit')
   AND people.name IN
       (SELECT caller FROM phone_calls
         WHERE year = 2023 AND month = 7 AND day = 28
           AND duration < 60)
   AND people.passport_number IN
       (SELECT passport_number FROM passengers
         WHERE flight_id = 36)
   AND people.id IN
       (SELECT person_id FROM bank_accounts
         WHERE account_number IN
               (SELECT account_number FROM atm_transactions
                 WHERE atm_location = 'Leggett Street'
                   AND year = 2023 AND month = 7 AND day = 28
                   AND transaction_type = 'withdraw'));
