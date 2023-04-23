use company;
insert into employee(first_name, mid_name_initial, last_name, social_security_number, date_of_birth, address,                     gender,  salary, super_ssn,    dept_number)
values              ('John',     'B',              'Smith',   '123456789',            '1965-01-09',  '731 Fondrenn, Houston, TX', 'M',    '30000', NULL,  NULL),
                    ('Alicia',   'J',              'Zelaya',  '999887777',            '1968-01-19',  '3321 Castle, Spring, TX',   'F',    '25000', NULL,  NULL),
                    ('Franklin', 'T',              'Wong',    '333445555',            '1955-12-08',  '638 Voss, Houston, TX',     'M',    '40000', NULL,  NULL),
                    ('Jennifer', 'S',              'Wallace', '987654321',            '1941-06-20',  '291 Berry, Bellaire, TX',   'F',    '43000', NULL,  NULL),
                    ('Ramesh',   'K',              'Narayan', '666884444',            '1962-09-15',  '975 Fire Oak, Humble, TX',  'M',    '38000', NULL,  NULL),
                    ('Joyce',    'A',              'English', '453453453',            '1972-07-31',  '5631 Rice, Houston, TX',    'F',    '25000', NULL,  NULL),
                    ('Ahmad',    'V',              'Jabbar',  '987987987',            '1969-03-29',  '980 Dallas, Houston, TX',   'M',    '25000', NULL,  NULL),
                    ('James',    'E',              'Borg',    '888665555',            '1937-11-10',  '450 Stone, Houston, TX',    'M',    '55000', NULL,  NULL);
   
select * from employee;

insert into department(dept_name,  dept_number, manager_ssn, manager_start_date)
values                ('Research',       5,     '333445555', '1988-05-22'),
                      ('Administration', 4,     '987654321', '1995-01-01'),
                      ('Headquarters',   1,     '888665555', '1981-05-19');
                      
select * from department;

insert into dept_locations (dept_number, dept_location)
values                     (1,	         'Houston'),
                           (4,	         'Stafford'),
                           (5,	         'Ballaire'),
                           (5,	         'Sugarland'),
                           (5,	         'Houston');
                           
select * from dept_locations;

insert into project (project_number, project_name,      project_location, dept_number)
values              (1,              'ProductX',        'Bellaire',       5),
                    (2,              'ProductY',        'Sugarland',      5),
                    (3,              'ProductZ',        'Houston',        5),
                    (10,             'Computerization', 'Stafford',       4),
                    (20,             'Reorganization',  'Houston',        1),
                    (30,             'Newbenefits',     'Stafford',       4);
                    
select * from project;

insert into works_on (emp_ssn,     project_number, hours)
values               ('123456789', 1,              32.5),
                     ('123456789', 2,              7.5),
                     ('666884444', 3,              40.0),
                     ('453453453', 1,              20.0),
                     ('453453453', 2,              20.0),
                     ('333445555', 2,              10.0),
                     ('333445555', 3,              10.0),
                     ('333445555', 10,             10.0),
                     ('333445555', 20,             10.0),
                     ('999887777', 30,             30.0),
                     ('999887777', 10,             10.0),
                     ('987987987', 10,             35.0),
                     ('987987987', 30,             5.0),
                     ('987654321', 30,             20.0),
                     ('987654321', 20,             15.0),
                     ('888665555', 20,             NULL);

select * from works_on;

insert into dependent (emp_ssn,     dependent_name, gender, date_of_birth, relationship)
values                ('333445555', 'Alice',        'F',    '1986-04-05',  'Daughter'),
                      ('333445555', 'Theodore',     'M',    '1983-10-25',  'Son'),
                      ('333445555', 'Joy',          'F',    '1958-05-03',  'Spouse'),
                      ('987654321', 'Abner',        'M',    '1942-02-28',  'Spouse'),
                      ('123456789', 'Michael',      'M',    '1988-01-04',  'Son'),
                      ('123456789', 'Alice',        'F',    '1988-12-30',  'Daughter'),
                      ('123456789', 'Elizabeth',    'F',    '1967-05-05',  'Spouse');
                      
select * from dependent;
select * from employee;
update employee
set super_ssn = '333445555'
where social_security_number = '123456789';

update employee
set super_ssn = '333445555'
where social_security_number in ('453453453', '888665555');

update employee
set super_ssn = '333445555'
where social_security_number = '888665555';

select * from employee;

update employee
set super_ssn = '333445555'
where social_security_number in ('123456789', '666884444', '453453453');

update employee
set super_ssn = '888665555'
where social_security_number in ('333445555', '987654321');

update employee
set super_ssn = '987654321'
where social_security_number in ('999887777', '987987987');

select * from employee;

update employee
set dept_number = 5
where social_security_number = '123456789';

update employee
set dept_number = 5
where social_security_number in ('123456789', '333445555', '666884444', '453453453');
 
update employee
set dept_number = 4
where social_security_number in ('999887777', '987654321', '987987987');
 
update employee
set dept_number = 1
where social_security_number = '888665555';

select * from employee;                      
                      
                      