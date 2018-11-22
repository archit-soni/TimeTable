#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
class teacher{                                     //Class of teachers
public:
char name[30];                                     //Teacher name
int free[6][8];                                    //To check whether teacher free or not
char period[10][10][10]; 			   //Array of all teacher periods
char code[8];					   //Teacher code
char sub[30];                                      //Subject taught by that teacher
char classes[6][6];				   //Teacher; Where and When?
void out();					   //To Display teacher time table
}shilpa, nidhi, tanu, guru, surbhi, shveta, anita, satya, sinha, alka, mekhla, sangeeta, geeta, geetika, sidhart, manisha; 		//Declaring every teacher objects
void teacher::out()
	{
	clrscr();
	cout<<name<<endl<<endl;
	cout<<"SUBJECT - "<<sub<<endl<<endl;
	cout<<"Classes Taught - "<<endl;
	for(int l=0; l<4; l++)
	cout<<classes[l]<<endl;
	cout<<endl;
	cout<<"===TIME TABLE==="<<endl<<endl;
	for(int j=1; j<=8; j++)
		{
		for(int i=1; i<=6; i++)
			{
			cout<<period[i][j]<<'\t';
			}
		cout<<endl;
		}
	}

class std                                          //A class of every class
{
public:
char period[20][8][8];                            //3D Array of every period of every class
char code[8][8][8];                              //3D Array of teacher code
char cla[5];                                     //Class name
void in();                                       //Function to insert time table
void out();					 //Function to display time table (combined)
void outs(int z);                                //Function to display time table (Separate Day)
}xixii[8];					 //Array of 4 classes each of 11th & 12th
void std::in()
	{
	for(int j=1; j<=6; j++)
		{
		for(int i=1; i<=8; i++)
			{
			cout<<"Enter DAY "<<j<<" period "<<i<<" ";
			cin>>period[j][i];                               //Enters period
			}
		}
	}
void std::outs(int z)
	{
	cout<<"DAY "<<z<<'\t'<<"TEACHER CODE"<<endl;
	for(int j=1; j<=8; j++)
		{
		cout<<period[z][j]<<'\t'<<code[z][j];        //Displays period day wise along with teacher code
		cout<<endl;
		}
	}

void std::out()
	{
	cout<<"==========TIME TABLE========= \n \n \n";
	for(int l=1; l<=6; l++)
	cout<<"DAY "<<l<<'\t';
	cout<<endl<<endl;
	for(int j=1; j<=8; j++)
		{
		for(int i=1; i<=6; i++)
			{
			cout<<period[i][j];
			cout<<'\t';
			}
		cout<<endl;
		}
	}

void preset()                                            //Inserts data into each teacher's file at the start of program
{                                                        //Defaults name of teacher
strcpy(shilpa.name, "Ms. SHILPA PURI");
strcpy(nidhi.name, "Ms. NIDHI RANI");
strcpy(tanu.name, "Ms. TANU SHARMA");
strcpy(guru.name, "Ms. GURUWINDER KAUR");
strcpy(surbhi.name, "Ms. SURBHI GAUTAM");
strcpy(shveta.name, "Ms. SHVETA KAUSHIK");
strcpy(anita.name, "Ms. ANITA GOEL");
strcpy(satya.name, "Mr. SATYA BROTOMANDAL");
strcpy(sinha.name, "Ms. SURBHI SINHA");
strcpy(alka.name, "Ms. ALKA");
strcpy(mekhla.name,"Ms. MEKHLADEEP");
strcpy(sangeeta.name, "Ms. SANGEETA NAAG");
strcpy(geeta.name, "Ms. GEETA");
strcpy(geetika.name, "Ms. GEETIKA KAUSHIK");
strcpy(sidhart.name, "Mr. SIDHART SHARMA");
strcpy(manisha.name, "Ms. MANISHA ");
strcpy(shilpa.code, "M-SP");                            //Defaults code of teacher
strcpy(nidhi.code, "CS-NR");
strcpy(tanu.code, "P-TS");
strcpy(guru.code, "C-GK");
strcpy(surbhi.code, "E-SG");
strcpy(shveta.code, "E-SK");
strcpy(anita.code, "B-AG");
strcpy(satya.code, "Ec-SB");
strcpy(sinha.code, "A-SS");
strcpy(alka.code, "BS-AG");
strcpy(mekhla.code,"Ps-MD");
strcpy(sangeeta.code, "I-SN");
strcpy(geeta.code, "M-GS");
strcpy(geetika.code, "Po-GK");
strcpy(sidhart.code, "G-SS");
strcpy(manisha.code, "L-MS");
strcpy(shilpa.sub, "Mathematics");                           //Defaults subject taught
strcpy(nidhi.sub, "Computer Science");
strcpy(tanu.sub, "Physics");
strcpy(guru.sub, "Chemistry");
strcpy(surbhi.sub, "English");
strcpy(shveta.sub, "English");
strcpy(anita.sub, "Biology");
strcpy(satya.sub, "Economics");
strcpy(sinha.sub, "Accountancy");
strcpy(alka.sub, "Business Studies");
strcpy(mekhla.sub, "Psychology");
strcpy(sangeeta.sub, "Information Practices");
strcpy(geeta.sub, "Mathematics");
strcpy(geetika.sub, "Political Science");
strcpy(sidhart.sub, "Games");
strcpy(manisha.sub, "Library");
strcpy(shilpa.classes[0], "XI-A");                 //Defaults the list of classes taught
strcpy(shilpa.classes[1], "XII-A");
strcpy(shilpa.classes[2], "XII-C");
strcpy(nidhi.classes[0], "XI-A");
strcpy(nidhi.classes[1], "XII-A");
strcpy(tanu.classes[0], "XI-A");
strcpy(tanu.classes[1], "XI-B");
strcpy(tanu.classes[2], "XII-A");
strcpy(tanu.classes[3], "XII-B");
strcpy(guru.classes[0], "XI-A");
strcpy(guru.classes[1], "XI-B");
strcpy(guru.classes[2], "XII-A");
strcpy(guru.classes[3], "XII-B");
strcpy(surbhi.classes[0], "XI-A");
strcpy(surbhi.classes[1], "XI-D");
strcpy(surbhi.classes[2], "XII-A");
strcpy(surbhi.classes[3], "XII-D");
strcpy(shveta.classes[0], "XI-B");
strcpy(shveta.classes[1], "XI-C");
strcpy(shveta.classes[2], "XII-B");
strcpy(shveta.classes[3], "XII-C");
strcpy(anita.classes[0], "XI-B");
strcpy(anita.classes[1], "XII-B");
strcpy(satya.classes[0], "XI-C");
strcpy(satya.classes[1], "XI-D");
strcpy(satya.classes[2], "XII-C");
strcpy(satya.classes[3], "XII-D");
for(int i=0; i<4; i++)                                  //Since 2 separate teachers of English exist, alloting them separately to their respective classes
	{
	strcpy(sinha.classes[i], satya.classes[i]);
	strcpy(alka.classes[i], satya.classes[i]);
	}
strcpy(mekhla.classes[0], "XI-B");
strcpy(mekhla.classes[1], "XI-D");
strcpy(mekhla.classes[2], "XII-B");
strcpy(mekhla.classes[3], "XII-D");
strcpy(sangeeta.classes[0], "XI-D");
strcpy(sangeeta.classes[1], "XII-D");
for(i=0; i<2; i++)
	strcpy(geetika.classes[i], sangeeta.classes[i]);
strcpy(geeta.classes[0], "XI-B");
strcpy(geeta.classes[1], "XI-C");
strcpy(geeta.classes[2], "XII-B");
strcpy(sidhart.classes[0], "ALL");
strcpy(manisha.classes[0], "ALL");
strcpy(xixii[1].cla, "XI-A");
strcpy(xixii[2].cla, "XI-B");
strcpy(xixii[3].cla, "XI-C");
strcpy(xixii[4].cla, "XI-D");
strcpy(xixii[5].cla, "XII-A");
strcpy(xixii[6].cla, "XII-B");
strcpy(xixii[7].cla, "XII-C");
strcpy(xixii[8].cla, "XII-D");
}

void afterset()                     //After the class time table has been alloted, this function allots the teacher time table using the classes'
{
for(int i=1; i<=6; i++)
	{
	for(int j=1; j<=8; j++)
		{
		for(int k=1; k<=8; k++)
			{
			if(strcmp(xixii[k].period[i][j], "PHY")==0)
				{
				ifstream f1("Tanu");
				while(f1.read((char*)&tanu, sizeof(tanu)));
					{
					ofstream f1("Tanu", ios::app);
					strcpy(xixii[k].code[i][j], tanu.code);
					strcpy(tanu.period[i][j], xixii[k].cla);
					tanu.free[i][j]=1;
					f1.write((char*)&tanu, sizeof(tanu));
					f1.close();
					}
				}
		       else if(strcmp(xixii[k].period[i][j], "CHE")==0)
				{
				ifstream f1("Guru");
				while(f1.read((char*)&guru, sizeof(guru)));
					{
					ofstream f1("Guru", ios::app);
					strcpy(xixii[k].code[i][j], guru.code);
					strcpy(guru.period[i][j], xixii[k].cla);
					guru.free[i][j]=1;
					f1.write((char*)&guru, sizeof(guru));
					f1.close();
					}
				}
			    else if(strcmp(xixii[k].period[i][j], "C.S")==0)
				{
				ifstream f1("Nidhi");
				while(f1.read((char*)&nidhi, sizeof(nidhi)));
					{
					ofstream f1("Nidhi", ios::app);
					strcpy(xixii[k].code[i][j], nidhi.code);
					strcpy(nidhi.period[i][j], xixii[k].cla);
					nidhi.free[i][j]=1;
					f1.write((char*)&nidhi, sizeof(nidhi));
					f1.close();
					}
				}
			   else if(strcmp(xixii[k].period[i][j], "I.P")==0)
				{
				ifstream f1("Sangeeta");
				while(f1.read((char*)&sangeeta, sizeof(sangeeta)));
					{
					ofstream f1("Sangeeta", ios::app);
					strcpy(xixii[k].code[i][j], sangeeta.code);
					strcpy(sangeeta.period[i][j], xixii[k].cla);
					sangeeta.free[i][j]=1;
					f1.write((char*)&sangeeta, sizeof(sangeeta));
					f1.close();
					}
				}
			   else if(strcmp(xixii[k].period[i][j], "ACC")==0)
				{
				ifstream f1("Sinha");
				while(f1.read((char*)&sinha, sizeof(sinha)));
					{
					ofstream f1("Sinha", ios::app);
					strcpy(xixii[k].code[i][j], sinha.code);
					strcpy(sinha.period[i][j], xixii[k].cla);
					sinha.free[i][j]=1;
					f1.write((char*)&sinha, sizeof(sinha));
					f1.close();
					}
				}
			   else if(strcmp(xixii[k].period[i][j], "ECO")==0)
				{
				ifstream f1("Satya");
				while(f1.read((char*)&satya, sizeof(satya)));
					{
					ofstream f1("Satya", ios::app);
					strcpy(xixii[k].code[i][j], satya.code);
					strcpy(satya.period[i][j], xixii[k].cla);
					satya.free[i][j]=1;
					f1.write((char*)&satya, sizeof(satya));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "PSY")==0)
				{
				ifstream f1("Mekhla");
				while(f1.read((char*)&mekhla, sizeof(mekhla)));
					{
					ofstream f1("Mekhla", ios::app);
					strcpy(xixii[k].code[i][j], mekhla.code);
					strcpy(mekhla.period[i][j], xixii[k].cla);
					mekhla.free[i][j]=1;
					f1.write((char*)&mekhla, sizeof(mekhla));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "BST")==0)
				{
				ifstream f1("Alka");
				while(f1.read((char*)&alka, sizeof(alka)));
					{
					ofstream f1("Alka", ios::app);
					strcpy(xixii[k].code[i][j], alka.code);
					strcpy(alka.period[i][j], xixii[k].cla);
					alka.free[i][j]=1;
					f1.write((char*)&alka, sizeof(alka));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "BIO")==0)
				{
				ifstream f1("Anita");
				while(f1.read((char*)&anita, sizeof(anita)));
					{
					ofstream f1("Anita", ios::app);
					strcpy(xixii[k].code[i][j], anita.code);
					strcpy(anita.period[i][j], xixii[k].cla);
					anita.free[i][j]=1;
					f1.write((char*)&anita, sizeof(anita));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "LIF")==0)
				{
				ifstream f1("Mekhla");
				while(f1.read((char*)&mekhla, sizeof(mekhla)));
					{
					ofstream f1("Mekhla", ios::app);
					strcpy(xixii[k].code[i][j], mekhla.code);
					strcpy(mekhla.period[i][j], xixii[k].cla);
					mekhla.free[i][j]=1;
					f1.write((char*)&mekhla, sizeof(mekhla));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "GAM")==0)
				{
				ifstream f1("Sidhart");
				while(f1.read((char*)&sidhart, sizeof(sidhart)));
					{
					ofstream f1("Sidhart", ios::app);
					strcpy(xixii[k].code[i][j], sidhart.code);
					strcpy(sidhart.period[i][j], xixii[k].cla);
					sidhart.free[i][j]=1;
					f1.write((char*)&sidhart, sizeof(sidhart));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "LIB")==0)
				{
				ifstream f1("Manisha");
				while(f1.read((char*)&manisha, sizeof(manisha)));
					{
					ofstream f1("Manisha", ios::app);
					strcpy(xixii[k].code[i][j], manisha.code);
					strcpy(manisha.period[i][j], xixii[k].cla);
					manisha.free[i][j]=1;
					f1.write((char*)&manisha, sizeof(manisha));
					f1.close();
					}
				}
			 else if(strcmp(xixii[k].period[i][j], "POL")==0)
				{
				ifstream f1("Geetika");
				while(f1.read((char*)&geetika, sizeof(geetika)));
					{
					ofstream f1("Geetika", ios::app);
					strcpy(xixii[k].code[i][j], geetika.code);
					strcpy(geetika.period[i][j], xixii[k].cla);
					geetika.free[i][j]=1;
					f1.write((char*)&geetika, sizeof(geetika));
					f1.close();
					}
				}
			if(k==1||k==5||k==7)
			       if(strcmp(xixii[k].period[i][j], "MAT")==0)
				{
				ifstream f1("Shilpa");
				while(f1.read((char*)&shilpa, sizeof(shilpa)));
					{
					ofstream f1("Shilpa", ios::app);
					strcpy(xixii[k].code[i][j], shilpa.code);
					strcpy(shilpa.period[i][j], xixii[k].cla);
					shilpa.free[i][j]=1;
					f1.write((char*)&shilpa, sizeof(shilpa));
					f1.close();
					}
				}
			if(k==2||k==3||k==6)
				if(strcmp(xixii[k].period[i][j], "MAT")==0)
				{
				ifstream f1("Geeta");
				while(f1.read((char*)&geeta, sizeof(geeta)));
					{
				ofstream f1("Shilpa", ios::app);
					strcpy(xixii[k].code[i][j], geeta.code);
					strcpy(geeta.period[i][j], xixii[k].cla);
					geeta.free[i][j]=1;
					f1.write((char*)&geeta, sizeof(geeta));
					f1.close();
					}
				}
			if(k==1||k==4||k==5||k==8)
				if(strcmp(xixii[k].period[i][j], "ENG")==0)
					{
					ifstream f1("Surbhi");
					while(f1.read((char*)&surbhi, sizeof(surbhi)));
						{
						ofstream f1("Surbhi", ios::app);
						strcpy(xixii[k].code[i][j], surbhi.code);
						strcpy(surbhi.period[i][j], xixii[k].cla);
						surbhi.free[i][j]=1;
						f1.write((char*)&surbhi, sizeof(surbhi));
						f1.close();
						}
					}
			if(k==2||k==3||k==6||k==7)
			if(strcmp(xixii[k].period[i][j], "ENG")==0)
					{
					ifstream f1("Surbhi");
					while(f1.read((char*)&shveta, sizeof(shveta)));
						{
						ofstream f1("Surbhi", ios::app);
						strcpy(xixii[k].code[i][j], shveta.code);
						strcpy(shveta.period[i][j], xixii[k].cla);
						shveta.free[i][j]=1;
						f1.write((char*)&shveta, sizeof(shveta));
						f1.close();
						}
					}
			}
		}
	}
}
void something(int l)                     //User enters class time table
	{
	if(l==1)
		{
		ofstream f1("XIA");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==2)
		{
		ofstream f1("XIB");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==3)
		{
		ofstream f1("XIC");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==4)
		{
		ofstream f1("XID");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==5)
		{
		ofstream f1("XIIA");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==6)
		{
		ofstream f1("XIIB");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==7)
		{
		ofstream f1("XIIC");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	else if(l==8)
		{
		ofstream f1("XIID");
		xixii[l].in();
		afterset();
		f1.write((char*)&xixii[l], sizeof(xixii[l]));
		f1.close();
		}
	}


void another(int l)
	{
	if(l==1)
		{
		ifstream f1("XIA");
		while(f1.read((char*)&xixii[l], sizeof(xixii[l])));
		xixii[l].out();
		f1.close();
		}
	else if(l==2)
		{
		ifstream f1("XIB");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==3)
		{
		ifstream f1("XIC");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==4)
		{
		ifstream f1("XID");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==5)
		{
		ifstream f1("XIIA");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==6)
		{
		ifstream f1("XIIB");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==7)
		{
		ifstream f1("XIIC");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	else if(l==8)
		{
		ifstream f1("XIID");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].out();
		f1.close();
		}
	}

int menu()								//Main Menu of program
	{
	int m;
	cout<<"1. DISPLAY TIME TABLE \n \n 2. MODIFY TIME TABLE \n \n 3. SEE TEACHER TIME TABLE \n \n 4. WRITE"<<endl<<endl;
	cin>>m;
	return m;
	}

void byday(int l, int z)					//To display time table of a single day
{
	if(l==1)
		{
		ifstream f1("XIA");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==2)
		{
		ifstream f1("XIB");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==3)
		{
		ifstream f1("XIC");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==4)
		{
		ifstream f1("XID");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==5)
		{
		ifstream f1("XIIA");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==6)
		{
		ifstream f1("XIIB");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l=7)
		{
		ifstream f1("XIIC");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	else if(l==8)
		{
		ifstream f1("XIID");
		f1.read((char*)&xixii[l], sizeof(xixii[l]));
		xixii[l].outs(z);
		f1.close();
		}
	}

void everything()			//Works sort of as a constructor by presetting teacher details
	{
	ofstream f1("Tanu");
	afterset();
	f1.write((char*)&tanu, sizeof(tanu));
	f1.close();
	ofstream f2("Guru");
	afterset();
	f2.write((char*)&guru, sizeof(guru));
	f2.close();
	ofstream f3("Nidhi");
	afterset();
	f3.write((char*)&nidhi, sizeof(nidhi));
	f3.close();
	ofstream f4("Shilpa");
	afterset();
	f4.write((char*)&shilpa, sizeof(shilpa));
	f4.close();
	ofstream f5("Geeta");
	afterset();
	f5.write((char*)&geeta, sizeof(geeta));
	f5.close();
	ofstream f6("Geetika");
	afterset();
	f6.write((char*)&geetika, sizeof(geetika));
	f6.close();
	ofstream f7("Satya");
	afterset();
	f7.write((char*)&satya, sizeof(satya));
	f7.close();
	ofstream f8("Alka");
	afterset();
	f8.write((char*)&alka, sizeof(alka));
	f8.close();
	ofstream f9("Mekhla");
	afterset();
	f9.write((char*)&mekhla, sizeof(mekhla));
	f9.close();
	ofstream f10("Surbhi");
	afterset();
	f10.write((char*)&surbhi, sizeof(surbhi));
	f10.close();
	ofstream f11("Sinha");
	afterset();
	f11.write((char*)&sinha, sizeof(sinha));
	f11.close();
	ofstream f12("Sangeeta");
	afterset();
	f12.write((char*)&sangeeta, sizeof(sangeeta));
	f12.close();
	ofstream f13("Sidhart");
	afterset();
	f13.write((char*)&sidhart, sizeof(sidhart));
	f13.close();
	ofstream f14("Manisha");
	afterset();
	f14.write((char*)&manisha, sizeof(manisha));
	f14.close();
	ofstream f15("Shveta");
	afterset();
	f15.write((char*)&shveta, sizeof(shveta));
	f15.close();
	ofstream f16("Anita");
	afterset();
	f16.write((char*)&anita, sizeof(anita));
	f16.close();
	}

int free(int i, int j, char sub[], int k)	//Checks and allots whether teacher is free using flag variable t
	{
	int t;
	if((strcmp(sub, "CHE")==0)||(strcmp(sub, "CPR")==0))
		{
		ifstream f1("Guru");
		f1.read((char*)&guru, sizeof(guru));
		if(guru.free[i][j]==0)
			{
			t=1;
			}
		else   t=0;
		f1.close();
		}
	if((strcmp(sub, "PHY")==0)||(strcmp(sub, "PPR")==0))
		{
		ifstream f1("Tanu");
		f1.read((char*)&tanu, sizeof(tanu));
		if(tanu.free[i][j]==0)
			{
			t=1;
			}
		else   t=0;
		f1.close();
		}
	if((strcmp(sub, "C.S")==0)||(strcmp(sub, "C.A")==0))
		{
		ifstream f1("Nidhi");
		f1.read((char*)&nidhi, sizeof(nidhi));
		if(nidhi.free[i][j]==0)
			{
			t=1;
			}
		else   t=0;
		f1.close();
		}
	if(strcmp(sub, "BST")==0)
		{
		ifstream f1("Alka");
		f1.read((char*)&alka, sizeof(alka));
		if(alka.free[i][j]==0)
			{
			t=1;
			}
		else   t=0;
		f1.close();
		}
	if(strcmp(sub, "ACC")==0)
		{
		ifstream f1("Sinha");
		f1.read((char*)&sinha, sizeof(sinha));
		if(sinha.free[i][j]==0)
			{
			t=1;
			}
		else 	t=0;
		f1.close();
		}
	if(strcmp(sub, "BIO")==0)
		{
		ifstream f1("Anita");
		f1.read((char*)&anita, sizeof(anita));
		if(anita.free[i][j]==0)
			{
			t=1;
			}
		else 	t=0;
		f1.close();
		}
	if((strcmp(sub, "PSY")==0)||(strcmp(sub, "LIF")==0))
		{
		ifstream f1("Mekhla");
		f1.read((char*)&mekhla, sizeof(mekhla));
		if(mekhla.free[i][j]==0)
			{
			t=1;
			}
		else 	t=0;
		f1.close();
		}
	if(strcmp(sub, "GAM")==0)
		{
		ifstream f1("Sidhart");
		f1.read((char*)&sidhart, sizeof(sidhart));
		if(sidhart.free[i][j]==0)
			{
			t=1;
			}
		else 	t=0;
		f1.close();
		}
	if(strcmp(sub, "LIB")==0)
		{
		ifstream f1("Manisha");
		f1.read((char*)&manisha, sizeof(manisha));
		if(sidhart.free[i][j]==0)
			{
			t=1;
			}
		else	t=0;
		f1.close();
		}
	if(strcmp(sub, "I.P")==0)
		{
		ifstream f1("Sangeeta");
		f1.read((char*)&sangeeta, sizeof(sangeeta));
		if(sangeeta.free[i][j]==0)
			{
			t=1;
			}
		else	t=0;
		f1.close();
		}
	if(strcmp(sub, "ECO")==0)
		{
		ifstream f1("Satya");
		f1.read((char*)&satya, sizeof(satya));
		if(satya.free[i][j]==0)
			{
			t=1;
			}
		else	t=0;
		f1.close();
		}
	if(strcmp(sub, "POL")==0)
		{
		ifstream f1("Geetika");
		f1.read((char*)&geetika, sizeof(geetika));
		if(geetika.free[i][j]==0)
			{
			t=1;
			}
		else	t=0;
		f1.close();
		}
	if(k==1||k==5||k==7)
		{
		if(strcmp(sub, "MAT")==0)
			{
			ifstream f1("Shilpa");
			f1.read((char*)&shilpa, sizeof(shilpa));
			if(shilpa.free[i][j]==0)
				{
				t=1;
				}
			else	t=0;
			f1.close();
			}
		}
	if(k==2||k==3||k==6)
		{
		if(strcmp(sub, "MAT")==0)
			{
			ifstream f1("Geeta");
			f1.read((char*)&geeta, sizeof(geeta));
			if(geeta.free[i][j]==0)
				{
				t=1;
				}
			else	t=0;
			f1.close();
			}
	if(k==1||k==4||k==5||k==8)
		if(strcmp(sub, "ENG")==0)
			{
			ifstream f1("Surbhi");
			f1.read((char*)&surbhi, sizeof(surbhi));
			if(surbhi.free[i][j]==0)
				{
				t=1;
				}
			else	t=0;
			f1.close();
			}
	if(k==2||k==3||k==6||k==7)
		if(strcmp(sub, "ENG")==0)
			{
			ifstream f1("Shveta");
			f1.read((char*)&shveta, sizeof(shveta));
			if(shveta.free[i][j]==0)
				{
				t=1;
				}
			else	t=0;
			f1.close();
			}
	}
	return t;
	}


void teachertable()				//Displays time table  of teachers
	{
	char code[8];
	cout<<"Enter teacher code ";
	cin>>code;
	if(strcmp(code, "CS-NR")==0)
		{
		ifstream f1("Nidhi");
		f1.read((char*)&nidhi, sizeof(nidhi));
		nidhi.out();
		f1.close();
		}
	else if(strcmp(code, "M-SP")==0)
		{
		ifstream f1("Shilpa");
		f1.read((char*)&shilpa, sizeof(shilpa));
		shilpa.out();
		f1.close();
		}
	else if(strcmp(code, "P-TS")==0)
		{
		ifstream f1("Tanu");
		f1.read((char*)&tanu, sizeof(tanu));
		tanu.out();
		f1.close();
		}
	else if(strcmp(code, "C-GK")==0)
		{
		ifstream f1("Guru");
		f1.read((char*)&guru, sizeof(guru));
		guru.out();
		f1.close();
		}
	else if(strcmp(code, "E-SG")==0)
		{
		ifstream f1("Surbhi");
		f1.read((char*)&surbhi, sizeof(surbhi));
		surbhi.out();
		f1.close();
		}
	else if(strcmp(code, "E-SK")==0)
		{
		ifstream f1("Shveta");
		f1.read((char*)&shveta, sizeof(shveta));
		shveta.out();
		f1.close();
		}
	else if(strcmp(code, "B-AG")==0)
		{
		ifstream f1("Anita");
		f1.read((char*)&anita, sizeof(anita));
		anita.out();
		f1.close();
		}
	else if(strcmp(code, "Ec-SB")==0)
		{
		ifstream f1("Satya");
		f1.read((char*)&satya, sizeof(satya));
		satya.out();
		f1.close();
		}
	else if(strcmp(code, "A-SS")==0)
		{
		ifstream f1("Sinha");
		f1.read((char*)&sinha, sizeof(sinha));
		sinha.out();
		f1.close();
		}
	else if(strcmp(code, "BS-AG")==0)
		{
		ifstream f1("Alka");
		f1.read((char*)&alka, sizeof(alka));
		alka.out();
		f1.close();
		}
	else if(strcmp(code, "Ps-MD")==0)
		{
		ifstream f1("Mekhla");
		f1.read((char*)&mekhla, sizeof(mekhla));
		mekhla.out();
		f1.close();
		}
	else if(strcmp(code, "I-SN")==0)
		{
		ifstream f1("Sangeeta");
		f1.read((char*)&sangeeta, sizeof(sangeeta));
		sangeeta.out();
		f1.close();
		}
	else if(strcmp(code, "M-GS")==0)
		{
		ifstream f1("Geeta");
		f1.read((char*)&geeta, sizeof(geeta));
		geeta.out();
		f1.close();
		}
	else if(strcmp(code, "Po-GK")==0)
		{
		ifstream f1("Geetika");
		f1.read((char*)&geetika, sizeof(geetika));
		geetika.out();
		f1.close();
		}
	else if(strcmp(code, "G-SS")==0)
		{
		ifstream f1("Sidhart");
		f1.read((char*)&sidhart, sizeof(sidhart));
		sidhart.out();
		f1.close();
		}
	else if(strcmp(code, "L-MS")==0)
		{
		ifstream f1("Manisha");
		f1.read((char*)&manisha, sizeof(manisha));
		manisha.out();
		f1.close();
		}
	}

void modify()			//Modifies time table if the teacher is free and else returns error.
	{
	int c,d,p;
	cout<<"Select class code \n 1 - XI-A \n 2 - XI-B \n 3 - XI-C \n 4 - XI-D \n 5 - XII-A \n 6 - XII-B \n 7 - XII-C \n 8 - XII-D"<<endl;
	cin>>c;
	cout<<"Enter day ";
	cin>>d;
	cout<<"Enter period ";
	cin>>p;
	long pos;
	cout<<"Enter new period ";
	char period[8];
	cin>>period;
	int ifteacherfree;
	ifteacherfree=free(d, p, period, c);
	if(ifteacherfree==0)
		{
		cout<<"Teacher is not free";
			}
	else if(ifteacherfree==1)
	{
	if(c==1)
		{
		ifstream f1("XIA");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIA");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==2)
		{
		ifstream f1("XIB");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIB");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==3)
		{
		ifstream f1("XIC");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIC");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==4)
		{
		ifstream f1("XID");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XID");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==5)
		{
		ifstream f1("XIIA");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIIA");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==6)
		{
		ifstream f1("XIIB");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIIB");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==7)
		{
		ifstream f1("XIIC");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIIC");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}
					}
				}
			}
		}
	else if(c==8)
		{
		ifstream f1("XIID");
		while(f1.read((char*)&xixii[c], sizeof(xixii[c])));
			{
			for(int i=1; i<=6; i++)
				{
				for(int j=1; j<=8; j++)
					{
					if((d==i)&&(p==j))
						{
						ofstream f1("XIID");
						strcpy(xixii[c].period[d][p], period);
						f1.write((char*)&xixii[c], sizeof(xixii[c]));
						f1.close();
						break;
						}

					}
				}
			}
		}
	}
}

void showclass(int l)	//Shows class name as heading
{
if(l==1)
cout<<"_______________XI-A_____________"<<endl<<endl;
if(l==2)
cout<<"_______________XI-B_____________"<<endl<<endl;
if(l==3)
cout<<"_______________XI-C_____________"<<endl<<endl;
if(l==4)
cout<<"_______________XI-D_____________"<<endl<<endl;
if(l==5)
cout<<"_______________XII-A_____________"<<endl<<endl;
if(l==6)
cout<<"_______________XII-B_____________"<<endl<<endl;
if(l==7)
cout<<"_______________XII-C_____________"<<endl<<endl;
if(l==8)
cout<<"_______________XII-D_____________"<<endl<<endl;
}


int main()
{
clrscr();
preset();
cout<<"########### TIME TABLE PROGRAM ##############"<<endl<<endl;
getch();
int l=menu();
if(l==1)
	{
	int z;
	cout<<"1. Combined \n 2. Particular Day"<<endl;
	cin>>z;
	cout<<"Select class code"<<endl<<"1 - XI-A "<<endl;
	cout<<"2 - XI-B"<<endl<<"3 - XI-C"<<endl<<"4 - XI-D"<<endl<<"5 - XII-A "<<endl<<"6 - XII-B"<<endl<<" 7 - XII-C "<<endl<<"8 - XII-D"<<endl;
	cin>>l;
	if(z==1)
		{
		clrscr();
		showclass(l);
		another(l);
		everything();
		}
	else if(z==2)
		{
		cout<<"Enter Day ";
		cin>>z;
		clrscr();
		showclass(l);
		byday(l, z);
		}
	}
       else if(l==2)
		{
		modify();
		everything();
		}
	else if(l==3)
		{
		teachertable();
		}
else if(l==4)
	{
	cout<<"Select class code \n 1 - XI-A \n 2 - XI-B \n 3 - XI-C \n 4 - XI-D \n 5 - XII-A \n 6 - XII-B \n 7 - XII-C \n 8 - XII-D"<<endl;
	cin>>l;
	something(l);
	everything();
	}
getch();
return 0;
}
