-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
SELECT description
  FROM crime_scene_reports
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';

-- Find the car entry and exit information for the bakery
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10;

-- Find the transcripts of interviews
SELECT name, transcript
  FROM interviews
 WHERE year = 2023 AND month = 7 AND day = 28;



