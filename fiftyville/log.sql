-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
-- 1. bakery    2. 10:15   3. 3 witnesses
SELECT description
  FROM crime_scene_reports
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';

-- Find the transcripts of interviews
-- 1. exit the bakery with 10:15-10:25
-- 2. withdraw at ATM on Leggett Street before 10:15
-- 3. the earliest flight for the next day
SELECT name, transcript
  FROM interviews
 WHERE year = 2023 AND month = 7 AND day = 28
   AND transcript LIKE '%bakery%';

-- Find the thief's flight id   (id 36, origin 8, destination 4)
SELECT id, origin_airport_id, destination_airport_id FROM flights
 WHERE year = 2023 AND month = 7 AND day = 29
 ORDER BY hour, minute
 LIMIT 1;

-- Find the info of airports and cities
-- 8  | CSF  | Fiftyville Regional Airport | Fiftyville
-- 4  | LGA  | LaGuardia Airport           | New York City
SELECT * FROM airports
 WHERE id = 8 OR id = 4;



-- Find account_number and amount
SELECT account_number, amount FROM atm_transactions
 WHERE atm_location = 'Leggett Street'
   AND year = 2023 AND month = 7 AND day = 28
   AND transaction_type = 'withdraw';

-- Find the entry and exit information of the bakery
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10
   AND minute > 15 AND minute < 25;

-- Find phone calls
SELECT caller, receiver FROM phone_calls
 WHERE year = 2023 AND month = 7 AND day = 28
   AND duration < 60
 ORDER BY phone_calls.duration;;



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
                   AND transaction_type = 'withdraw')
       );

