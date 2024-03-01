-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
-- 1. bakery    2. 10:15   3. witnesses
SELECT description
  FROM crime_scene_reports
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';

-- Find the transcripts of interviews
-- 1. exit the bakery with 10:15-10:25
-- 2. ATM on Leggett Street before 10:15
-- 3. the earliest flight for the next day
SELECT name, transcript
  FROM interviews
 WHERE year = 2023 AND month = 7 AND day = 28;

-- Find the car entry and exit information for the bakery
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10
   AND minute >= 15 AND minute <= 25;

 -- Find the thief's flight



