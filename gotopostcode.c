#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {return 1;}
  
  char cur;
  int c = 0;
  // to upper
  char postcode[10];

  // postcode length
  int p = 0;
  
  for(int i = 0; argv[1][i] != '\0' || i > 10; i++) {
    cur = argv[1][i];
    if(cur >= 97 && cur <= 122)
      {
	postcode[p++] = cur - 32;
      }
    else if (cur >= 65 && cur <= 90)
      {
	postcode[p++] = cur;
      }
    else if (cur >= 48 && cur <= 57)
      {
	postcode[p++] = cur;
      }
  }
  
  cur = postcode[c];
  
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
    case 'R':
      goto R;
    case 'S':
      goto S;
    case 'T':
      goto T;
    case 'U':
      goto U;
    case 'W':
      goto W;
    case 'Y':
      goto Y;
    case 'Z':
      goto Z;
    default:
      goto invalid;
    }
  
 A:
  cur = postcode[++c];
  if(cur == 'B')
    goto Aberdeen;
  if(cur = 'L')
    goto StAlbans;
  goto invalid;
  
 B:
  cur = postcode[++c];
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
      goto Birmingham;
    }
  
 C:
  cur = postcode[++c];
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
  cur = postcode[++c];
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
  cur = postcode[++c];
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
  cur = postcode[++c];
  if(cur == 'K')
    goto Falkirk;
  if(cur == 'Y')
    goto Blackpool;
  goto invalid;
  
 G:
  cur = postcode[++c];
  switch(cur)
    {
    case 'L':
      goto Gloucester;
    case 'U':
      goto Guilford;
    case 'Y':
      goto Gournsey;
    case 'I':
      goto Girobank;
    default:
      goto Glasgow;
    }
 H:
  cur = postcode[++c];
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
  cur = postcode[++c];
  switch(cur)
    {
    case 'G':
      goto Ilford;
    case 'M':
      goto IsleOfMan;
    case 'P':
      goto Ipswich;
    case 'V':
      goto Inverness;
    default:
      goto invalid;
    }

 J:
  cur = postcode[++c];
  if(cur == 'E')
    goto Jersey;
  goto invalid;
  
 K:
  cur = postcode[++c];
  switch(cur)
    {
    case 'A':
      goto Kilmarnock;
    case 'T':
      goto Kingston;
    case 'W':
      goto Kirkwall;
    case 'Y':
      goto Kirkcaldy;
    default:
      goto invalid;
    }
  
 L:
  cur = postcode[++c];
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
      goto Liverpool;
    }
  
  
 M:
  cur = postcode[++c];
  switch (cur)
    {
    case 'E':
      goto Rochester;
    case 'K':
      goto MiltonKeynes;
    case 'L':
      goto Motherwell;
    default: 
      goto Manchester;
    }
  
 N:
  cur = postcode[++c];
  switch(cur)
    {
    case 'E':
      goto NewcastleUponTyne;
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
  cur = postcode[++c];
  if(cur == 'L')
    goto Oldham;
  if(cur == 'X')
    goto Oxford;
  goto invalid;
  
 P:
  cur = postcode[++c];
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
  cur = postcode[++c];
  if(cur == 'G')
    goto Reading;
  if(cur == 'H')
    goto Redhill;
  if(cur == 'M')
    goto Romford;
  goto invalid;
  
 S:
  cur = postcode[++c];
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
      goto Sheffield;
    }
  
 T:
  cur = postcode[++c];
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
  cur = postcode[++c];
  if(cur == 'B')
    goto Southall;
  goto invalid;
  
 W:
  cur = postcode[++c];
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
      goto LondonWest;
    }
 Y:
  cur = postcode[++c];
  if(cur == 'O')
    goto York;
  goto invalid;
  
 Z:
  cur = postcode[++c];
  if(cur == 'E')
    goto Lerwick;
  goto invalid;
  
  // Local Address

  //A
 Aberdeen:
  cur = postcode[++c];
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
      goto District9;
    default:
      goto invalid;
    }
  
  
 StAlbans:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District0;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }
  
  
  //B
 Bath:
  cur = postcode[++c];
  switch(cur) 
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
      if (p == 6)
	goto inward;
      goto District02;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Blackburn:
  cur = postcode[++c];
  switch(cur) 
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6) 
	goto inward;
      cur = postcode[++c];
      switch(cur) {
      case '0':
      case '1':
      case '2':
      case '8':
	goto inward;
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
      goto inward;
    case '9':
      if(p == 6)
	goto inward;
      goto District4;
    default:
      goto invalid;
    }
  
 Bradford:
  cur = postcode[++c];
  switch(cur) 
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District04;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District79;
    default:
      goto invalid;
    }

 BritishForces:
  goto NotImplemented;

 Bournemouth:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District05;
    case '3':
      if (p == 6)
	goto inward;
      goto District1;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Bolton:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6)
	goto inward;
      goto District1;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      if (p == 6)
	goto inward;
      goto District8;
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Brighton:
  cur = postcode[++c];
  switch(cur) 
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District08;
    case '2':
      if (p == 6)
	goto inward;
      goto District07;
    case '3':
      goto inward;
    case '4':
      if (p == 6)
	goto inward;
      goto District15;
    case '5':
      if (p == 6)
	goto inward;
      goto District02;
    case '6':
    case '7':
      goto inward;
    case '8':
      if (p == 6)
	goto inward;
      goto District8;
    case '9':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '1':
	case '9': 
	  goto inward;
	default: 
	  goto invalid;
	}
    default: 
      goto invalid;
    }

 Bromley:
  goto District18;

 Bristol: // And TV Licencing special PC:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur) 
	{
	case '0':
	case '1':
	case '3':
	case '4':
	case '5':
	case '6':
	  goto inward;
	default:
	  goto invalid;
    }
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
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
	goto inward;
      default:
	goto invalid;
      }
    case '4':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '8':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District89;
    default:
      goto invalid;
    }

 Belfast:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
    goto DistrictFull;
    case '2':
    case '3':
    case '4':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '5':
      if (p == 6)
	goto inward;
      goto District18;
    case '6':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '7':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '8':
      if (p == 6)
	goto inward;
      goto District02;
    case '9':
      if (p == 6)
	goto inward;
      goto District24;
    default:
      goto invalid;
    }

 Banks:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      // BX1 1LT Lloyds TSB
      if (postcode[++c] == '1')
      if (postcode[++c] == 'L')
      if (postcode[++c] == 'T')
	    goto valid;
      goto invalid;
    case '2':
      // BX2 1LB Lloyds Bank, BOS
      if (postcode[++c] == '1')
      if (postcode[++c] == 'L')
      if (postcode[++c] == 'B')
	    goto valid;
      goto invalid;
    case '3':
      // BX3 2BB Barclays
      if (postcode[++c] == '2')
      if (postcode[++c] == 'B')
      if (postcode[++c] == 'B')
	    goto valid;
      goto invalid;
    case '5':
      // BX5 5AT HMRC VAT
      if (postcode[++c] == '5')
      if (postcode[++c] == 'A')
      if (postcode[++c] == 'T')
	    goto valid;
      goto invalid;
    default:
      goto invalid;
    }

 Birmingham:
  // Single character district
  switch(cur)
    {
    case '1':
      if ( p == 5)
	goto inward;
      goto DistrictFull;
    case '2':
      if ( p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '3':
      if ( p == 5)
	goto inward;
      goto District08;
    case '4':
      if ( p == 5)
	goto inward;
      cur = postcode[++c];
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
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
      if ( p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	  goto inward;
	default:
	  goto invalid;
	}
    case '6':
    case '7':
      if ( p == 5)
	goto inward;
      goto DistrictFull;
    case '8':
      if ( p == 5)
	goto inward;
      goto District0;
    case '9':
      if ( p == 5)
	goto inward;
      goto DistrictFull;
    default:
      goto invalid;
    }

  //C
 Carlisle:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District08;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '5':
	case '9':
	  goto inward;
	default:
	  goto inward;
	}
    default:
      goto invalid;
    }

 Cambridge:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
      if (p == 6)
	goto inward;
      goto District15;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Cardiff:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '4':
	case '5':
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      goto District34;
    case '3':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '4':
      goto District08;
    case '5':
      goto inward;
    case '6':
      goto District14;
    case '7':
      goto District12;
    case '8':
      goto District13;
    case '9':
      cur = postcode[++c];
      switch(cur)
	{
	case '1':
	case '5':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    default:
      goto invalid;
    }

 Chester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto inward;
    case '2':
      if (p == 6)
	goto inward;
      goto District59;
    case '3':
      if (p == 6)
	goto inward;
      goto District04;
    case '4':
      if (p == 6)
	goto inward;
      goto District19;
    case '5':
      goto inward;
    case '6':
      if (p == 6)
	goto inward;
      goto District06;
    case '7':
      if (p == 6)
	goto inward;
      goto District0;
    case '8':
      if (p == 6)
	goto inward;
      goto District8;
    case '9':
      goto District9;
    default:
      goto invalid;
    }


 Chelmsford:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6)
	goto inward;
      goto District19;
    case '2':
      if (p == 6)
	goto inward;
      goto District04;
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District7;
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '2':
	case '8':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    default:
      goto invalid;
    }


 Colchester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Croydon:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '2':
    case '3':
      goto inward;
    case '4':
      if(p == 6)
	goto inward;
      goto District4;
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      if (p == 6)
	goto inward;
      goto District0;
    default:
      goto invalid;
    }

 Canterbury:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District01;
    case '3':
    case '4':
      goto inward;
    case '5':
      if (p == 6)
	goto inward;
      goto District0;
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Coventry:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District03;
    case '2':
      if (p == 6)
	goto inward;
      goto District13;
    case '3':
      if (p == 6)
	goto inward;
      goto District17;
    case '4':
      if (p == 6)
	goto inward;
      goto District7;
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Crewe:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District02;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District8;
    default:
      goto invalid;
    }


  //D
 Dartford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District08;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Dundee:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Derby:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District15;
    case '2':
      goto District14;
    case '3':
      goto inward;
    case '4':
      if (p == 6)
	goto inward;
      goto District5;
    case '5':
      if (p == 6)
	goto inward;
      goto District56;
    case '6':
      if (p == 6)
	goto inward;
      goto District5;
    case '7':
      if (p == 6)
	goto inward;
      goto District25;
    case '9':
      goto District9;
    default:
      goto invalid;
    }

 DumfriesAndGalloway:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '6':
	  goto inward;
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
      goto inward;
    default:
      goto invalid;
    }

 Durham:
  cur = postcode[++c];
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
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District79;
    default:
      goto invalid;
    }

 Darlington:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District07;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District8;
    default:
      goto invalid;
    }

 Doncaster:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District02;
    case '3':
      if (p == 6)
	goto inward;
      goto District19;
    case '4':
      if (p == 6)
	goto inward;
      goto District01;
    case '5':
      if (p == 6)
	goto inward;
      goto District5;
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Dorchester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Dudley:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District04;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //E
 LondonEastCeneral:
  cur = postcode[++c];
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
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
      if(p == 6)
	goto inward;
      goto DistrictFull;
    case '5':
      if(p == 6)
	goto inward;
      goto District15;
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '1':
	case '5':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    default:
      goto invalid;
    }

 Enfield:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District7;
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Exeter:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District04;
    case '3':
      if (p == 6)
	goto inward;
      goto District19;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 LondonEast:
  // single character district
  switch(cur)
    {
    case '1':
      if(p == 5)
	goto inward;
      goto E1;
    case '2':
      if(p == 5)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if(p == 5)
	goto inward;
      goto District7;
    case '8':
      if(p == 6)
	goto inward;
      goto inward;
    case '9':
      if(p == 5)
	goto inward;
      goto District8;
    default:
      goto invalid;
    }

  //F
 Falkirk:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if(p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if(p == 6)
	goto inward;
      goto District01;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Blackpool:
  goto District08;

  //G
 Gloucester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if(p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if(p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
      goto inward;
    case '5':
      if(p == 6)
	goto inward;
      goto District06;
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Guilford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if(p == 6)
	goto inward;
      cur = postcode[++c];
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
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      if(p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if(p == 6)
	goto inward;
      goto District05;
    case '4':
      if(p == 6)
	goto inward;
      goto District47;
    case '5':
      if(p == 6)
	goto inward;
      goto District12;
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if(p == 6)
	goto inward;
      goto District5;
    default:
      goto invalid;
    }

 Gournsey:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if(p == 6)
	goto inward;
      goto District0;
    case '2':
    case '3':
    case '4':
    case '5':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Glasgow:
  // Single character district
  switch(cur)
    {
    case '1':
      if (p == 5)
	goto inward;
      goto District15;
    case '2':
      if (p == 5)
	goto inward;
      goto District03;
    case '3':
      if (p == 5)
	goto inward;
      goto District14;
    case '4':
      if (p == 5)
	goto inward;
      goto District06;
    case '5':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '1':
	case '2':
	case '3':
	case '8':
	  goto inward;
	default:
	  goto invalid;
	}
    case '6':
    case '7':
      goto DistrictFull;
    case '8':
      goto District14;
    case '9':
      if (p == 5)
	goto inward;
      goto District0;
    default:
      goto invalid;
    }

 Girobank:
  if(postcode[++c] == 'R')
  if(postcode[++c] == '0')    
  if(postcode[++c] == 'A')
  if(postcode[++c] == 'A')
    goto inward;
  goto invalid;

  //H
 Harrow:
  goto DistrictFull;

 Huddersfield:
  goto District19;

 Harrogate:
  goto District15;

 HemelHempstead:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '7':
	  goto inward;
	default:
	  goto invalid;
	}
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Hereford:
  goto District19;

 OuterHebrides:
  goto District19;

 Hull:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Halifax:
  goto District17;

  //I
 Ilford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 IsleOfMan:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    case '8':
      if(p == 6)
	goto inward;
      goto District67;
    case '9':
      if(p == 6)
	goto inward;
      goto District99;
    default:
      goto invalid;
    }

 Ipswich:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District03;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District8;
    default:
      goto invalid;
    }

 Inverness:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District08;
    case '3':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '6':
	  goto inward;
	default:
	  goto invalid;
	}
    case '4':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '5':
      if (p == 6)
	goto inward;
      goto District16;
    case '6':
      if (p == 6)
	goto inward;
      goto District3;
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

  //J
 Jersey:
  goto District15;

  //K
 Kilmarnock:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District0;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Kingston:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District04;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Kirkwall:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District07;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Kirkcaldy:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

  //L
 Lancaster:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District03;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 LlandindodWells:
  goto District18;

 Leicester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District1;
    case '3':
      goto inward;
    case '4':
      if (p == 6)
	goto inward;
      goto District1;
    case '5':
      if (p == 6)
	goto inward;
      goto District5;
    case '6':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '5':
	case '7':
	  goto inward;
	default:
	  goto invalid;
	}
    case '7':
      goto inward;
    case '8':
      if (p == 6)
	goto inward;
      goto District7;
    case '9':
      if (p == 6)
	goto inward;
      goto District45;
    default:
      goto invalid;
    }

 Llandudno:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto District19;
    case '2':
      goto DistrictFull;
    case '3':
      goto DistrictFull;
    case '4':
      goto DistrictFull;
    case '5':
      goto District19;
    case '6':
      goto DistrictFull;
    case '7':
      goto District08;
    default:
      goto invalid;
    }

 Lincoln:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District03;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Leeds:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    case '8':
      if (p == 6)
	goto inward;
      goto District8;
    case '9':
      if (p == 6)
	goto inward;
      goto District89;
    default:
      goto invalid;
    }

 Luton:
  goto District07;

 Liverpool:
  // single character district
  switch(cur)
    {
    case '1':
      if (p == 5)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 5)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 5)
	goto inward;
      goto DistrictFull;
    case '4':
      if (p == 5)
	goto inward;
      goto District0;
    case '5':
      goto inward;
    case '6':
      if (p == 5)
	goto inward;
      goto District79;
    case '7':
      if (p == 5)
	goto inward;
      goto District05;
    case '8':
      if (p == 5)
	goto inward;
      goto District0;
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //M
 Rochester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 MiltonKeynes:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
    case '3':
      goto inward;
    case '4':
      if (p == 6)
	goto inward;
      goto District06;
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District7;
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Motherwell:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District02;
    case '2':
    case '3':
    case '4':                                                                     
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Manchester:
  // Single character district
  switch(cur)
    {
    case '1':
      if (p == 5)
	goto inward;
      goto District19;
    case '2':
      if (p == 5)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 5)
	goto inward;
      cur = postcode[++c]; 
      switch(cur)
	{        
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '8':
	  goto inward;
	default:     
	  goto invalid;
	}
    case '4':                                                                     
      if (p == 5)
	goto inward;
      goto District06;
    case '5':
    case '6':
      if (p == 5)
	goto inward;
      goto District01;
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    default:
      goto invalid;
    }

  //N
 NewcastleUponTyne:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '4':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '5':
      goto inward;
    case '6':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '7':
      if (p == 6)
	goto inward;
      goto District01;
    case '8':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '2':
	case '3':
	case '5':
	case '8':
	  goto inward;
	default:
	  goto invalid;
	}
    case '9':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '2':
	case '8':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    default:
      goto invalid;
    }

 Nottingham:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District05;
    case '3':
      if (p == 6)
	goto inward;
      goto District14;
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District0;
    case '8':
      if (p == 6)
	goto inward;
      goto District0;
    case '9':
      if (p == 6)
	goto inward;
      goto District0;
    default:
      goto invalid;
    }

 Northampton:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District08;
    case '2':
      if (p == 6)
	goto inward;
      goto District9;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 Newport:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      cur = postcode[++c];
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
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	  goto inward;
	default:
	  goto invalid;
	}
    case '4':        
      if (p == 6)
	goto inward;
      goto District4;
    case '7':
    case '8':
      goto inward;
    default:
      goto invalid;
    }

 Norwich:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':                                                                           if (p == 6)
	goto inward;
      goto District05;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }


 LondonNorthWest:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case 'W':
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '6':
	  goto inward;
	default:
	  goto invalid;
	}
    case '3':                                                                         case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 LondonNorth:
  // single character district
  switch(cur)
    {
    case '1':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
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
	case 'P':
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      if (p == 5)
	goto inward;
      goto District02;
    case '3':                                                                         case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    case '8':
      if (p == 5)
	goto inward;
      goto District1;
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //O
 Oldham:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
    case '3':                                                                         case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District5;
    default:
      goto invalid;
    }

 Oxford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District08;
    case '2':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  goto inward;
	default:     
	  goto invalid;
	}                                                                         
    case '3':  
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)            
	{                    
	case '3':           
	case '9':           
	  goto inward;        
	default:             
	  goto invalid;      
	}                    
    case '4':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '4':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
    case '7':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //P
 Paisley:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District08;
    case '4':
      if (p == 6)
	goto inward;
      goto District19;
    case '5':
      goto inward;
    case '6':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '7':
      if (p == 6)
	goto inward;
      goto District08;
    case '8':
      if (p == 6)
	goto inward;
      goto District0;
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Peterborough:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
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
	  goto inward;
	default:
	  goto invalid;
	}
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District08;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 Perth:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District06;
    case '3':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '4':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
      if (p == 6)
	goto inward;
      goto District0;
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Plymouth:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District05;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District5;
    default:
      goto invalid;
    }

 Portsmouth:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District02;
    case '3':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '4':
      if (p == 6)
	goto inward;
      goto District02;
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Preston:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6)
	goto inward;
      goto District1;
    case '2':
      if (p == 6)
	goto inward;
      goto District56;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //R
 Reading:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '2':
	case '4':
	case '7':
	case '8':
	case '9':
	  goto inward;
	default: 
	  goto invalid;
	}
    case '2':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
      if (p == 6)
	goto inward;
      goto District01;
    case '4':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '5':
	  goto inward; 
	default:
	  goto invalid;
	}
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Redhill:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District7;
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Romford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //S
 Swansea:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
      if (p == 6)
	goto inward;
      goto District19;
    case '4':
      if (p == 6)
	goto inward;
      goto District08;
    case '5':
      goto inward;
    case '6':
      if (p == 6)
	goto inward;
      goto District19;
    case '7':
      if (p == 6)
	goto inward;
      goto District03;
    case '8':
      if (p == 6)
	goto inward;
      goto District0;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 LondonSouthEastern:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto SE1;
    case '2':
      if (p == 6)
	goto inward;
      goto District08;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Stevenage:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Stockport:
  cur = postcode[++c];
  switch (cur) 
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District07;
    case '2':
      if (p == 6)
	goto inward;
      goto District23;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Slough:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      if (p == 6)
	goto inward;
      goto District0;
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District5;
    default:
	goto invalid;
    }

Sutton:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    default:
      goto invalid;
    }

 Swindon:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
      if (p == 6)
	goto inward;
      goto District56;
    case '3':
      if (p == 6)
	goto inward;
      goto District8;
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 Southampton:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District49;
    case '2':
      if(p == 6)
	goto inward;
      goto District05;
    case '3':
      if (p == 6)
	goto inward;
      goto District02;
    case '4':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '5':
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
      if (p == 6)
	goto inward;
      goto District03;
    case '9':
      goto District7;
    default:
      goto invalid;
    }

 Salisbury:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District01;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Sunderland:
  goto District19;

 SouthendOnSea:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
      goto inward;
    case '1':
      if (p == 6)
	goto inward;
      goto District17;
    case '2':
      if (p == 6)
	goto inward;
      goto District2;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 StokeOnTrent:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District01;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 SouthWesternAndBattersea:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto SW1;
    case '2':
      if (p == 6)
	goto inward;
      goto District0;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District5;
    default:
      goto invalid;
    }

 Shrewsbury:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District05;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 Sheffield:
  // Single character district
  switch(cur)
    {
    case '1':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
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
	  goto inward;
	default: 
	  goto invalid;
	}
    case '2':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '5':
	case '6':
	  goto inward;
	default:
	  goto invalid;
	}
    case '3':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '5':
	case '6':
	  goto inward;
	default:
	  goto invalid;
	}
    case '4':
      if (p == 5)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '9':
	  goto inward;
	default:
	  goto invalid;
	}
    case '5':
      goto inward;
    case '6':
      if (p == 5)
	goto inward;
      goto District06;
    case '7':
      if (p == 5)
	goto inward;
      goto District05;
    case '8':
      if (p == 5)
	goto inward;
      goto District01;
    case '9':
      if (p == 5)
	goto inward;
      goto District59;
    default:
      goto invalid;
    }

  //T
 Taunton:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District04;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Galashiels:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District05;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Telford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District03;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Tonbridge:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '4':
      if (p == 6)
	goto inward;
	  goto District0;
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Torquay:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District04;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Truro:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      goto District07;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }


 Cleveland:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
      if ( p == 6)
	goto inward;
      goto DistrictFull;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 Twickenham:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto DistrictFull;
    case '2':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	  goto inward;
	default:
	  goto invalid;
	}
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //U
 Southall:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      cur = postcode[++c];
      switch(cur)
	{
	case '0':
	case '1':
	case '8':
	  goto inward;
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
      goto inward;
    default:
      goto invalid;
    }

  //W
 Warrington:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
    case '3':
    case '4':
      goto inward;
    case '5':
      if (p == 6)
	goto inward;
      goto District5;
    case '6':
    case '7':
      goto inward;
    case '8':
      if (p == 6)
	goto inward;
      goto District8;
    case '9':
	goto inward;
    default:
      goto invalid;
    }
  
 LondonWestCenteral:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto WC1;
    case '2':
      goto WC2;
    default:
      goto invalid;
    }

 Watford:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto District79;
    case '2':
      goto District35;
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    case '9':
      goto District9;
    default:
      goto invalid;
    }

 Wakefield:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District07;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District0;
    default:
      goto invalid;
    }

 Wigan:
  goto District18;

 Worcester:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District05;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    case '7':
      if (p == 6)
	goto inward;
      goto District8;
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District9;
    default:
      goto invalid;
    }

 Walsall:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District05;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }
  
 Wolverhampton:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6)
	goto inward;
      goto District06;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
      goto inward;
    case '9':
      if (p == 6)
	goto inward;
      goto District89;      
    default:
      goto invalid;
    }

 LondonWest:
  // single character district
  switch(cur)
    {
    case '1':
      goto W1;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

  //Y
 York:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      if (p == 6) goto inward;
      goto DistrictFull;
    case '2':
      goto District16;
    case '3':
      goto District02;
    case '4':
      goto District13;
    case '5':
      goto District1;
    case '6':
      goto District02;
    case '7':
    case '8':
      goto inward;
    case '9':
      goto District01;
    default:
      goto invalid;
    }

  //Z
 Lerwick:
  goto District13;
  
 EC1:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'M':
    case 'N':
    case 'P':
    case 'R':
    case 'V':
    case 'Y':
      goto inward;
    default:
      goto invalid;
    }
  
 EC2:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'M':
    case 'N':
    case 'P':
    case 'R':
    case 'V':
    case 'Y':
      goto inward;
    default:
      goto invalid;
    }
  
 EC3:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'M':
    case 'N':
    case 'P':
    case 'R':
    case 'V':
      goto inward;
    default:
      goto invalid;
    }
  
 EC4:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'M':
    case 'N':
    case 'P':
    case 'R':
    case 'V':
    case 'Y':
      goto inward;
    default:
      goto invalid;
    }
  
 E1:
  cur = postcode[++c];
  switch (cur)
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
    case 'W':
      goto inward;
    default:
      goto invalid;
    }

 SE1:
  cur = postcode[++c];
  switch (cur)
    {
    case 'P':
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
      goto inward;
    default:
      goto invalid;
    }

 SW1:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'E':
    case 'H':
    case 'P':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
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
      goto inward;
    default:
      goto invalid;
    }

 W1:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'S':
    case 'T':
    case 'U':
    case 'W':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      goto inward;
    default:
      goto invalid;
    }

 WC1:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'B':
    case 'E':
    case 'H':
    case 'N':
    case 'R':
    case 'V':
    case 'X':
      goto inward;
    default:
      goto invalid;
    }

 WC2:
  cur = postcode[++c];
  switch (cur)
    {
    case 'A':
    case 'B':
    case 'E':
    case 'H':
    case 'N':
    case 'R':
      goto inward;
    default: 
      goto inward;
    }

 DistrictFull:
  cur = postcode[++c];
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
      goto inward;
    default:
      goto invalid;
    }

 District08:
  cur = postcode[++c];
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
      goto inward;
    default:
      goto invalid;
    }

 District07:
  cur = postcode[++c];
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
      goto inward;
    default:
      goto invalid;
    }

 District06:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    default:
      goto invalid;
    }

 District05:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
      goto inward;
    default:
      goto invalid;
    }

 District04:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      goto inward;
    default:
      goto invalid;
    }

 District03:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
    case '3':
      goto inward;
    default:
      goto invalid;
    }

 District02:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
    case '2':
      goto inward;
    default:
      goto invalid;
    }

 District01:
  cur = postcode[++c];
  switch(cur)
    {
    case '0':
    case '1':
      goto inward;
    default:
      goto invalid;
    }

 District19:
  cur = postcode[++c];
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
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District18:
  cur = postcode[++c];
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
      goto inward;
    default:
      goto invalid;
    }

 District17:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    default:
      goto invalid;
    }

 District16:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
      goto inward;
    default:
      goto invalid;
    }

 District15:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
      goto inward;
    default:
      goto invalid;
    }

 District14:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
    case '4':
      goto inward;
    default:
      goto invalid;
    }

 District13:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
    case '3':
      goto inward;
    default:
      goto invalid;
    }

 District12:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
    case '2':
      goto inward;
    default:
      goto invalid;
    }

 District29:
  cur = postcode[++c];
  switch(cur)
    {
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District25:
  cur = postcode[++c];
  switch(cur)
    {
    case '2':
    case '3':
    case '4':
    case '5':
      goto inward;
    default:
      goto invalid;
    }

 District24:
  cur = postcode[++c];
  switch(cur)
    {
    case '2':
    case '3':
    case '4':
      goto inward;
    default:
      goto invalid;
    }

 District23:
  cur = postcode[++c];
  switch(cur)
    {
    case '2':
    case '3':
      goto inward;
    default:
      goto invalid;
    }

 District35:
  cur = postcode[++c];
  switch(cur)
    {
    case '3':
    case '4':
    case '5':
      goto inward;
    default:
      goto invalid;
    }

 District34:
  cur = postcode[++c];
  switch(cur)
    {
    case '3':
    case '4':
      goto inward;
    default:
      goto invalid;
    }

 District47:
  cur = postcode[++c];
  switch(cur)
    {
    case '4':
    case '5':
    case '6':
    case '7':
      goto inward;
    default:
      goto invalid;
    }

 District45:
  cur = postcode[++c];
  switch(cur)
    {
    case '4':
    case '5':
      goto inward;
    default:
      goto invalid;
    }

 District49:
  cur = postcode[++c];
  switch(cur)
    {
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District59:
  cur = postcode[++c];
  switch(cur)
    {
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District56:
  cur = postcode[++c];
  switch(cur)
    {
    case '5':
    case '6':
      goto inward;
    default:
      goto invalid;
    }

 District67:
  cur = postcode[++c];
  switch(cur)
    {
    case '6':
    case '7':
      goto inward;
    default:
      goto invalid;
    }

 District68:
  cur = postcode[++c];
  switch(cur)
    {
    case '6':
    case '7':
    case '8':
      goto inward;
    default:
      goto invalid;
    }

 District69:
  cur = postcode[++c];
  switch(cur)
    {
    case '6':
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District79:
  cur = postcode[++c];
  switch(cur)
    {
    case '7':
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District89:
  cur = postcode[++c];
  switch(cur)
    {
    case '8':
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District99:
  cur = postcode[++c];
  switch(cur)
    {
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District9:
  cur = postcode[++c];
  switch(cur)
    {
    case '9':
      goto inward;
    default:
      goto invalid;
    }

 District8:
  cur = postcode[++c];
  switch(cur)
    {
    case '8':
      goto inward;
    default:
      goto invalid;
    }

 District7:
  cur = postcode[++c];
  switch(cur)
    {
    case '7':
      goto inward;
    default:
      goto invalid;
    }

 District5:
  cur = postcode[++c];
  switch(cur)
    {
    case '5':
      goto inward;
    defaulppt:
      goto invalid;
    }
 District4:
  cur = postcode[++c];
  switch(cur)
    {
    case '4':
      goto inward;
    default:
      goto invalid;
    }
 District3:
  cur = postcode[++c];
  switch(cur)
    {
    case '3':
      goto inward;
    default:
      goto invalid;
    }
 District2:
  cur = postcode[++c];
  switch(cur)
    {
    case '2':
      goto inward;
    default:
      goto invalid;
    }
 District1:
  cur = postcode[++c];
  switch(cur)
    {
    case '1':
      goto inward;
    default:
      goto invalid;
    }
 District0:
  cur = postcode[++c];
  switch(cur) {
  case '0':
    goto inward;
  default:
    goto invalid;
  }

  // check the 'inward' part, ie. last 3 digits
 inward:
 
  cur = postcode[++c];
  if (cur < 48) {goto invalid;}
  if (cur > 57) {goto invalid;}
 
  cur = postcode[++c];
  if (cur < 65) {goto invalid;}
  if (cur > 90) {goto invalid;}
 
  cur = postcode[++c];
  if (cur < 65) {goto invalid;}
  if (cur > 90) {goto invalid;}
 
  goto valid;

 valid:
  return 0;
 invalid:
  return 1;
 NotImplemented:
  return 2;
}
