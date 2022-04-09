#include <iostream>
#include<cstdlib>
#include <time.h>//librari e cila permban kohen//
using namespace std;

int main()//funksinoni kryesor
{
	system ("Color 46");//sherben per te ndryshuar ngjyren ne background
	cout<<"\t\t\t--------------------\n"<<endl;
	        //trgohet data dhe ora e sotme 
	       cout << "\t\tCurrent date : ";
	       //funksioni i ores dhe dates
	         time_t now;
	         time(&now);
	 
	        printf("%s\n", ctime(&now));;//printohet ne ekran data dhe ora
	      
	        cout<<"\t\t\t--------------------\n"<<endl;
	int kodi; //variabel e cila do te sherbeje si kod i dhene nga perdoruesi 
	int password=1234;//variabel e me ane te se ciles do te bejme verifikimin e kodit 
	int numero=0;//variaben e cila do te na ndihmoje te mbajme shenim sa here perdoruesi jep kodin gabim 
	
	//perdorim tipin e variables double ne menyre qe te pranohen shuma te ndryshme parash
	double depozita=0.0;
	double bilanci=0.0;
	double terheqje=0.0;
	
	bool v=true;//variabel e cila do te na ndihmoje ne fuknksionin do-while 
	int opsion;//variabel e cila na shrben ne funksionin switch
	
	do //hapim funksionin e pare do-while dhe vendosim si kusht qe cikli i veprimeve do te kryeht per aq kohe sa variabla v=true
	{
	
	  cout<<"\t\t    / MIRESEVINI NE STARK BANK / ""\n";//me ane te cout i urojme perdoruesit mireseardhjen dhe i kerkojme te jape kodin e caktuar i cili verifikohet me ndihmen e variables password
	  cout<<"\n\nJu lutem vendosni kodin \n\n";
	  cin>>kodi;
	 if (kodi==password)//if kryesor me ane te se cilit dallojme nese perdoruesi ka dhene kodin e sakte 
	  {
	  	do //hapim funksionin e dyte do-while ne menyre qe perdoruesit ti shfaqet menuja kryesore pas cdo veprimi
	  	{
	  		//i tregojme perdoruesit opsionet e mundshme nga ku mund te zgjedhe
		  cout<<"\n\nMiresevini ne STARK BANK zgjidhni nje nga opsionet,ne varesi te veprimit qe doni te kryeni: \n"
	   	      <<"1. Depozite\n"
	   	      <<"2. Terheqje\n"
	   	      <<"3. Verifikim bilanci\n"
	   	      <<"4. Ndryshoni kodin\n"
	   	      <<"5. Dil nga programi\n";
	   	  cout<<"\n\nJu lutem zgjidhni nje nga opsionet e mesiperme:\n\n" ;  //perdoruesi zgjedh veprimin e deshiruar    
	  	  cin>>opsion;
	  	
	  	  switch(opsion)//fillon funksioni switch i cili lejon perdoruesin te zgjedhe nje nga opsionet e mesiperm 
	  	  {
	  	  	
	  	  	
	  		case 1://rasti i pare: perdoruesi depoziton nje shume te caktuar parash kjo shume i shtohet bilancit te meparshem i cili ka vleren fillestare 0 me pas ne ekran afishohet shuma e lekve qe ndodhet ne llogari
	  			
	  			cout<<"\n\nJepni vleren e shumes qe doni te depozitoni: \n\n";//nese vlera e depozituar eshte 0 ose me e vogel depozita nuk pranohet
	  			cin>>depozita;
	  			if (depozita<0)
	  			{ cout<<"\n\nKjo depozite nuk eshte e vlefsheme.Ju lutem jepni nje vlere me te larte se 0 lek\n\n";
				  }
	  			else 
				  {
				     bilanci=bilanci+depozita;
	  			     cout<<"\n\nDepozita u krye me sukses! \n\n"
	  			         <<"Ju tani keni "<<bilanci<<"lek\n\n";
	  	        	}
	  			break;
	  		
			  
			case 2://rasti i dyte: perdoruesi terheq nje shume te caktuar nga llogaria nese shuma qe do te terhiqet eshte me e madhe se bilanci aktual perdoruesi nuk mund te kryej terheqjen 
	  			
	  			cout<<"\n\nJepni vleren e shumes qe doni te terhiqni: \n\n";
	  			cin>>terheqje;
	  			if (terheqje>bilanci)//funksioni if na ndihmon te dallojme nese shuma qe do te terhiqet eshte me e madhe se bilanci aktual
	  			  {
	  			  	cout<<"\nJu nuk mund ta kryeni kete terheqje sepse nuk keni bilancin e mjaftueshem!\n\n";//nese bilanci<terheqje ateher afishohet ky mesazh
					}
	  			else if (terheqje<0)
				  {
				  	cout<<"\n\nJu nuk mund ta kryeni kete terheqje sepse nuk mund te terhiqni vlera negative!\n\n";//perdoruesi nuk mund te terheqe vlera neg
					 }   
	  			else 
				   {
				   	bilanci=bilanci-terheqje;//perndryshe kryhet veprimi dhe shfaqet bilanci
	  			 
	  			    cout<<"\n\nTerheqja u krye me sukses \n\n"
	  			        <<"Ju tani keni "<<bilanci<<"lek\n\n";
				  }  
	  			
	  			break;	
	  			
	  			
	  		case 3://perdoruesit i shfaqet bilanci aktual i llogarise
	  			cout <<"\n\nBilanci i llogarise suaj per momentin eshte: \n\n"<< bilanci <<endl;
	  			break;
	  			
	  			
	  		case 4://perdoruesi mund te ndryshoje kodin e llogarise 
	  			cout<<"\n\nJu lutem vendosni kodin qe keni per momentin: \n"; //si fillim kerkohet kodi i tanishem dhe verifikohet me ndihmen e variablit password
	  		    cin>>kodi;       
	                if (kodi==password)//nese kodi eshte i sakte  perdoruesit i kerkohet kodi i ri dhe ndodh ndryshimi i kodit me ndihmen e variables password
	                {
			    	   cout<<"\n\nJepni kodin e ri me 4 shifra: \n";
	                   cin>>password;
	                   cout<<"\n\nKodi u ndryshua me sukses! \n";
			    	}
	            
	               else 
			      {
			    	cout<<"\n\nKodi i vendosur nuk eshte i sakte!\n \nNdryshimi i kodit nuk eshte i mundur\n\n";//perndryshe shfaqet mesazhi dhe perdoruesi rikthehet ne menune kryesore
			    	
			   	}
	  			break;
	  		case 5://perdoruesi del nga programi 
	  			cout<<"\n\nDite te mbare!\n\n";
	  	        
	            
	            exit (0);//ky veprim mundesohet me ane te funksioni exit
	  			        //v=false;//nje tjeter menyre per te bere kete veprim eshte te barazojme variablen v me  false 
	  			break;	
	  		
	  		
	  		
	  		
	  		
		  }
	  		
		}while (v !=false);//kushti per do while ne menyre qe perdoruesit ti shfaqet menuja kryesore pas cdo veprimi
	  
	  	
	  }
	  else//nese vendoset kodi i gabuar
	  {
	   numero++;//variabla numero rritet me 1 ne menyre qe perdoruesi te mos jape me shume se tre here kodin e gabuar 
	   if (numero==3)//nese variabla numero = 3, v barazohet me false dhe perdoruesi del nga programi
	     v=false;
	     
	   else //shfaqet mesazhi deri sa v = true
		  cout<<"\n\nKodi i gabuar\n";
		
	   
	   
	  }
	  
	  
	} while (v!=false );//kushti per funksioni e pare do while
	
	
	
	
	
}
