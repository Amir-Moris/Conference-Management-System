--------------------------------------------------------
--  File created - Monday-December-27-2021   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Sequence DEPARTMENTS_SEQ
--------------------------------------------------------

   CREATE SEQUENCE  "DEPARTMENTS_SEQ"  MINVALUE 1 MAXVALUE 9990 INCREMENT BY 10 START WITH 280 NOCACHE  NOORDER  NOCYCLE ;
--------------------------------------------------------
--  DDL for Sequence EMPLOYEES_SEQ
--------------------------------------------------------

   CREATE SEQUENCE  "EMPLOYEES_SEQ"  MINVALUE 1 MAXVALUE 9999999999999999999999999999 INCREMENT BY 1 START WITH 207 NOCACHE  NOORDER  NOCYCLE ;
--------------------------------------------------------
--  DDL for Sequence LOCATIONS_SEQ
--------------------------------------------------------

   CREATE SEQUENCE  "LOCATIONS_SEQ"  MINVALUE 1 MAXVALUE 9900 INCREMENT BY 100 START WITH 3300 NOCACHE  NOORDER  NOCYCLE ;
--------------------------------------------------------
--  DDL for Sequence SEQ
--------------------------------------------------------

   CREATE SEQUENCE  "SEQ"  MINVALUE 1 MAXVALUE 500 INCREMENT BY 1 START WITH 22 CACHE 20 NOORDER  NOCYCLE ;
--------------------------------------------------------
--  DDL for Sequence SEQQ
--------------------------------------------------------

   CREATE SEQUENCE  "SEQQ"  MINVALUE 1 MAXVALUE 500 INCREMENT BY 1 START WITH 21 CACHE 20 NOORDER  NOCYCLE ;
--------------------------------------------------------
--  DDL for Table ATTEND
--------------------------------------------------------

  CREATE TABLE "ATTEND" 
   (	"GUEST_ID" NUMBER(10,0), 
	"EVENT_NUMBER" NUMBER(10,0)
   ) ;
--------------------------------------------------------
--  DDL for Table CLIENT
--------------------------------------------------------

  CREATE TABLE "CLIENT" 
   (	"NAME" VARCHAR2(26), 
	"EMAIL" VARCHAR2(26)
   ) ;
--------------------------------------------------------
--  DDL for Table CLIENT_LOCATION
--------------------------------------------------------

  CREATE TABLE "CLIENT_LOCATION" 
   (	"CLIENT_NAME" VARCHAR2(26), 
	"LOCATION" VARCHAR2(20)
   ) ;
--------------------------------------------------------
--  DDL for Table CLIENT_PHONE_NUMBER
--------------------------------------------------------

  CREATE TABLE "CLIENT_PHONE_NUMBER" 
   (	"CLIENT_NAME" VARCHAR2(26), 
	"PHONE_NUMBER" NUMBER(7,0)
   ) ;
--------------------------------------------------------
--  DDL for Table DEPARTMENT
--------------------------------------------------------

  CREATE TABLE "DEPARTMENT" 
   (	"ID" NUMBER(8,0), 
	"DEPT_NAME" VARCHAR2(26), 
	"MANAGER_NATIONAL_ID" NUMBER(14,0)
   ) ;
--------------------------------------------------------
--  DDL for Table EMPLOYEE
--------------------------------------------------------

  CREATE TABLE "EMPLOYEE" 
   (	"NATIONAL_ID" NUMBER(14,0), 
	"SALARY" NUMBER(10,0), 
	"EVENT_NUMBER" NUMBER(10,0), 
	"SUPER_ID" NUMBER(14,0), 
	"FIRST_NAME" VARCHAR2(26), 
	"LAST_NAME" VARCHAR2(26), 
	"EMAIL" VARCHAR2(30), 
	"DEPARTMENT_ID" NUMBER(10,0)
   ) ;
--------------------------------------------------------
--  DDL for Table EMPLOYEE_PHONE_NUMBER
--------------------------------------------------------

  CREATE TABLE "EMPLOYEE_PHONE_NUMBER" 
   (	"EMPLOYEE_NATIONAL_ID" NUMBER(14,0), 
	"PHONE_NUMBER" NUMBER(11,0)
   ) ;
--------------------------------------------------------
--  DDL for Table EVENT
--------------------------------------------------------

  CREATE TABLE "EVENT" 
   (	"EVENT_NUMBER" NUMBER(20,0), 
	"NAME" VARCHAR2(30), 
	"DATES" DATE, 
	"LOCATION" VARCHAR2(50), 
	"START_TIME" VARCHAR2(20), 
	"END_TIME" VARCHAR2(20), 
	"CLINET_NAME" VARCHAR2(30), 
	"BUDGET" NUMBER(30,0)
   ) ;
--------------------------------------------------------
--  DDL for Table GUEST
--------------------------------------------------------

  CREATE TABLE "GUEST" 
   (	"ID" NUMBER(14,0), 
	"EMAIL" VARCHAR2(320), 
	"SEAT" NUMBER(4,0), 
	"FIRST_NAME" VARCHAR2(20), 
	"LAST_NAME" VARCHAR2(20)
   ) ;
--------------------------------------------------------
--  DDL for Table GUEST_PHONE_NUMBER
--------------------------------------------------------

  CREATE TABLE "GUEST_PHONE_NUMBER" 
   (	"GUEST_ID" NUMBER(14,0), 
	"PHONE_NUMBER" NUMBER(14,0)
   ) ;
--------------------------------------------------------
--  DDL for Table SPEAKER
--------------------------------------------------------

  CREATE TABLE "SPEAKER" 
   (	"NATIONAL_ID" NUMBER(15,0), 
	"EMAIL" VARCHAR2(50), 
	"FIRST_NAME" VARCHAR2(20), 
	"LAST_NAME" VARCHAR2(20), 
	"TIME" NUMBER(10,0)
   ) ;
--------------------------------------------------------
--  DDL for Table SPEAKER_PHONE_NUMBER
--------------------------------------------------------

  CREATE TABLE "SPEAKER_PHONE_NUMBER" 
   (	"NATIONAL_ID" NUMBER(15,0), 
	"SPEAKER_PHONE_NUMBER" NUMBER(15,0)
   ) ;
--------------------------------------------------------
--  DDL for Table SPEAKES_IN
--------------------------------------------------------

  CREATE TABLE "SPEAKES_IN" 
   (	"EVENT_NUMBER" NUMBER(4,0), 
	"SPEAKER_NATIONAL_ID" NUMBER(14,0), 
	"SPEAKES_TIME" NUMBER(20,0)
   ) ;
--------------------------------------------------------
--  DDL for Table WORKS_WITH
--------------------------------------------------------

  CREATE TABLE "WORKS_WITH" 
   (	"CLIENT_NAME" VARCHAR2(25), 
	"SPEAKER_NATIONAL_ID" NUMBER(10,0)
   ) ;

---------------------------------------------------
--   DATA FOR TABLE GUEST
--   FILTER = none used
---------------------------------------------------
REM INSERTING into GUEST
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (1,'email',2,'moh','name');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (2,'ee',3,'farah','fared');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (3,'ce',4,'sara','ali');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (4,'dwq',5,'soso','ahemd');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (5,'ece',6,'hany','gamal');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (6,'q',7,'esaam','alaa');
Insert into GUEST (ID,EMAIL,SEAT,FIRST_NAME,LAST_NAME) values (7,'cq',8,'johny','ali');

---------------------------------------------------
--   END DATA FOR TABLE GUEST
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE WORKS_WITH
--   FILTER = none used
---------------------------------------------------
REM INSERTING into WORKS_WITH
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('abc',3);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('ali',3);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('ando',4);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('john',2);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('lina',1);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('maria',1);
Insert into WORKS_WITH (CLIENT_NAME,SPEAKER_NATIONAL_ID) values ('mina',3);

---------------------------------------------------
--   END DATA FOR TABLE WORKS_WITH
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE EMPLOYEE
--   FILTER = none used
---------------------------------------------------
REM INSERTING into EMPLOYEE
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (1,1200,11,1,'John','Mark','john@gmail.com',1);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (2,1100,22,1,'aaaa','sssss','awa',2);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (3,12,10,2,'mina','girgis','mm',2);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (4,12121,1221,1,'aaa','qqq','qqw',2);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (5,5000,1,1,'verina','gad','verinagad',1);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (6,5000,2,2,'alii','mark','maria',3);
Insert into EMPLOYEE (NATIONAL_ID,SALARY,EVENT_NUMBER,SUPER_ID,FIRST_NAME,LAST_NAME,EMAIL,DEPARTMENT_ID) values (7,2000,4,2,'bdd','ttty',null,5);

---------------------------------------------------
--   END DATA FOR TABLE EMPLOYEE
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE SPEAKER_PHONE_NUMBER
--   FILTER = none used
---------------------------------------------------
REM INSERTING into SPEAKER_PHONE_NUMBER
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (1,555);
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (2,442);
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (3,345);
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (4,3554);
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (5,4542);
Insert into SPEAKER_PHONE_NUMBER (NATIONAL_ID,SPEAKER_PHONE_NUMBER) values (6,4432);

---------------------------------------------------
--   END DATA FOR TABLE SPEAKER_PHONE_NUMBER
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE SPEAKER
--   FILTER = none used
---------------------------------------------------
REM INSERTING into SPEAKER
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (1,'aa','sara','zeid',1);
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (2,'abcd','ali','amgad',2);
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (3,'cq','john ','alaa',3);
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (4,'ffw','gmal','lydia',4);
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (5,'cca','maek','merna',5);
Insert into SPEAKER (NATIONAL_ID,EMAIL,FIRST_NAME,LAST_NAME,TIME) values (6,'ce','mat','magdy',6);

---------------------------------------------------
--   END DATA FOR TABLE SPEAKER
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE EMPLOYEE_PHONE_NUMBER
--   FILTER = none used
---------------------------------------------------
REM INSERTING into EMPLOYEE_PHONE_NUMBER
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (1,21212132);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (2,484848);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (3,4422);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (4,43432);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (5,334445);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (6,29282828);
Insert into EMPLOYEE_PHONE_NUMBER (EMPLOYEE_NATIONAL_ID,PHONE_NUMBER) values (7,3441);

---------------------------------------------------
--   END DATA FOR TABLE EMPLOYEE_PHONE_NUMBER
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE ATTEND
--   FILTER = none used
---------------------------------------------------
REM INSERTING into ATTEND
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (1,1);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (4,1);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (5,1);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (7,1);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (4,3);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (6,4);
Insert into ATTEND (GUEST_ID,EVENT_NUMBER) values (3,5);

---------------------------------------------------
--   END DATA FOR TABLE ATTEND
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE CLIENT_LOCATION
--   FILTER = none used
---------------------------------------------------
REM INSERTING into CLIENT_LOCATION
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('abc','aaaaa');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('ali','giza');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('ando','cairo');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('john','masr');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('lina','abc');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('maria','location');
Insert into CLIENT_LOCATION (CLIENT_NAME,LOCATION) values ('mina','alex');

---------------------------------------------------
--   END DATA FOR TABLE CLIENT_LOCATION
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE EVENT
--   FILTER = none used
---------------------------------------------------
REM INSERTING into EVENT
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (1,'data',to_timestamp('23-DEC-21 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'sas','1','2','maria',12);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (3,'database',to_timestamp('16-OCT-01 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'abcd','1','2','lina',null);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (4,'uni',to_timestamp('14-JUN-50 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'aaaaa','1','3','abc',5000);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (5,'oop',to_timestamp('30-DEC-21 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'ee','1','3',null,null);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (7,'math',to_timestamp('27-AUG-21 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'ees','1','3','john',null);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (8,'logic',to_timestamp('30-DEC-21 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'eq','1','3','ali',1000);
Insert into EVENT (EVENT_NUMBER,NAME,DATES,LOCATION,START_TIME,END_TIME,CLINET_NAME,BUDGET) values (2,'calc',to_timestamp('21-DEC-22 12.00.00.000000000 AM','DD-MON-RR HH.MI.SS.FF AM'),'cairo','1','3','ando',5550);

---------------------------------------------------
--   END DATA FOR TABLE EVENT
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE SPEAKES_IN
--   FILTER = none used
---------------------------------------------------
REM INSERTING into SPEAKES_IN
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (1,1,1);
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (3,3,1);
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (4,4,1);
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (5,5,1);
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (4,1,1);
Insert into SPEAKES_IN (EVENT_NUMBER,SPEAKER_NATIONAL_ID,SPEAKES_TIME) values (2,2,1);

---------------------------------------------------
--   END DATA FOR TABLE SPEAKES_IN
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE CLIENT_PHONE_NUMBER
--   FILTER = none used
---------------------------------------------------
REM INSERTING into CLIENT_PHONE_NUMBER
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('abc',1233);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('abc',123456);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('ali',343);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('john',323);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('lina',123);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('maria',45585);
Insert into CLIENT_PHONE_NUMBER (CLIENT_NAME,PHONE_NUMBER) values ('mina',990309);

---------------------------------------------------
--   END DATA FOR TABLE CLIENT_PHONE_NUMBER
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE CLIENT
--   FILTER = none used
---------------------------------------------------
REM INSERTING into CLIENT
Insert into CLIENT (NAME,EMAIL) values ('maria','maria');
Insert into CLIENT (NAME,EMAIL) values ('lina','lina123');
Insert into CLIENT (NAME,EMAIL) values ('abc','aaa');
Insert into CLIENT (NAME,EMAIL) values ('john','ee');
Insert into CLIENT (NAME,EMAIL) values ('ando','fe');
Insert into CLIENT (NAME,EMAIL) values ('amir ','adc');
Insert into CLIENT (NAME,EMAIL) values ('mina','cqe');
Insert into CLIENT (NAME,EMAIL) values ('ali','eerd');

---------------------------------------------------
--   END DATA FOR TABLE CLIENT
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE GUEST_PHONE_NUMBER
--   FILTER = none used
---------------------------------------------------
REM INSERTING into GUEST_PHONE_NUMBER
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (1,54545);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (2,5311);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (3,7987);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (4,3093);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (5,322);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (6,346);
Insert into GUEST_PHONE_NUMBER (GUEST_ID,PHONE_NUMBER) values (7,398);

---------------------------------------------------
--   END DATA FOR TABLE GUEST_PHONE_NUMBER
---------------------------------------------------

---------------------------------------------------
--   DATA FOR TABLE DEPARTMENT
--   FILTER = none used
---------------------------------------------------
REM INSERTING into DEPARTMENT
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (1,'dep1',1);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (2,'dep2',2);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (3,'dep3',2);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (4,'dep4',4);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (5,'dep5',5);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (6,'dep6',null);
Insert into DEPARTMENT (ID,DEPT_NAME,MANAGER_NATIONAL_ID) values (7,'dep7',7);

---------------------------------------------------
--   END DATA FOR TABLE DEPARTMENT
---------------------------------------------------
--------------------------------------------------------
--  Constraints for Table ATTEND
--------------------------------------------------------

  ALTER TABLE "ATTEND" ADD CONSTRAINT "GE_PK" PRIMARY KEY ("EVENT_NUMBER", "GUEST_ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table CLIENT
--------------------------------------------------------

  ALTER TABLE "CLIENT" ADD PRIMARY KEY ("NAME") ENABLE;
--------------------------------------------------------
--  Constraints for Table CLIENT_LOCATION
--------------------------------------------------------

  ALTER TABLE "CLIENT_LOCATION" ADD PRIMARY KEY ("CLIENT_NAME", "LOCATION") ENABLE;
--------------------------------------------------------
--  Constraints for Table CLIENT_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "CLIENT_PHONE_NUMBER" ADD PRIMARY KEY ("CLIENT_NAME", "PHONE_NUMBER") ENABLE;
--------------------------------------------------------
--  Constraints for Table DEPARTMENT
--------------------------------------------------------

  ALTER TABLE "DEPARTMENT" ADD PRIMARY KEY ("ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table EMPLOYEE
--------------------------------------------------------

  ALTER TABLE "EMPLOYEE" ADD PRIMARY KEY ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table EMPLOYEE_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "EMPLOYEE_PHONE_NUMBER" ADD PRIMARY KEY ("EMPLOYEE_NATIONAL_ID", "PHONE_NUMBER") ENABLE;
--------------------------------------------------------
--  Constraints for Table EVENT
--------------------------------------------------------

  ALTER TABLE "EVENT" ADD CONSTRAINT "CONSTRAINT1" UNIQUE ("CLINET_NAME") ENABLE;
 
  ALTER TABLE "EVENT" ADD CHECK ( Budget >0) ENABLE;
 
  ALTER TABLE "EVENT" ADD PRIMARY KEY ("EVENT_NUMBER") ENABLE;
 
  ALTER TABLE "EVENT" ADD UNIQUE ("NAME") ENABLE;
--------------------------------------------------------
--  Constraints for Table GUEST
--------------------------------------------------------

  ALTER TABLE "GUEST" MODIFY ("EMAIL" NOT NULL ENABLE);
 
  ALTER TABLE "GUEST" MODIFY ("SEAT" NOT NULL ENABLE);
 
  ALTER TABLE "GUEST" MODIFY ("FIRST_NAME" NOT NULL ENABLE);
 
  ALTER TABLE "GUEST" MODIFY ("LAST_NAME" NOT NULL ENABLE);
 
  ALTER TABLE "GUEST" ADD PRIMARY KEY ("ID") ENABLE;
 
  ALTER TABLE "GUEST" ADD UNIQUE ("SEAT") ENABLE;
--------------------------------------------------------
--  Constraints for Table GUEST_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "GUEST_PHONE_NUMBER" MODIFY ("PHONE_NUMBER" NOT NULL ENABLE);
 
  ALTER TABLE "GUEST_PHONE_NUMBER" ADD PRIMARY KEY ("GUEST_ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table SPEAKER
--------------------------------------------------------

  ALTER TABLE "SPEAKER" MODIFY ("NATIONAL_ID" NOT NULL ENABLE);
 
  ALTER TABLE "SPEAKER" MODIFY ("EMAIL" NOT NULL ENABLE);
 
  ALTER TABLE "SPEAKER" MODIFY ("FIRST_NAME" NOT NULL ENABLE);
 
  ALTER TABLE "SPEAKER" MODIFY ("LAST_NAME" NOT NULL ENABLE);
 
  ALTER TABLE "SPEAKER" ADD PRIMARY KEY ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table SPEAKER_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "SPEAKER_PHONE_NUMBER" ADD PRIMARY KEY ("NATIONAL_ID", "SPEAKER_PHONE_NUMBER") ENABLE;
--------------------------------------------------------
--  Constraints for Table SPEAKES_IN
--------------------------------------------------------

  ALTER TABLE "SPEAKES_IN" ADD PRIMARY KEY ("EVENT_NUMBER", "SPEAKER_NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Constraints for Table WORKS_WITH
--------------------------------------------------------

  ALTER TABLE "WORKS_WITH" ADD CONSTRAINT "CP_PK" PRIMARY KEY ("CLIENT_NAME", "SPEAKER_NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  DDL for Index CONSTRAINT1
--------------------------------------------------------

  CREATE UNIQUE INDEX "CONSTRAINT1" ON "EVENT" ("CLINET_NAME") 
  ;
--------------------------------------------------------
--  DDL for Index CP_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "CP_PK" ON "WORKS_WITH" ("CLIENT_NAME", "SPEAKER_NATIONAL_ID") 
  ;
--------------------------------------------------------
--  DDL for Index GE_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "GE_PK" ON "ATTEND" ("EVENT_NUMBER", "GUEST_ID") 
  ;
--------------------------------------------------------
--  Ref Constraints for Table ATTEND
--------------------------------------------------------

  ALTER TABLE "ATTEND" ADD CONSTRAINT "EVENT_NUMBER" FOREIGN KEY ("EVENT_NUMBER")
	  REFERENCES "EVENT" ("EVENT_NUMBER") ENABLE;
 
  ALTER TABLE "ATTEND" ADD CONSTRAINT "GUEST_ID_ATTEND" FOREIGN KEY ("GUEST_ID")
	  REFERENCES "GUEST" ("ID") ENABLE;

--------------------------------------------------------
--  Ref Constraints for Table CLIENT_LOCATION
--------------------------------------------------------

  ALTER TABLE "CLIENT_LOCATION" ADD CONSTRAINT "CLIENT_NAME_LOCATION" FOREIGN KEY ("CLIENT_NAME")
	  REFERENCES "CLIENT" ("NAME") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table CLIENT_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "CLIENT_PHONE_NUMBER" ADD CONSTRAINT "CLIENT_NAME_PHONE_NUMBER" FOREIGN KEY ("CLIENT_NAME")
	  REFERENCES "CLIENT" ("NAME") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table DEPARTMENT
--------------------------------------------------------

  ALTER TABLE "DEPARTMENT" ADD CONSTRAINT "MANGER_NATIONAL_ID" FOREIGN KEY ("MANAGER_NATIONAL_ID")
	  REFERENCES "EMPLOYEE" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table EMPLOYEE
--------------------------------------------------------

  ALTER TABLE "EMPLOYEE" ADD CONSTRAINT "DEPARTMENT_ID" FOREIGN KEY ("DEPARTMENT_ID")
	  REFERENCES "DEPARTMENT" ("ID") ENABLE;
 
  ALTER TABLE "EMPLOYEE" ADD CONSTRAINT "SUPER_ID" FOREIGN KEY ("SUPER_ID")
	  REFERENCES "EMPLOYEE" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table EMPLOYEE_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "EMPLOYEE_PHONE_NUMBER" ADD CONSTRAINT "EMPLOYEE_NATIONAL_ID" FOREIGN KEY ("EMPLOYEE_NATIONAL_ID")
	  REFERENCES "EMPLOYEE" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table EVENT
--------------------------------------------------------

  ALTER TABLE "EVENT" ADD CONSTRAINT "CLIENT_NAME_EVENT" FOREIGN KEY ("CLINET_NAME")
	  REFERENCES "CLIENT" ("NAME") ENABLE;

--------------------------------------------------------
--  Ref Constraints for Table GUEST_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "GUEST_PHONE_NUMBER" ADD CONSTRAINT "GUEST_ID" FOREIGN KEY ("GUEST_ID")
	  REFERENCES "GUEST" ("ID") ENABLE;

--------------------------------------------------------
--  Ref Constraints for Table SPEAKER_PHONE_NUMBER
--------------------------------------------------------

  ALTER TABLE "SPEAKER_PHONE_NUMBER" ADD CONSTRAINT "NATIONAL_ID" FOREIGN KEY ("NATIONAL_ID")
	  REFERENCES "SPEAKER" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table SPEAKES_IN
--------------------------------------------------------

  ALTER TABLE "SPEAKES_IN" ADD CONSTRAINT "EVENT_NUMBER_SPEAKES_IN" FOREIGN KEY ("EVENT_NUMBER")
	  REFERENCES "EVENT" ("EVENT_NUMBER") ENABLE;
 
  ALTER TABLE "SPEAKES_IN" ADD CONSTRAINT "SPEAKER_NATIONAL_ID_SPEAKES_IN" FOREIGN KEY ("SPEAKER_NATIONAL_ID")
	  REFERENCES "SPEAKER" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table WORKS_WITH
--------------------------------------------------------

  ALTER TABLE "WORKS_WITH" ADD CONSTRAINT "CLIENT_NAME" FOREIGN KEY ("CLIENT_NAME")
	  REFERENCES "CLIENT" ("NAME") ENABLE;
 
  ALTER TABLE "WORKS_WITH" ADD CONSTRAINT "SPEAKER_NATIONAL_ID" FOREIGN KEY ("SPEAKER_NATIONAL_ID")
	  REFERENCES "SPEAKER" ("NATIONAL_ID") ENABLE;
--------------------------------------------------------
--  DDL for View EMP_DETAILS_VIEW
--------------------------------------------------------

  CREATE OR REPLACE VIEW "EMP_DETAILS_VIEW" ("EMPLOYEE_ID", "JOB_ID", "MANAGER_ID", "DEPARTMENT_ID", "LOCATION_ID", "COUNTRY_ID", "FIRST_NAME", "LAST_NAME", "SALARY", "COMMISSION_PCT", "DEPARTMENT_NAME", "JOB_TITLE", "CITY", "STATE_PROVINCE", "COUNTRY_NAME", "REGION_NAME") AS 
  SELECT
  e.employee_id,
  e.job_id,
  e.manager_id,
  e.department_id,
  d.location_id,
  l.country_id,
  e.first_name,
  e.last_name,
  e.salary,
  e.commission_pct,
  d.department_name,
  j.job_title,
  l.city,
  l.state_province,
  c.country_name,
  r.region_name
FROM
  employees e,
  departments d,
  jobs j,
  locations l,
  countries c,
  regions r
WHERE e.department_id = d.department_id
  AND d.location_id = l.location_id
  AND l.country_id = c.country_id
  AND c.region_id = r.region_id
  AND j.job_id = e.job_id
WITH READ ONLY;
--------------------------------------------------------
--  DDL for Procedure ADD_JOB_HISTORY
--------------------------------------------------------
set define off;

  CREATE OR REPLACE PROCEDURE "ADD_JOB_HISTORY" 
  (  p_emp_id          job_history.employee_id%type
   , p_start_date      job_history.start_date%type
   , p_end_date        job_history.end_date%type
   , p_job_id          job_history.job_id%type
   , p_department_id   job_history.department_id%type
   )
IS
BEGIN
  INSERT INTO job_history (employee_id, start_date, end_date,
                           job_id, department_id)
    VALUES(p_emp_id, p_start_date, p_end_date, p_job_id, p_department_id);
END add_job_history;

/

--------------------------------------------------------
--  DDL for Procedure SECURE_DML
--------------------------------------------------------
set define off;

  CREATE OR REPLACE PROCEDURE "SECURE_DML" 
IS
BEGIN
  IF TO_CHAR (SYSDATE, 'HH24:MI') NOT BETWEEN '08:00' AND '18:00'
        OR TO_CHAR (SYSDATE, 'DY') IN ('SAT', 'SUN') THEN
	RAISE_APPLICATION_ERROR (-20205,
		'You may only make changes during normal office hours');
  END IF;
END secure_dml;

/

