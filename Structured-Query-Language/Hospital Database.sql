DROP DATABASE Hospital;
CREATE DATABASE Hospital;
USE Hospital;
CREATE TABLE Patient(
PatientID        varchar (15)     NOT NULL     PRIMARY KEY,
 Name            varchar (15)     NOT NULL,
 Age                int,  
 Gender            varchar(5),
 Address           varchar(20),
 Disease           varchar(10)     NOT NULL,
 DoctorID          varchar(15)
 );
 CREATE TABLE Doctor(
 DoctorID           varchar (15)       NOT NULL       PRIMARY KEY,
 Name               varchar (15)       NOT NULL,
 Age                 int,
 Gender              char,
 Address            varchar(20)
 );
 ALTER TABLE Patient ADD FOREIGN KEY (DoctorID) REFERENCES Doctor(DoctorID);
 CREATE TABLE Lab(
 LabID                varchar (15)       NOT NULL      PRIMARY KEY,
 TestDate               date             NOT NULL,  
 TestAmount           varchar(20)         NOT NULL,    
 PatientID            varchar(15)        NOT NULL,
  DoctorID            varchar(15)        NOT NULL,
  FOREIGN KEY  (DoctorID)  REFERENCES  Doctor(DoctorID),
  FOREIGN KEY  (PatientID)  REFERENCES  Patient(PatientID)
);
CREATE TABLE HospitalRoom(
   RoomID               varchar (15)         NOT NULL      PRIMARY KEY,
   RoomAllocationDate   date                 NOT NULL,  
   RoomType             varchar(20)          NOT NULL,
   RoomStatus           varchar(5) 
);
CREATE TABLE PatientBill(
   BillID               varchar (15)          NOT NULL        PRIMARY KEY,   
   BillDate               date                ,
   Amount                varchar(20)          NOT NULL,
   PatientID            varchar(15)
);
ALTER TABLE PatientBill 
ADD FOREIGN KEY (PatientID) REFERENCES Patient (PatientID);
ALTER TABLE HospitalRoom RENAME TO Room;   