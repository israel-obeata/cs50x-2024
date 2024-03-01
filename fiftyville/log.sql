-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
-- We found out where and when the burglary took place, and that there were three witnesses
-- [bakery, 10:15, 3 witnesses]
SELECT description
  FROM crime_scene_reports
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';

-- Find the transcripts of interviews
-- 1. We found out, within 10 minutes of the theft, the car left the bakery.
-- 2. The thief was seen at the ATM on Leggett Street before going to the bakery.
-- 3. When the thief left the bakery, he called a man and spoke for less than a minute.
--    And ask that person to purchase the earliest flight for the next day
-- [10:15-10:25, ATM on Leggett Street, the earliest flight for the next day
SELECT name, transcript
  FROM interviews
 WHERE year = 2023 AND month = 7 AND day = 28;

-- Find the car entry and exit information for the bakery
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10;

 -- Find the thief's flight



