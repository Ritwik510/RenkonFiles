
# **CURRENCY CONVERTER (RENKON)**



# PROJECT MANAGER:

`“A product manager can be described as a role which sits in the intersection between business, technology and user experience. He is the person who identifies the customer need and the larger business objectives that a product or feature will fulfill, articulates what success looks like for a product, and rallies a team to turn that vision into a reality.”`

Project Renkon is all about making a typical currency convertor, namely Renkon, that works for a number of exchange rates. Basically it is a software code that is designed to convert one currency into another which is completely based on current market rates.

Renkon, like a normal currency converter, takes from user an amount of money and the currency whose monetary value the user wants (e.g. ‘Indian Rupee’ ), post that, the user needs to specify the currency in which he/she wants to see the result. Renkon’s role is then to calculate and display the corresponding amount of money.

Currency converters are typically expected to maintain real-time information on bank exchange rates, so that the calculated results are the most accurate ones. But due to technical limitations, Renkon will not maintain a real-time database of currency exchange rates.However, the user can rest assure that the time and date of the latest update of market rates, used by Renkon, will be displayed along with the result. Moreover,  
Renkon can be designed to work for all exchange rates but again due to technical limitations it will be designed to work only for 25 exchange rates. The choice of exchange rates is completely an internal decision.
Also, Renkon will only be designed to work as a basic currency converter and will not give any kind of details or analysis of the trend of a specific exchange rate over a period of time. It is well understood that the inclusion of such shortcomings might cause many people to not use it.

**Performance Characteristics:**

Should offer brisk operation

Should be easy to use

Should be accurate*

Should be absolutely reliable*

Should be effortless to handle

`*when Renkon is updated to latest market rates`

# SOLUTION ARCHITECT:

`“Having a clear vision for the project, and a clear understanding of the client’s business needs, a solutions architect maps out the parts that will constitute the software solution and how they are going to work together. His/her architectures must address the technical challenges faced by technical teams and should provide the right solutions.”`

Renkon, can actually be built in a variety of ways, but we can focus on two ways in which it can be built.

**No. 1**: Renkon can ask the user to type in the amount (call it M) of money that has to be used in basic calculations that follow up. Then, Renkon can ask the user to enter the currency of the amount that has just been entered and then proceed to ask the user, the currency in which M should be converted to (the information has to be typed in). If the exchange rate is available in the database, the user is provided with the result (along with the time and date of the latest update of market rates) and if not, the user is conveyed the same.


**No. 2**: Renkon displays the list of all the exchange rates that are contained in the database and provides for each exchange rate, a corresponding number. The user has to just type in the number and then input the amount.
Then, Renkon asks for the conversion order, after which it automatically converts the amount using the exchange rate that has beed notified to it by the user. The result is then displayed on the screen along with the time and date of the latest update of market rates.

# PROGRAM MANAGER:

`“A program manager articulates a program's strategy and objectives and assesses how it will impact a business. He or she must define and oversee a list of dependent projects needed to reach the program's overall goals. He/she is judged on the triple constraint of time, cost and scope of the project.”`

There are multiple tasks that ought to be done for successful completion of the project. They are as follows:

|TASK|REQUIREMENTS|TIME TAKEN|COMPLETION INDICATOR|
|:---:|:---:|:---:|:---:|
|To build a sound database of exchange rates.|Information regarding different exchange rates from Internet repositories.|Max. 20 minutes|A well-built and completely updated database consisting of required values.|
|To implement the product idea by constructing the software Renkon.  | Knowledge of specific programming languages.|Max. 1 hour | A fully-functional piece of software.|
| To test the resulting software|A well-planned setup in which the software is thoroughly tested.|Max. 2.5 hours.| A fully bug free software that can handle all corner cases.|
|To optimise the software to ensure maximum user satisfaction|Feedback from the Test users (Pre-deployment).Feedback from Test users (Post-deployment). |Pre-deployment- Max 2 hours. Post-deployment- Can take considerable amount of time as the process takes place after the deployment of the software.|Maximum positive ratings.|


# Programmer:

`“Computer programmers write and test code that allows computer applications and programs to function. They may translate designs from software developers and engineers into workable code. They may also update or expand the code of existing programs or test programs for errors, finding and resolving faulty lines of code.”`


**Pseudo code:**
`https://github.com/Ritwik510/RenkonFiles/blob/master/Psuedo.txt`

**C-code:**
`https://github.com/Ritwik510/RenkonFiles/blob/master/SourceRenkon.c`

**PROGRAM SPECIFICATIONS:**

Working range for entered Amount(long double)-> Min: 2.22507e-308 and Max: 1.79769e+308
Working range for Currency numbers(int)-> Min: -2147483648 and Max: 2147483647
Important: 
Inputs other than numbers will terminate the program.
The Program has been protected from entering into any kind of infinite loop.
Entering invalid values as input to the program, more than 15 times, results in self-termination.
Any unusual activity will result in immediate termination of the program so as to prevent an infinite loop/crash.


# Software Tester:

`“Software testers play a critical role in application development. They are quality assurance experts who put applications through the wringer to root out bugs, poor performance and interface issues. To do this, they run all kinds of tests – stress, performance, functional, scalability, user acceptance – at different stages of the software life cycle.”`



**Test Plan:**

[First things first, display Program Specifications in the beginning for the user.]


Validations to make:

Verify ‘void specifications()’
      
      -> Check whether they display program specifications properly to not.

Verify ‘ReadCurrencies()’
     
     -> Check whether they read content from 'Currency names’ file to str array properly or not.

Verify ‘ReadExValues()’
     
     -> Check whether they read content from 'Currency names’ file to str array properly or not.
     
     -> Check whether they return the pointer to val array properly or not.

Verify ‘Calc()’
     
     -> Check whether they calculate both temp1 and temp2 properly or not.
     
     -> Check whether they return temp2 value properly or not.

Verify ‘main()’
     
     -> Check whether the inputs are taken properly or not.
     
     -> Check whether the functions are called properly or not.
     
     -> Check whether the return values are stored properly or not.
     
     -> Check whether the overall program is executed properly or not.



Negative Test Cases: (Handling Corner Cases)

[Give warnings to the user regarding entering non-numeric characters saying that it will result in immediate termination of the program.] 

    1.When entering the amount, if the user enters amount < 0, then display a message saying “Please enter a valid amount” and again give the user the chance to enter the amount.

    2.When entering the first currency number, if the user enters number<= 0 or greater than 15, then display a message saying “Please enter a valid integer between 1 and 15 (including both)” and again give the user the chance to enter the currency number.

    3.When entering the second currency number, if the user enters number<= 0 or greater than 15, then display a message saying “Please enter a valid integer between 1 and 15 (including both)” and again give the user the chance to enter the currency number.

    4.When answering the ‘Convert again?’ question in the end, if the user enters anything other than 1, then terminate the program.



