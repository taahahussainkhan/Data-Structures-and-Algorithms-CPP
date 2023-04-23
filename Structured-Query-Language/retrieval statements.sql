# Retrieve the birth date and address of the employee(s) whose name is ‘John B. Smith’.
select date_of_birth, address 
from employee
where first_name = 'John'
and mid_name_initial = 'B'
and last_name = 'Smith';

# Retrieve the name and address of all employees who work for the ‘Research’ department

select first_name, mid_name_initial, last_name, address
from employee, department
where dept_name = 'Research' 
and employee.dept_number = department.dept_number;

# For every project located in ‘Stafford’, list the project number, the controlling department number, and the department manager’s last name, address, and birth date

select p.project_number, d.dept_number, e.last_name, e.address, e.date_of_birth
from employee e, department d, project p
where e.dept_number = d.dept_number 
and d.dept_number = p.dept_number
and e.social_security_number = d.manager_ssn
and p.project_location = 'Stafford';

# For each employee, retrieve the employee’s first and last name and the first and last name of his or her immediate supervisor

select e.first_name, e.last_name, s.first_name, s.last_name
from employee e, employee s
where e.super_ssn = s.social_security_number;

# Select all EMPLOYEE Ssns (Q9) and all combinations of EMPLOYEE Ssn and DEPARTMENT Dname (Q10) in the database.

select social_security_number
from employees;

select e.social_security_number, d.dept_number
from employee e, department d;

# Retrieve the salary of every employee (Q11) and all distinct salary  values (Q11A)

select salary 
from employee;

select distinct salary
from employee;

#  Retrieve all employees whose address is in Houston, Texas.

select *
from employee
where address like '%Houston, TX%'
order by mid_name_initial;

# Find all employees who were born during the 1950s.

select *
from employee
where date_of_birth like '__5_______';