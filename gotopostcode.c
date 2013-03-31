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

