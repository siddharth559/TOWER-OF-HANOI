# TOWER-OF-HANOI
## A recursive solution for solving the Tower of Hanoi Game
### Here is a sample game in Tower of Hanoi
<img width="739" alt="image" src="https://github.com/siddharth559/TOWER-OF-HANOI/assets/58662708/80f57d12-29c2-48e2-a228-187005f2d5ea">
<H1><style: "font-size:40px;"> Proposed solution: </style:></H1>
<img width="702" alt="image" src="https://github.com/siddharth559/TOWER-OF-HANOI/assets/58662708/c49ec36c-eef6-4154-a02d-91578095bab5">

### Output of Code
---



MODIFICATION :\
<img width="257" alt="image" src="https://github.com/siddharth559/TOWER-OF-HANOI/assets/58662708/b4b3e9bd-5d24-4162-9ddc-21c756e998c7">

TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
7

### Sample output for 7 disks
<img width="278" alt="image" src="https://github.com/siddharth559/TOWER-OF-HANOI/assets/58662708/a936586d-6597-436d-8219-343f2b583cff">


TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 4 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 3 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 5 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 3 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 4 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 6 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 3 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 4 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 3 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 5 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 4 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 3 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 7 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 3 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 4 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 5 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 3 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 4 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 3 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 6 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 4 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 3 FROM 3 to 2\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 5 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 3 FROM 2 to 1\
TAKE 1 FROM 3 to 2\
TAKE 2 FROM 3 to 1\
TAKE 1 FROM 2 to 1\
TAKE 4 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
TAKE 2 FROM 1 to 2\
TAKE 1 FROM 3 to 2\
TAKE 3 FROM 1 to 3\
TAKE 1 FROM 2 to 1\
TAKE 2 FROM 2 to 3\
TAKE 1 FROM 1 to 3\
127


