drop schema company;
create schema company;

use company;

#creating EMPLOYEE table
CREATE TABLE EMPLOYEE (
	first_name					VARCHAR(15)			NOT NULL DEFAULT 'Ali',
	mid_name_initial			CHAR(2),
	last_name					VARCHAR(15)			NOT NULL,
	social_security_number		CHAR(9)				NOT NULL,
	date_of_birth				DATE,
	address						VARCHAR(30),
	gender						CHAR,
	salary						DECIMAL(10,2),
	super_ssn					CHAR(9),
	dept_number					INT,
	PRIMARY KEY (social_security_number)
);
describe employee;

#creating DEPARTMENT table
CREATE TABLE DEPARTMENT (
	dept_name					VARCHAR(15)			NOT NULL,
	dept_number					INT					NOT NULL,
	manager_ssn					CHAR(9)				NOT NULL,
	manager_start_date			DATE,
	PRIMARY KEY (dept_number),
	UNIQUE (dept_name)
);
describe department;

#creating DEPT_LOCATIONS table
CREATE TABLE DEPT_LOCATIONS (
	dept_number					INT					NOT NULL,
	dept_location				VARCHAR(15)			NOT NULL,
	PRIMARY KEY (dept_number, dept_location)
);
describe dept_locations;

#creating PROJECT table
CREATE TABLE PROJECT (
	project_number				INT					NOT NULL,
	project_name				VARCHAR(15)			NOT NULL,
	project_location	 		VARCHAR(15),
	dept_number					INT					NOT NULL,
	PRIMARY KEY (project_number),
	UNIQUE (project_name)
);
describe project;

#creating WORKS_ON table
CREATE TABLE WORKS_ON (
	emp_ssn						CHAR(9)				NOT NULL,
	project_number				INT					NOT NULL,
	hours						Decimal(3,1),
	PRIMARY KEY (emp_ssn, project_number)
);
describe works_on;

#creating DEPENDENT tab;e
CREATE TABLE DEPENDENT (
	emp_ssn						CHAR(9)				NOT NULL,
	dependent_name				VARCHAR(15)			NOT NULL,
	gender						CHAR,			
	date_of_birth				DATE,
	relationship				VARCHAR(8)			NOT NULL,
	PRIMARY KEY (emp_ssn, dependent_name)
);
describe dependent;

#alter table to add FK constraints to employee table
ALTER TABLE employee  
	ADD CONSTRAINT deptNumberFK
    FOREIGN KEY (dept_number)
    REFERENCES department(dept_number)
    ON DELETE CASCADE ON UPDATE CASCADE,
    
    ADD CONSTRAINT empSsnFK
    FOREIGN KEY (super_ssn)
    REFERENCES employee(social_security_number)
    ON DELETE CASCADE ON UPDATE CASCADE
;
describe employee;

#alter table to add FK constraints to department table
ALTER TABLE department  
	ADD CONSTRAINT mgrSsnFK
    FOREIGN KEY (manager_ssn)
    REFERENCES employee(social_security_number)
    ON DELETE CASCADE ON UPDATE CASCADE
;
describe department;

#alter table to add FK constraints to dept_locations table
ALTER TABLE dept_locations  
	ADD CONSTRAINT deptNumberLocationFK
    FOREIGN KEY (dept_number)
    REFERENCES department(dept_number)
    ON DELETE CASCADE ON UPDATE CASCADE
;
describe dept_locations;

#alter table to add FK constraints to project table
ALTER TABLE project  
	ADD CONSTRAINT deptNumberProjectFK
    FOREIGN KEY (dept_number)
    REFERENCES department(dept_number)
    ON DELETE CASCADE ON UPDATE CASCADE
;
describe project;

#alter table to add FK constraints to works_on table
ALTER TABLE works_on  
	ADD CONSTRAINT projNumberFK
    FOREIGN KEY (project_number)
    REFERENCES project(project_number)
    ON DELETE CASCADE ON UPDATE CASCADE,
    
    ADD CONSTRAINT empSsnWorkFK
    FOREIGN KEY (emp_ssn)
    REFERENCES employee(social_security_number)
    ON DELETE CASCADE ON UPDATE CASCADE
;
describe works_on;

