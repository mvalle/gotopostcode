
int main() {

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
if(cur == 'B')
  goto Aberdeen;
if(cur = 'L')
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
    goto invalid;
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
    goto invalid;
  }

I:
//next cur
if(cur == 'G')
  goto Ilford;
if(cur == 'M')
  goto IsleOfMan;
if(cur == 'P')
  goto Ipswich;
if(cur == 'V')
  goto Inverness;
goto invalid;

J:
//next cur
if(cur == 'E')
  goto Jersey;
goto invalid;

K:
if(cur == 'A')
  goto Kilmarnock;
if(cur == 'T')
  goto Kingston;
if(cur == 'W')
  goto Kirkwall;
if(cur == 'Y')
  goto Kirkcaldy;
goto invalid;

L:
switch(cur)
  {
  case 'A':
   goto Lancaster;
  case 'D':
    goto LlandindodWells;
  case 'E':
    goto Leicester;
  case 'L':
    goto Llandudno;
  case 'N':
    goto Lincoln;
  case 'S':
    goto Leeds;
  case 'U':
    goto Luton;
  default:
    if(cur > 47 && cur < 58)
      goto Liverpool;
    goto invalid;
  }


M:
//next cur
if(cur == 'E')
  goto Rochester;
if(cur == 'K')
  goto MiltonKeynes;
if(cur == 'L')
  goto Motherwell;
if(cur > 47 && cur < 58)
  goto Manchester;
goto invalid;

N:
//next cur
switch(cur)
  {
  case 'E':
    goto NewcastkeUponTyne;
  case 'G':
    goto Nottingham;
  case 'N':
    goto Northampton;
  case 'P':
    goto Newport;
  case 'R':
    goto Norwich;
  case 'W':
    goto LondonNorthWest;
  default:
    if(cur > 47 && cur < 58)
      goto LondonNorth;
    goto invalid;
  }

O:
//next cur
if(cur == 'L')
  goto Oldham;
if(cur == 'X')
  goto Oxford;
goto invalid;

P:
//next cur
switch(cur)
  {
  case 'A':
    goto Paisley;
  case 'E':
    goto Peterborough;
  case 'H':
    goto Perth;
  case 'L':
    goto Plymouth;
  case 'O':
    goto Portsmouth;
  case 'R':
    goto Preston;
  default:
    goto invalid;
  }

R:
//next cur
if(cur == 'G')
  goto Reading;
if(cur == 'H')
  goto Redhill;
if(cur == 'M')
  goto Romford;
goto invalid;

S:
//next cur
switch(cur)
  {
  case 'A':
    goto Swansea;
  case 'E':
    goto LondonSouthEastern;
  case 'G':
    goto Stevenage;
  case 'K':
    goto Stockport;
  case 'L':
    goto Slough;
  case 'M':
    goto Sutton;
  case 'N':
    goto Swindon;
  case 'O':
    goto Southampton;
  case 'P':
    goto Salisbury;
  case 'R':
    goto Sunderland;
  case 'S':
    goto SouthendOnSea;
  case 'T':
    goto StokeOnTrent;
  case 'W':
    goto SouthWesternAndBattersea;
  case 'Y':
    goto Shrewsbury;
  default:
    if(cur > 47 && cur < 58)
      goto Sheffield;
    goto invalid;
  }

T:
switch(cur)
  {
  case 'A':
    goto Taunton;
  case 'D':
    goto Galashiels;
  case 'F':
    goto Telford;
  case 'N':
    goto Tonbridge;
  case 'Q':
    goto Torquay;
  case 'R':
    goto Truro;
  case 'S':
    goto Cleveland;
  case 'W':
    goto Twickenham;
  default:
    goto invalid;
  }

U:
if(cur == 'B')
  goto Southall;
goto invalid;

W:
switch(cur)
  {
  case 'A':
    goto Warrington;
  case 'C':
    goto LondonWestCenteral;
  case 'D':
    goto Watford;
  case 'F':
    goto Wakefield;
  case 'N':
    goto Wigan;
  case 'R':
    goto Worcester;
  case 'S':
    goto Walsall;
  case 'V':
    goto Wolverhampton;
  default:
    if(cur > 47 && cur < 58)
      goto LondonWest;
    goto invalid;
  }
Y:
//next cur
if(cur == 'O')
  goto York;
goto invalid;

Z:
if(cur == 'E')
  goto Lerwick;
goto invalid;

// Local Address

//A
Aberdeen:
//next cur
switch(cur)
{
 case '1':
   goto District06;
 case '2':
   goto District15;
 case '3':
   goto DistrictFull;
 case '4':
   goto District15;
 case '5':
   goto District16;
 case '9':
   //next cur
   if(cur == '9') // Non-geographic for Aberdeen City
     goto valid;
   goto invalid;
 }


StAlbans:
//next cur
switch(cur)
  {
  case '1':
   //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


//B
Bath:
//next cur
switch(cur) {
 case '1':
   goto District06;
 case '2':
   goto District02;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;

 default:
   goto invalid;
 }

Blackburn:
//next cur
switch(cur) {
 case '0':
   goto valid;
 case '1':
   //next cur
   switch(cur) {
   case '0':
   case '1':
   case '2':
   case '8':
     goto valid;
   default:
     goto invalid;
   }
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
   goto valid;
 case '9':
   //next cur
   switch(cur) {
   case '4':
     goto valid;
   default:
     goto invalid;
   }
 default:
   goto invalid;
 }


Bradford:
//next cur
switch(cur) {
 case '1':
   goto DistrictFull;
 case '2':
   goto District04;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
   goto valid;
 case '9':
   //next cur
   switch(cur)
     {
     case '7':
     case '8':
     case '9':
       goto valid;
     default:
       goto invalid;
     }
 default:
   goto invalid;
 }

BritishForces:
goto NotImplemented;

Bournemouth:
//next cur
switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District05;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Bolton:
//next cur
switch(cur)
{
 case '0':
   goto valid;
 case '1':
   goto Discrict1;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
   switch(cur) {
   case '8':
     goto valid;
   default:
     goto invalid;
   }
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
 }


Brighton:
//next cur
switch(cur) {
 case '1':
   goto District08;
 case '2':
   goto District07;
 case '3':
   goto valid;
 case '4':
   goto District14;
 case '5':
   goto District02;
 case '6':
 case '7':
   goto valid;
 case '8':
   goto District8;
 case '9':
   //next cur
   switch(cur) {
   case '1':
   case '9': // Lloyds TSB
     goto valid;
   default: goto invalid;
   }
 default: goto invalid;
 }

Bromley:
// only BR1 - BR8
goto DistrictOnly18;

Bristol: // And TV Licencing special PC:
switch(cur) {
 case '1':
   //next cur
   switch(cur) {
   case '0':
   case '1':
   case '3':
   case '4':
   case '5':
   case '6':
     goto valid;
   default:
     goto invalid;
   }
 case '2':
   goto DistrictFull;
 case '3':
   //next cur
   switch(cur)
     {
     case '0':
     case '1':
     case '2':
     case '4':
     case '5':
     case '6':
     case '7':
     case '9':
       goto valid;
     default:
       goto invalid;
     }
 case '4':
   //next cur
   switch(cur)
     {
     case '0':
     case '1':
     case '8':
     case '9':
       goto valid;
     default:
       goto invalid;
     }
 case '5':
 case '6':
 case '7':
 case '8':
   goto valid;
 case '9':
   goto District89;
 default:
   goto invalid;
 }

Belfast:

switch(cur)
  {
  case '1':
    goto District07;
  case '2':
    goto District9;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Banks:

switch(cur)
  {
  case '1':
    // BX1 1LT Lloyds TSB
  case '2':
    // BX2 1LB Lloyds Bank, BOS
  case '3':
    // BX3 2BB Barclays
  case '5':
    // BX5 5AT HMRC VAT
    goto NotImplemented;

  default:
    goto invalid;
  }



Bigmingham:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
    goto District08;
  case '4':
    //next cur
    switch(cur)
      {
      case '0':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    goto DistrictFull;
  case '7':
    goto DistrictFull;
  case '8':
    //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    goto DistrictFull;
  default:
    goto invalid;
  }

//C
Carlisle:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District29;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District5;
  default:
    goto invalid;
  }

Cambridge:

switch(cur)
  {
  case '1':
    goto District01;
  case '2':
    goto District15;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto invalid;
  default:
    goto invalid;
  }


Cardiff:

switch(cur)
  {
    // no CF1, but CF10, CF11, CF14, CF15
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '4':
      case '5':
	goto valid;
      default:
	goto invalid;
      }
  case '2': // No CF2, but CF22, CF23
    goto DistrictOnly23;
  case '3':
    goto DistrictFull;
  case '4':
    goto DistrictOnly08;
  case '5':
    goto valid;
  case '6':
    goto DistrictOnly14;
  case '7':
    goto DistrictOnly12;
  case '8':
    goto DistrictOnly13;
  case '9':
    // no CF9, but CF91 CF95, CF99
    //next cur
    switch(cur)
      {
      case '1':
      case '5':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Chester:

switch(cur)
  {
  case '1':
    goto valid;
  case '2':
    goto District59;
  case '3':
    goto District04;
  case '4':
    goto District19;
  case '5':
    goto valid;
  case '6':
    goto District06;
  case '7':
    goto District0;
  case '8':
    goto District8;
  case '9':
    goto DistrictOnly8;
  default:
    goto invalid;
  }


Chelmsford:

switch(cur)
  {
  case '1':
    goto District19;
  case '2':
    goto District04;
  case '3':
  case '4':
  case '5':
  case '6':
    goto valid;
  case '7':
    goto District7;
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '2':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Colchester:
//next cur
switch(cur)
  {
  case '1':
    goto District06;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Croydon:
goto DistrictOnlyFull;
    switch(cur)
      {
      case '0':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }

Canterbury:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District01;
  case '3':
  case '4':
    goto valid;
  case '5':
    goto District0;
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Coventry:
//next cur
switch(cur)
  {
  case '1':
    goto District03;
  case '2':
    goto District13;
  case '3':
    goto District17;
  case '4':
    goto District7;
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Crewe:

switch(cur)
  {
  case '1':
    goto District02;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District8;
  default:
    goto invalid;
  }


//D
Dartford:

switch(cur)
  {
  case '1':
    goto District08;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Dundee:

switch(cur)
  {
  case '1':
    goto District01;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Derby:

switch(cur)
  {
  case '1':
    goto District15;
  case '2':
    goto DistrictOnly14;
  case '3':
    goto valid;
  case '4':
    goto District5;
  case '5':
    goto District56;
  case '6':
    goto District5;
  case '7':
    goto District25;
  case '9':
    goto DistrictOnly9;
  default:
    goto invalid;
  }

DumfriesAndGalloway:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '6':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Durham:

switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District79;
  default:
    goto invalid;
  }

Darlington:

switch(cur)
  {
  case '1':
    goto District07;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District8;
  default:
    goto invalid;
  }

Doncaster:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    goto District02;
  case '3':
    goto District19;
  case '4':
    goto District01;
  case '5':
    goto District5;
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Dorchester:

switch(cur)
  {
  case '1':
    goto District01;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Dudley:

switch(cur)
  {
  case '1':
    goto District14;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

//E
LondonEastCeneral:
// TODO ECx
switch(cur)
  {
  case '1':
    goto EC1;
  case '2':
    goto EC2;
  case '3':
    goto EC3;
  case '4':
    goto EC4;
  case '5':
    goto District0;
  default:
    goto invalid;
  }


Edinburgh:

switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
    goto DistrictFull;
  case '5':
    goto District15;
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Enfield:

switch(cur)
  {
  case '1':
    goto District01;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
    goto valid;
  case '7':
    goto District7;
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Exeter:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District04;
  case '3':
    goto District19;
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


LondonEast:

switch(cur)
  {
  case '1':
    goto E1;
  case '2':
    goto District0;
  case '3':
  case '4':
  case '5':
  case '6':
    goto valid;
  case '7':
    goto District7;
  case '8':
    goto valid;
  case '9':
    goto District8;
  default:
    goto invalid;
  }


//F
Falkirk:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District01;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Blackpool:
goto District08;

//G
Gloucester:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District0;
  case '3':
  case '4':
    goto valid;
  case '5':
    goto District06;
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Guilford:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    goto DistrictFull;
  case '3':
    goto District05;
  case '4':
    goto District47;
  case '5':
    goto District12;
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District5;
  default:
    goto invalid;
  }


Gournsey:

switch(cur)
  {
  case '1':
    goto District0;
  case '2':
  case '3':
  case '4':
  case '5':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Glasgow:

switch(cur)
  {
  case '1':
    goto District15;
  case '2':
    goto District03;
  case '3':
    goto District14;
  case '4':
    goto District06;
  case '5':
    //next cur
    switch(cur)
      {
      case '1':
      case '2':
      case '3':
      case '8':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
  case '7':
    goto DistrictOnlyFull;
  case '8':
    goto DistrictOnly14;
  case '9':
    goto District0;
  default:
    goto invalid;
  }


Girobank: //GIR:
// Non-Geographic Girobank post code
// Only valid GIR postcode is GIR 0AA;
//next cur
if(cur == '0')
  {
    //next cur
    if(cur == 'A')
      {
	if(cur == 'A')
	  {
	    goto valid;
	  }
      }
  }
goto invalid;

//H
Harrow:
goto DistrictFull;

Huddersfield:
goto District19;

Harrogate:
goto District15;

HemelHempstead:
//next cur
switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '7':
	goto valid;
      default:
	// 2 is valid
	goto invalid;
      }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Hereford:
goto District19;

OuterHebrides:
goto District19;
Hull:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District0;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Halifax:
goto District17;

//I
Ilford:
// next  cur
switch(cur)
  {
  case '1':
    goto District01;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

IsleOfMan:
// next  cur
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
    goto valid;
  case '8':
    goto District67;
  case '9':
    goto District99;
  default:
    goto invalid;
  }

Ipswich:
switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
	goto valid;
      default:
	// 3 is valid
	goto invalid;
      }
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '8':
	goto valid;
      default:
	// 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }


Inverness:
// next curr
switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District08;
  case '3':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '6':
	goto valid;
      default:
	// 3 is valid
	goto invalid;
      }
  case '4':
    goto DistrictFull;
  case '5':
    goto District15;
    // 5 is valid
  case '6':
    //next cur
    switch(cur)
      {
      case '3':
	goto valid;
      default:
	// 6 is valid
	goto invalid;
      }
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


//J
Jersey:
goto District15;

//K
Kilmarnock:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
    goto District0;
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Kingston:
    //next cur
switch(cur)
  {
  case '1':
    goto DistrickFull;
  case '2':
    goto District24;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Kirkwall:
// next cur
switch(cur)
  {
  case '1':
    goto District07;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Kirkcaldy:

switch(cur)
{
 case '1':
   goto District06;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
   goto valid;
 case '9':
   goto District9;
 default:
   goto invalid;
}

//L
Lancaster:

switch(cur)
  {
  case '1':
    goto DistructFull;
  case '2':
    goto District03;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

LlandindodWells:
goto District18;

Leicester:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District1;
  case '3':
    goto valid;
  case '4':
    goto District1;
  case '5':
    goto District5;
  case '6':
    //next cur
    switch(cur)
      {
      case '5':
      case '7':
	goto valid;
      default:
	// 6 is valid
	goto invalid;
      }
  case '7':
    goto valid;
  case '8':
    goto District7;
  case '9':
    goto District45;
  default:
    goto invalid;
  }


Llandudno:

switch(cur)
  {
  case '1':
    goto DistrictOnlyFull;
  case '2':
    goto DistrictOnlyFull;
  case '3':
    goto DistrictOnlyFull;
  case '4':
    goto DistrictOnlyFull;
  case '5':
    goto DistrictOnly19;
  case '6':
    goto DistrictOnlyFull;
  case '7':
    goto DistrictOnly08;
  default:
    goto invalid;
  }


Lincoln:

switch(cur)
  {
  case '1':
    goto District03;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Leeds:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District8;
  default:
    goto invalid;
  }

Luton:
goto District07;

Liverpool:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
    goto DistrictFull;
  case '4':
    goto District0;
  case '5':
    goto valid;
  case '6':
    goto District79;
  case '7':
    goto District05;
  case '8':
    goto District0;
  case '9':
    goto valid;
  default:
    goto invalid;
  }



//M
Rochester:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District0;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

MiltonKeynes:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
  case '3':
    goto valid;
  case '4':
    //next cur
    goto District06;
  case '5':
  case '6':
    goto valid;
  case '7':
    goto District7;
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Motherwell:

switch(cur)
  {
  case '1':
    goto District02;
  case '2':
  case '3':
  case '4':                                                                     
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Manchester:

switch(cur)
  {
  case '1':
    goto District19;
  case '2':
    goto DistrictFull;
  case '3':
    //next cur 
    switch(cur)
      {        
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '8':
	goto valid;
      default:     
	// 3 is valid
	goto invalid;
      }
  case '4':                                                                     
    goto District06;
  case '5':
    goto District0;
  case '6':
    goto District0;
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '0':
      case '9':
	goto valid;
      default:
	// 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }


//N
NewcastkeUponTyne:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':
    goto DistrictFull;
  case '4':
    goto DistrictFull;
  case '5':
    goto valid;
  case '6':
    goto DistrictFull;
  case '7':
    goto District01;
  case '8':
    //next cur
    switch(cur)
      {
      case '2':
      case '3':
      case '5':
      case '8':
	goto valid;
      default:
	// 8 is valid
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case '2':
      case '8':
      case '9':
	goto valid;
      default:
	// 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }

Nottingham:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto District05;
  case '3':
    goto District14;
  case '4':
  case '5':
  case '6':
    goto valid;
  case '7':
    goto District0;
  case '8':
    goto District0;
  case '9':
    goto District0;
  default:
    goto invalid;
  }

Northampton:

switch(cur)
  {
  case '1':
    goto District08;
  case '2':
    goto District9;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    goto District9;
  default:
    goto invalid;
  }

Newport:
switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '5':
      case '6':
      case '8':
      case '9':
	goto valid;
      default:
	// 1 is not valid
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
	goto valid;
      default:
	// 2 is not valid
	goto invalid;
      }
  case '4':        
    goto District4;
  case '7':
  case '8':
    goto valid;
  default:
    goto invalid;
  }

Norwich:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    goto DistrictFull;
  case '3':                                                                       
    //next cur
    switch(cur) 
      {         
      case '0':
      case '1':    
      case '2':       
      case '3':
      case '4':              
      case '5':                                                                  
	goto valid;
      default:
	// 3 is valid
	goto invalid; 
      } 
                                                                          
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '9':
	goto valid;
      default:
	// 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }


LondonNorthWest:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case 'W':
      case 'w':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '6':
	goto valid;
      default:
	//2 is valid
        goto invalid;
      }
  case '3':                                                                       
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

LondonNorth:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'C':
      case 'c':
      case 'P':
      case 'p':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
	goto valid;
      default:                                                                     
	// 
	goto invalid;                                                                
      }                                                                             
  case '3':                                                                       
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }




//O
Oldham:



switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
	goto valid;
      default:
	// 1 is valid
	goto invalid;
      }
  case '2':
  case '3':                                                                       
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '5':
	goto valid;
      default:
	// 9 is valdi
	goto invalid;
      }
  default:
    goto invalid;
  }




Oxford:


switch(cur)
  {
  case '1':
    goto District08;
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:     
	// 2 is valid
	goto invalid;
      }                                                                         

  case '3':  
    //next cur
    switch(cur)            
      {                    
      case '3':           
      case '9':           
	goto valid;        
      default:             
	//3 is valid
	goto invalid;      
      }                    
  case '4':
    //next cur
    switch(cur)
      {
      case '4':
      case '9':
	goto valid;
      default:
	// 4 is valid
	goto invalid;
      }
  case '5':
  case '7':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


//P
Paisley:
switch(cur)
 {
case '1':
case '2':
  goto DistrictFull;
case '3':
  goto District08;
case '4':
  goto District19;
case '5':
  goto valid;
case '6':
  goto DistrictFull;
case '7':
  goto District08;
case '8':
switch(cur)
 {
   case '0':
     goto valid;
 default: // 8 is valid
     goto invalid;
  }
 case '9':
   goto valid;
 default:
   goto invalid;
}

Peterborough:
switch(cur)
 {
case '1':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '9':
     goto valid;
   default:
     goto invalid;
  }
case '2':
  goto DistrictFull;
case '3':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
   case '8':
     goto valid;
   default:
     goto invalid;
  }
case '4':
case '5':
case '6':
case '7':
case '8':
  goto valid;
case '9':
  goto District9;
 default:
   goto invalid;
}


Perth:
switch(cur)
 {
case '1':
  goto DistrictFull;
case '2':
//next cur
switch(cur)
 {
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
   goto valid;
 default:
   goto invalid;
 }
case '3':
  goto DistrictFull;
case '4':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '9':
     goto valid;
 default:
   goto invalid;
  }
case '5':
//next cur
switch(cur)
 {
 case '0':
   goto valid;
 default: // 5 is valid
   goto invalid;
  }
case '6':
case '7':
case '8':
case '9':
  goto valid;
 default:
   goto invalid;
}


Plymouth:
switch(cur)
 {
case '1':
  goto DistrictFull;
case '2':
  goto DistrictFull;
case '3':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
     goto valid;
 default: // 3 is valid
   goto invalid;
  }
case '4':
case '5':
case '6':
case '7':
case '8':
  goto valid;
case '9':
//next cur
switch(cur)
 {
   case '5':
     goto valid;
 default: // 9 is valid
   goto invalid;
  }
  default:
    goto invalid;
}


Portsmouth:
switch(cur)
 {
case '1':
  goto DistrictFull;
case '2':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
     goto valid;
 default: //2 is valid
   goto invalid;
  }
case '3':
  goto DistrictFull;
case '4':
//next cur
switch(cur)
 {
   case '0':
   case '1':
     goto valid;
 default: // 4 is valid
     goto invalid;
  }
case '5':
case '6':
case '7':
case '8':
case '9':
  goto valid;
 default:
   goto invalid;
}

Preston:

switch(cur)
 {
 case '0':
   goto valid;
case '1':
//next cur
switch(cur)
 {
   case '1':
     goto valid;
 default:
   goto invalid;
  }
case '2':
//next cur
switch(cur)
 {
   case '5':
   case '6':
     goto valid;
 default: //2 is valid
   goto invalid;
  }
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
    goto invalid;
}

//R
Reading:
switch(cur)
 {
case '1':
//next cur
switch(cur)
 {
 case '0':
 case '2':
 case '4':
 case '7':
 case '8':
 case '9':
   goto valid;
 default: // 1 is valid
   goto invalid;
  }
case '2':
  goto DistrictFull;
case '3':
//next cur
switch(cur)
 {
   case '0':
   case '1':
     goto valid;
 default: // 3 is invalid
     goto invalid;
  }
case '4':
//next cur
switch(cur)
 {
   case '0':
   case '1':
   case '2':
   case '5':
     goto valid; 
 default: // 4 is valid
     goto invalid;
  }
case '5':
case '6':
case '7':
case '8':
case '9':
  goto valid;
 default:
   goto invalid;
}


Redhill:
switch(cur)
 {
case '1':
//next cur
switch(cur)
 {
 case '1': // non-geographic
 case '4':
     goto valid;
 default: // 1 is valid
   goto invalid;
  }
case '2':
//next cur
switch(cur)
 {
   case '0':
     goto valid;
 default: // 2 is valid
   goto invalid;
 }
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
  goto valid;
 default:
   goto invalid;
}


Romford:

switch(cur)
 {
case '1':
//next cur
  goto DistrictFull;
case '2':
//next cur
switch(cur)
 {
   case '0':
     goto valid;
 default: // 2 is valid
     goto invalid;
  }
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
   goto valid;
  default:
    goto invalid;
}

//S
Swansea:
switch(cur)
 {
case '1':
  goto DistrictFull;
case '2':
//next cur
switch(cur)
 {
 case '0':
   goto valid;
 default: // 2 is valid
   goto invalid;
  }
case '3':
  goto District19;
case '4':
  goto District08;
case '5':
  goto valid;
case '6':
  goto District19;
case '7':
  goto District03;
case '8':
//next cur
switch(cur)
 {
   case '0':
   goto valid;
 default:// 8 is valid
   goto invalid;
  }
case '9':
//next cur
switch(cur)
 {
   case '9':
   goto valid;
 default: // 9 is valid
   goto invalid;
  }
  default:
    goto invalid;
}



LondonSouthEastern:
switch(cur)
 {
 case '1':
   goto SE1;
 case '2':
   goto District08;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
}


Stevenage:
switch(cur)
 {
 case '1':
   goto DistrictFull;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
 }



Stockport:
switch(cur)
 {
case '1':
//next cur
  goto District07;
case '2':
//next cur
switch(cur)
 {
 case '2':
 case '3':
   goto valid;
 default: // 2 is valid
   goto invalid;
  }
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
}


Slough:
goto DistrictFull;
//95

Sutton:
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  default:
    goto invalid;
  }

Swindon:
switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
	goto valid;
      default: // 1 is valid
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '5':
      case '6':
	goto valid;
      default: // 2 is valid
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case '8':
	goto valid;
      default: // 3 is valid
	goto invalid;
      }
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '9':
	goto valid;
      default: // 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }

Southampton:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default: // 1 is invalid
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
	goto valid;
      default:// 2 is invalid
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
	goto valid;
      default: // 3 is invalid
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '5':
	goto valid;
      default: // 4 is invalid
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
	goto valid;
      default: // 5 is invalid
	goto invalid;
      }
  default:
    goto invalid;
  }

Salisbury:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
	goto valid;
      default: // 1 is valid
	goto invalid;
      }
  case '2':
  case '3':
      case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Sunderland:
goto FullDisrict;

SouthendOnSea:

switch(cur)
  {
  case '0':
    goto valid;
  case '1':
    //next cur
    switch(cur)
      {
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
	goto valid;
      default: // 1 is valid
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '2':
	goto valid;
      default: // 2 is validNN
	goto invalid;
      }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '9':
	goto valid;
      default: // 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }


StokeOnTrent:

switch(cur)
  {
  case '1':
    goto FullDistrict;
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
	goto valid;
      default: // 2 is valid
	goto invalid;
      }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
	goto valid;
  default:
    goto invalid;
  }

SouthWesternAndBattersea:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      case '1':
	goto SW;
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      default: // 2 is valid
	goto invalid;
      }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
	goto valid;
  case '9':
    //next cur
    switch(cur)
      {
      case '5':
	goto valid;
      default: // 9 is valis
	goto invalid;
      }
  default:
    goto invalid;
  }

Shrewsbury:

switch(cur)
  {
  case '1':
    goto DistrictFull;
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
	goto valid;
      default: // 2 is valid
	goto invalid;
      }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
	goto valid;
  default:
    goto invalid;
  }

Sheffield:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '7':
      case '8':
      case '9':
	goto valid;
      default: // 1 is valid
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '5':
      case '6':
	goto valid;
      default: // 2 is valid
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '5':
      case '6':
	goto valid;
      default: // 3 is valid
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '9':
	goto valid;
      default: // 4 is valid
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
	goto valid;
      default: // 6 is valid
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
	goto valid;
      default: // 7 is valid
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
	goto valid;
      default: // 8 is valid
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case '6':
      case '7':
      case '8':
	goto valid;
      default: // 9 is valid
	goto invalid;
      }
  default:
    goto invalid;
  }

//T
Taunton:
switch(cur)
  {
  case '1':
    //next cur
    goto DistrictFull;
  case '2':
    //next cur
    goto District04;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
}


Galashiels:

switch(cur)
  {
  case '1':
    //next cur
    goto District05;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
}


Telford:

switch(cur)
  {
  case '1':
    //next cur
    goto District03;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Tonbridge:

switch(cur)
 {
 case '1':
   //next cur
   goto DistrictFull;
 case '2':
   //next cur
  goto DistrictFull;
 case '3':
   //next cur
   goto DistrictFull;
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
  }

Torquay:

switch(cur)
  {
  case '1':
    //next cur
    goto District04;
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

Truro:

switch(cur)
  {
  case '1':
    //next cur
    goto DistrictFull;
  case '2':
    //next cur
    goto District07;
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }


Cleveland:

switch(cur)
 {
 case '1':
   //next cur
   goto DistrictFull;
 case '2':
   //next cur
   goto DistrictFull;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   goto valid;
 default:
   goto invalid;
 }

Twickenham:

switch(cur)
  {
  case '1':
    //next cur
    goto DistrictFull;
  case '2':
    //next cur
    switch(cur)
      {
      case '0':
	goto valid;
      default: // 2 is valid
	goto invalid;
  }
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

//U
Southall:
switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case '0':
      case '1':
      case '8':
	goto valid;
      default: // 1 is valid
	goto invalid;
      }
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
   case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }

//W
Warrington:
LondonWestCenteral:
Watford:
Wakefield:
Wigan:
Worcester:
Walsall:
Wolverhampton:
LondonWest:

//Y
York:
switch(cur)
  {
  case '1':
    //next cur
    goto DistrictFull;
  case '2':
    //next cur
    goto District16;
  case '3':
    //next cur
    goto District02;
  case '4':
    //next cur
    goto District13;
  case '5':
    //next cur
    goto District1;
  case '6':
    //next cur
    goto District02;
  case '7':
  case '8':
    goto valid;
  case '9':
    //next cur
    goto District01;
  default:
    goto invalid;
  }


//Z
Lerwick:
goto District13;


DistrictFull:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }
District08:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  default:
    goto invalid;
  }
District07:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
    goto valid;
  default:
    goto invalid;
  }
District06:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
    goto valid;
  default:
    goto invalid;
  }

District05:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
    goto valid;
  default:
    goto invalid;
  }
District04:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
    goto valid;
  default:
    goto invalid;
  }

District02:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
    goto valid;
  default:
    goto invalid;
  }
District01:
//next cur
switch(cur)
  {
  case '0':
  case '1':
    goto valid;
  default:
    goto invalid;
  }
District14:
//next cur
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
    goto valid;
  default:
    goto invalid;
  }
District15:
//next cur
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
    goto valid;
  default:
    goto invalid;
  }
District16:
//next cur
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
    goto valid;
  default:
    goto invalid;
  }
DistrictOnly23:
//next cur
switch(cur)
  {
  case '2':
  case '3':
    goto valid;
  default:
    goto invalid;
  }
District89:
//next cur
switch(cur)
  {
  case '8':
  case '9':
    goto valid;
  default:
    goto invalid;
  }
District9:
//next cur
switch(cur)
  {
  case '9':
    goto valid;
  default:
    goto invalid;
  }
District8:
//next cur
switch(cur)
  {
  case '8':
    goto valid;
  default:
    goto invalid;
  }
District5:
//next cur
switch(cur)
  {
  case '5':
    goto valid;
  default:
    goto invalid;
  }
District1:
//next cur
switch(cur)
  {
  case '1':
    goto valid;
  default:
    goto invalid;
  }

DistrictOnly08:
//next cur
switch(cur)
  {
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  default:
    goto invalid;
  }
DistrictOnly18:
//next cur
switch(cur)
  {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
    goto valid;
  default:
    goto invalid;
  }


// Invald
 invalid:
 return 1;
 valid:
 return 0;
 
}
