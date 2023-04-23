# delete from works_on where SSN = '999887777' and project_number = 10

select * from works_on;
describe works_on;

delete from works_on
where emp_ssn = '999887777'
and project_number = 10;

select * from works_on;

# delete the employee with SSN = '999887777'

delete from employee
where social_security_number = '999887777';

select * from employee;
select * from works_on;

# delete employee with SSN = '333445555'

delete from employee
where social_security_number = '333445555';

select * from employee;
select * from dept_locations;
select * from department;
select * from dependent;

update department 
set dept_number = 6
where dept_name = 'Research';
