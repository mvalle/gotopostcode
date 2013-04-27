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
      case: '0':
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
   case: '0':
   case: '1':
   case: '2':
   case: '8':
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
   case: '4':
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
 default:
   goto invalid;
 case '9':
   //next cur
   switch(cur) 
     {
     case: '7':
     case: '8':
     case: '9':
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
   case: '8':
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
   case: '1':
   case: '9': // Lloyds TSB
     goto valid;
   default: goto invalid;
   }
 default: goto invalid;
 }

Bromley:
// only BR1 - BR8
goto FullDistrict18;

Bristol: // And TV Licencing special PC:
switch(cur) {
 case '1':
   //next cur
   switch(cur) {
   case: '0':
   case: '1':
   case: '3':
   case: '4':
   case: '5':
   case: '6':
     goto valid;
   default:
     goto invalid;
   }
 case '2':
   goto DistrictFull;
 case '3':                                                                                          
   //next cur                                                                                         
   switch(cur) {                                                                                      
   case: '0':                                                                                         
   case: '1':                                                                                         
   case: '2':                                                                                         
   case: '4':                                                                                         
   case: '5':                                                                                         
   case: '6':                                                                                         
   case: '7':                                                                                         
   case: '9':                                                                                         
     goto valid;
   default: 
     goto invalid;                                                                             
   }                                                                                                  
 case '4':                                                                                          
   //next cur                                                                                         
   switch(cur) {                                                                                      
   case: '0':
   case: '1':
   case: '8':
   case: '9':
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
      case: '0':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
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
      case: '0':
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
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }



Cambridge:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Cardiff:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
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
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Chelmsford:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Colchester:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Croydon:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Canterbury:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


Coventry:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }

Crewe:

switch(cur)
  {
  case '1':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '2':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '3':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '4':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '5':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '6':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '7':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '8':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  case '9':
    //next cur
    switch(cur)
      {
      case: '0':
      case: '1':
      case: '2':
      case: '3':
      case: '4':
      case: '5':
      case: '6':
      case: '7':
      case: '8':
      case: '9':
	goto valid;
      default:
	goto invalid;
      }
  default:
    goto invalid;
  }


//D
Dartford:
Dundee:
Derby:
DumfriesAndGalloway:
Durham:
Darlington:
Doncaster:
Dorchester:
Dudley:

//E
LondonEastCeneral:
Edinburgh:
Enfield:
Exeter:
LondonEast:

//F
Falkirk:
Blackpool:

//G
Gloucester:
Guilford:
Gournsey:
Glasgow:
Girobank: //GIR:

//H
Harrow:
Huddersfield:
Harrogate:
HemelHempstead:
Hereford:
OuterHebrides:
Hull:
Halifax:

//I
Ilford:
IsleOfMan:
Ipswich:
Inverness:

//J
Jersey:

//K
Kilmarnock:
Kingston:
Kirkwall:
Kirkcaldy:

//L
Lancaster:
LlandindodWells:
Leicester:
Llandudno:
Lincoln:
Leeds:
Luton:
Liverpool:

//M
Rochester:
MiltonKeynes:
Motherwell:
Manchester:

//N
NewcastkeUponTyne:
Nottingham:
Northampton:
Newport:
Norwich:
LondonNorthWest:
LondonNorth:

//O
Oldham:
Oxford:

//P
Paisley:
Peterborough:
Perth:
Plymouth:
Portsmouth:
Preston:

//R
Reading:
Redhill:
Romford:

//S
Swansea:
LondonSouthEastern:
Stevenage:
Stockport:
Slough:
Sutton:
Swindon:
Southampton:
Salisbury:
Sunderland:
SouthendOnSea:
StokeOnTrent:
SouthWesternAndBattersea:
Shrewsbury:
Sheffield:

//T
Taunton:
Galashiels:
Telford:
Tonbridge:
Torquay:
Truro:
Cleveland:
Twickenham:

//U
Southall:

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

//Z
Lerwick:


DistrictFull:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
  case: '6':
  case: '7':
  case: '8':
  case: '9':
    goto valid;
  default: 
    goto invalid;
  }
District08:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
  case: '6':
  case: '7':
  case: '8':
    goto valid;
  default: 
    goto invalid;
  }
District07:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
  case: '6':
  case: '7':
    goto valid;
  default: 
    goto invalid;
  }
District06:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
  case: '6':
    goto valid;
  default: 
    goto invalid;
  }

District05:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
    goto valid;
  default: 
    goto invalid;
  }
District04:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
  case: '3':
  case: '4':
    goto valid;
  default: 
    goto invalid;
  }

District02:
//next cur
switch(cur) 
  {
  case: '0':
  case: '1':
  case: '2':
    goto valid;
  default: 
    goto invalid;
  }
District14:
//next cur
switch(cur) 
  {
  case: '1':
  case: '2':
  case: '3':
  case: '4':
    goto valid;
  default: 
    goto invalid;
  }
District15:
//next cur
switch(cur) 
  {
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
    goto valid;
  default: 
    goto invalid;
  }
District16:
//next cur
switch(cur) 
  {
  case: '1':
  case: '2':
  case: '3':
  case: '4':
  case: '5':
    goto valid;
  default: 
    goto invalid;
  }
District89:
//next cur
switch(cur) 
  {
  case: '8':
  case: '9':
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
District1:
//next cur
switch(cur)
  {
  case '1':
    goto valid;
  default:
    goto invalid;
  }

FullDistrict18:
//next cur
switch(cur)
  {
   case: '1':
   case: '2':
   case: '3':
   case: '4':
   case: '5':
   case: '6':
   case: '7':
   case: '8':
     goto valid;
   default:
     goto invalid;
  }


// Invald
invalid:
