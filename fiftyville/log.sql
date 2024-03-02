-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
-- 1. bakery    2. 10:15   3. witnesses
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
 WHERE year = 2023 AND month = 7 AND day = 28;

-- Find the thief's flight id   (origin 8, destination 4)
SELECT origin_airport_id, destination_airport_id FROM flights
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

-- Find the car entry and exit information for the bakery
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10
   AND minute > 15 AND minute < 25;

-- Find phone call
SELECT caller, receiver FROM phone_calls
 WHERE year = 2023 AND month = 7 AND day = 28
   AND duration < 60;


SELECT id FROM people
  JOIN phone_calls ON people.name = phone_calls.caller
WHERE people.lisence IN (
    SELECT lisence FROM bakery
)
AND people.phone_number IN (
    SELECT 拨号number FROM phone_calls
)
AND atm.acount IN (
    SELECT acount FROM bank_aounts
)
