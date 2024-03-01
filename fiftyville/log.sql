-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
SELECT description
  FROM crime_scene_reports
 WHERE month = 7 AND day = 28 AND year = 2023
   AND street = 'Humphrey Street';

-- Find bakery security log
SELECT activity, license_plate
  FROM bakery
 WHERE month = 7 AND day = 28 AND year = 2023
   AND street = 'Humphrey Street';
