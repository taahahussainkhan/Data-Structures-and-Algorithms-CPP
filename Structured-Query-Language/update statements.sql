# Update the salary of the EMPLOYEE tuple with Ssn = ‘999887777’ to 28000

update employee
set salary = 28000
where social_security_number = '999887777';

select * from employee
where social_security_number = '999887777';

# Update the department_number of the EMPLOYEE tuple with Ssn = ‘999887777’ to 1.

update employee
set dept_number = 1
where social_security_number = '999887777';

select * from employee
where social_security_number = '999887777';

# Update the department_number of the EMPLOYEE tuple with Ssn = ‘999887777’ to 7.

update employee
set dept_number = 7
where social_security_number = '999887777';

select * from employee
where social_security_number = '999887777';

# Update the SSN of the EMPLOYEE tuple with Ssn = ‘999887777’ to ‘987654321’.

update employee
set social_security_number = '987654321'
where social_security_number = '999887777';