char cur;
// to upper
if(cur > 90)
  {
    cur = cur - 20;
  }

// First Character
switch(cur)
  {
  case 'A': 
    goto A;
  case 'B': 
    goto B;
  case 'C': 
    goto C;
  case 'D': 
    goto D;
  case 'E': 
    goto E;
  case 'F': 
    goto F;
  case 'G': 
    goto G;
  case 'H': 
    goto H;
  case 'I': 
    goto I;
  case 'J': 
    goto J;
  case 'K': 
    goto K;
  case 'L': 
    goto L;
  case 'M': 
    goto M;
  case 'N': 
    goto N;
  case 'O': 
    goto O;
  case 'P': 
    goto P;
    //  case 'Q': 
    //    goto Q;
  case 'R': 
    goto R;
  case 'S': 
    goto S;
  case 'T': 
    goto T;
  case 'U': 
    goto U;
    //  case 'V':
    //    goto V;
  case 'W': 
    goto W;
    //  case 'X': 
    //    goto X;
  case 'Y': 
    goto Y;
  case 'Z': 
    goto Z;
  default:
    goto invalid;
}

A:
// next cur
if(cur == 'B' || cur == 'b')
  goto Aberdeen;
if(cur = 'L' || cur == 'l')
  goto StAlbans;
goto invalid;

B:
// next cur
switch(cur)
  {
  case 'A':
    goto Bath;
  case 'B':
    goto Blackburn;
  case 'D':
    goto Bradford;
  case 'F':
    goto BritishForces;
  case 'H':
    goto Bournemouth;
  case 'L':
    goto Bolton;
  case 'N':
    goto Brighton;
  case 'R':
    goto Bromley;
  case 'S': 
    goto Bristol; // And TV Licencing special PC
  case 'T':
    goto Belfast;
  case 'X':
    goto Banks;
  default:
    if (cur > 47 && cur < 58)
      goto Bigmingham;
    goto invalid;
  }

C:
//next cur
switch(cur)
  {    
  case 'A':
    goto Carlisle;
  case 'B':
    goto Cambridge;
  case 'F':
    goto Cardiff;
  case 'H':
    goto Chester;
  case 'M':
    goto Chelmsford;
  case 'O':
    goto Colchester;
  case 'R':
    goto Croydon;
  case 'T':
    goto Canterbury;
  case 'V':
    goto Coventry;
  case 'W':
    goto Crewe;
  default:
    goto invalid:
  }
D:
//next cur
switch(cur)
  {
  case 'A':
    goto Dartford;
  case 'D': 
    goto Dundee;
  case 'E': 
    goto Derby;
  case 'G': 
    goto DumfriesAndGalloway;
  case 'H': 
    goto Durham;
  case 'L': 
    goto Darlington;
  case 'N': 
    goto Doncaster;
  case 'T': 
    goto Dorchester;
  case 'Y': 
    goto Dudley;
  default:
    goto invalid;
  }

E:
//next cur
switch(cur)
  {
  case 'C':
    goto LondonEastCeneral;
  case 'H':
    goto Edinburgh;
  case 'N':
    goto Enfield;
  case 'X':
    goto Exeter;
  default:
    if(cur > 47 && cur < 58)
      goto LondonEast;
    goto invalid;
  }

F:
//next cur
if(cur == 'K')
  goto Falkirk;
if(cur == 'Y')
  goto Blackpool;
goto invalid;

G:
//next cur
if(cur == 'L')
  goto Gloucester;
if(cur == 'U')
  goto Guilford;
if(cur == 'Y')
  goto Gournsey;
if(cur > 47 && cur < 58)
  goto Glasgow;
if(cur == 'I')
  goto Girobank; //GIR
goto invalid;

H:
//next cur
switch(cur)
  {
  case 'A':
    goto Harrow;
  case 'D':
    goto Huddersfield;
  case 'G':
    goto Harrogate;
  case 'P':
    goto HemelHempstead;
  case 'R':
    goto Hereford;
  case 'S':
    goto OuterHebrides;
  case 'U':
    goto Hull;
  case 'X':
    goto Halifax;
  default:
    goto invaid;
  }

I:

IG
IM
IP
IV

J:
JE

K:
KA
KT
KW
KY

L:
L 
LA 
LD 
LE 
LL 
LN 
LS 
LU 

M:
M 
ME
MK
ML 

M:
N 
NE
NG 
NN 
NP
NR 
NW 

O:
OL
OX 

P:
PA 
PE
PH
PL
PO
PR
RG
RH
RM

S:
S
SA 
SE 
SG
SK 
SL 
SM
SN 
SO 
SP
SR 
SS 
ST
SW 
SY 

T:
TA 
TD 
TF 
TN 
TQ 
TR 
TS 
TW 

U:
UB 

W:
W 
WA
WC
WD
WF
WN
WR
WS
WV

Y:
YO

Z:
ZE

invalid:
