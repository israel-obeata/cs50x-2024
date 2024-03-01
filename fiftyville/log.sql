-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Find crime scene description
SELECT description
  FROM crime_scene_reports
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';

-- Find bakery security log
SELECT activity, license_plate
  FROM bakery_security_logs
 WHERE year = 2023 AND month = 7 AND day = 28
   AND street = 'Humphrey Street';
