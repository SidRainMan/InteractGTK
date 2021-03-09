#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <gtk/gtk.h>
#include <stdbool.h>


//Global Variables

//Window1

GtkWidget *window1;
GtkWidget *fixed1;
GtkWidget *b1;
GtkWidget *label1;
GtkWidget *label2;
GtkWidget *entry1;
GtkWidget *entry2;

//MenuWin2

GtkWidget *MenuWin2;
GtkWidget *fixed2;
GtkWidget *rb1;
GtkWidget *rb2;
GtkWidget *rb3;
GtkWidget *b2;
GtkWidget *b3;
GtkWidget *entry3;

//Dia1
GtkWidget *Dia1;
GtkWidget *b5;

//AppWin3

GtkWidget *AppWin3;
GtkWidget *fixed3;
GtkWidget *sep1;
GtkWidget *sep2;
GtkWidget *sep3;
GtkWidget *sep4;
GtkWidget *b6;
GtkWidget *b7;
GtkWidget *b8;
GtkWidget *b9;
GtkWidget *b10;
GtkWidget *b11;
GtkWidget *b12;
GtkWidget *b13;
GtkWidget *b14;
GtkWidget *b15;
GtkWidget *img1;
GtkWidget *img2;
GtkWidget *label4;
GtkWidget *label5;
GtkWidget *label6;

//DOWin4

GtkWidget *DOWin4;
GtkWidget *fixed4;
GtkWidget *d1;
GtkWidget *d2;
GtkWidget *d3;
GtkWidget *d4;
GtkWidget *d5;
GtkWidget *d6;
GtkWidget *d7;
GtkWidget *d8;
GtkWidget *d9;
GtkWidget *d10;
GtkWidget *d11;
GtkWidget *d12;
GtkWidget *d13;
GtkWidget *d14;
GtkWidget *d15;
GtkWidget *d16;
GtkWidget *d17;
GtkWidget *d18;
GtkWidget *label7;
GtkWidget *label8;
GtkWidget *label9;
GtkWidget *label10;
GtkWidget *label11;
GtkWidget *label12;
GtkWidget *label13;
GtkWidget *label14;
GtkWidget *img3;
GtkWidget *img4;
GtkWidget *b16;

//ChopS

GtkWidget *ChopS;
GtkWidget *fixed6;
GtkWidget *p1lh;
GtkWidget *p1rh;
GtkWidget *p2lh;
GtkWidget *p2rh;
GtkWidget *p1at;
GtkWidget *p1sp;
GtkWidget *p2at;
GtkWidget *p2sp;
GtkWidget *entry4;
GtkWidget *entry5;
GtkWidget *label20;
GtkWidget *label21;
GtkWidget *label22;
GtkWidget *label23;
GtkWidget *okb;
GtkWidget *label24;
GtkWidget *label25;
GtkWidget *label15;
GtkWidget *label16;





char p1[256]="Player1 ",p2[256]="Player2 ",gch[1];//player names
bool o6 = false,o7=false,o8=false,o9=false,o10=false,o11=false,o12=false,o13=false,o14=false,o15=false;
int q6=6,q7=7,q8=8,q9=9,q10=10,q11=11,q12=12,q13=13,q14=14;
int TTcount=0,oldsum=0,p1sum=0,p2sum=0,p1round=0,p2round=0;
bool o16=true;//DICE BUTTON
//const gchar XO[3];

bool plrh=false,pllh=false,pl2rh=false,pl2lh=false,plat=false,plsp=false,pl2at=false,pl2sp=false;

//bool s1=false,s2=false,s3=false,s4=false,s5=false,s6=false,s7=false,s8=false,s9=false,s10=false,s11=false,s12=false,s13=false,s14=false,s15=false,s16=false,s17=false,s18=false,p1s=false,p2s=false;
bool z[10]={false,false,false,false,false,false,false,false,false,false};
bool z2[10]={false,false,false,false,false,false,false,false,false,false};
bool dd[10]={false,false,false,false,false,false,false,false,false,false};
bool dd2[10]={false,false,false,false,false,false,false,false,false,false};
bool zab1=false,zab2=false;



int rfinal=1,last=100,dsum,lastz=3;
int main (int argc, char *argv[])

{

GtkBuilder *builder;
  gtk_init (&argc, &argv);
  builder = gtk_builder_new_from_file("RealGlade.glade");
  gtk_builder_connect_signals(builder,NULL);

  //Window1
  window1=GTK_WIDGET(gtk_builder_get_object(builder,"window1"));
  g_signal_connect(window1,"destroy", G_CALLBACK(gtk_main_quit),NULL);

  fixed1=GTK_WIDGET(gtk_builder_get_object(builder,"fixed1"));
  b1=GTK_WIDGET(gtk_builder_get_object(builder,"b1"));
  label1=GTK_WIDGET(gtk_builder_get_object(builder,"label1"));
  label2=GTK_WIDGET(gtk_builder_get_object(builder,"label2"));

  entry1=GTK_WIDGET(gtk_builder_get_object(builder,"entry1"));
  entry2=GTK_WIDGET(gtk_builder_get_object(builder,"entry2"));
  gtk_widget_show (window1);

  //MenuWin2
  MenuWin2=GTK_WIDGET(gtk_builder_get_object(builder,"MenuWin2"));
  fixed2=GTK_WIDGET(gtk_builder_get_object(builder,"fixed2"));
  rb1=GTK_WIDGET(gtk_builder_get_object(builder,"rb1"));
  rb2=GTK_WIDGET(gtk_builder_get_object(builder,"rb2"));
  rb3=GTK_WIDGET(gtk_builder_get_object(builder,"rb3"));
  b2=GTK_WIDGET(gtk_builder_get_object(builder,"b2"));
  b3=GTK_WIDGET(gtk_builder_get_object(builder,"b3"));
  entry3=GTK_WIDGET(gtk_builder_get_object(builder,"entry3"));


  //gtk_widget_show(MenuWin2);

  //Dia1(Invalid Input)
   Dia1=GTK_WIDGET(gtk_builder_get_object(builder,"Dia1"));
   b5=GTK_WIDGET(gtk_builder_get_object(builder,"b5"));

   //AppWin3
   AppWin3=GTK_WIDGET(gtk_builder_get_object(builder,"AppWin3"));
   b6=GTK_WIDGET(gtk_builder_get_object(builder,"b6"));
   b7=GTK_WIDGET(gtk_builder_get_object(builder,"b7"));
   b8=GTK_WIDGET(gtk_builder_get_object(builder,"b8"));
   b9=GTK_WIDGET(gtk_builder_get_object(builder,"b9"));
   b10=GTK_WIDGET(gtk_builder_get_object(builder,"b10"));
   b11=GTK_WIDGET(gtk_builder_get_object(builder,"b11"));
   b12=GTK_WIDGET(gtk_builder_get_object(builder,"b12"));
   b13=GTK_WIDGET(gtk_builder_get_object(builder,"b13"));
   b14=GTK_WIDGET(gtk_builder_get_object(builder,"b14"));
   b15=GTK_WIDGET(gtk_builder_get_object(builder,"b15"));
   img1=GTK_WIDGET(gtk_builder_get_object(builder,"img1"));
   label4=GTK_WIDGET(gtk_builder_get_object(builder,"label4"));
   label5=GTK_WIDGET(gtk_builder_get_object(builder,"label5"));
   img2=GTK_WIDGET(gtk_builder_get_object(builder,"img2"));
   label6=GTK_WIDGET(gtk_builder_get_object(builder,"label6"));


   //DOWin4
   DOWin4=GTK_WIDGET(gtk_builder_get_object(builder,"DOWin4"));
   d1=GTK_WIDGET(gtk_builder_get_object(builder,"d1"));
   d2=GTK_WIDGET(gtk_builder_get_object(builder,"d2"));
   d3=GTK_WIDGET(gtk_builder_get_object(builder,"d3"));
   d4=GTK_WIDGET(gtk_builder_get_object(builder,"d4"));
   d5=GTK_WIDGET(gtk_builder_get_object(builder,"d5"));
   d6=GTK_WIDGET(gtk_builder_get_object(builder,"d6"));
   d7=GTK_WIDGET(gtk_builder_get_object(builder,"d7"));
   d8=GTK_WIDGET(gtk_builder_get_object(builder,"d8"));
   d9=GTK_WIDGET(gtk_builder_get_object(builder,"d9"));
   d10=GTK_WIDGET(gtk_builder_get_object(builder,"d10"));
   d11=GTK_WIDGET(gtk_builder_get_object(builder,"d11"));
   d12=GTK_WIDGET(gtk_builder_get_object(builder,"d12"));
   d13=GTK_WIDGET(gtk_builder_get_object(builder,"d13"));
   d14=GTK_WIDGET(gtk_builder_get_object(builder,"d14"));
   d15=GTK_WIDGET(gtk_builder_get_object(builder,"d15"));
   d16=GTK_WIDGET(gtk_builder_get_object(builder,"d16"));
   d17=GTK_WIDGET(gtk_builder_get_object(builder,"d17"));
   d18=GTK_WIDGET(gtk_builder_get_object(builder,"d18"));
   label7=GTK_WIDGET(gtk_builder_get_object(builder,"label7"));
   label8=GTK_WIDGET(gtk_builder_get_object(builder,"label8"));
   label9=GTK_WIDGET(gtk_builder_get_object(builder,"label9"));
   label10=GTK_WIDGET(gtk_builder_get_object(builder,"label10"));
   label11=GTK_WIDGET(gtk_builder_get_object(builder,"label11"));
   label12=GTK_WIDGET(gtk_builder_get_object(builder,"label12"));
   label13=GTK_WIDGET(gtk_builder_get_object(builder,"label13"));
   label14=GTK_WIDGET(gtk_builder_get_object(builder,"label14"));
   img3=GTK_WIDGET(gtk_builder_get_object(builder,"img3"));
   img4=GTK_WIDGET(gtk_builder_get_object(builder,"img4"));
   b16=GTK_WIDGET(gtk_builder_get_object(builder,"b16"));


   //ChopS
    ChopS=GTK_WIDGET(gtk_builder_get_object(builder,"ChopS"));
    fixed6=GTK_WIDGET(gtk_builder_get_object(builder,"fixed6"));
    p1lh=GTK_WIDGET(gtk_builder_get_object(builder,"p1lh"));
    p2lh=GTK_WIDGET(gtk_builder_get_object(builder,"p2lh"));
    p1rh=GTK_WIDGET(gtk_builder_get_object(builder,"p1rh"));
    p2rh=GTK_WIDGET(gtk_builder_get_object(builder,"p2rh"));
    p1at=GTK_WIDGET(gtk_builder_get_object(builder,"p1at"));
    p2at=GTK_WIDGET(gtk_builder_get_object(builder,"p2at"));
    p1sp=GTK_WIDGET(gtk_builder_get_object(builder,"p1sp"));
    p2sp=GTK_WIDGET(gtk_builder_get_object(builder,"p2sp"));
    entry4=GTK_WIDGET(gtk_builder_get_object(builder,"entry4"));
    entry5=GTK_WIDGET(gtk_builder_get_object(builder,"entry5"));
    label20=GTK_WIDGET(gtk_builder_get_object(builder,"label20"));
    label21=GTK_WIDGET(gtk_builder_get_object(builder,"label21"));
    label22=GTK_WIDGET(gtk_builder_get_object(builder,"label22"));
    label23=GTK_WIDGET(gtk_builder_get_object(builder,"label23"));
    okb=GTK_WIDGET(gtk_builder_get_object(builder,"okb"));
    label24=GTK_WIDGET(gtk_builder_get_object(builder,"label24"));
    label25=GTK_WIDGET(gtk_builder_get_object(builder,"label25"));
    label15=GTK_WIDGET(gtk_builder_get_object(builder,"label15"));
    label16=GTK_WIDGET(gtk_builder_get_object(builder,"label16"));




  gtk_main ();
  return EXIT_SUCCESS;

  }

  void gameCaller(int x)
  {
        if(x==1||x==(int)'1')DOG();
        else if(x==2||x==(int)'2')TTTG();
        else if(x==3||x==(int)'3')CS();

  }

  //Window1
  void b1_clicked_cb(GtkButton *b)
  {

        gtk_widget_hide(window1);
        gtk_widget_show(MenuWin2);
        //char ch[256]=(const char*)gtk_entry_get_text (GTK_ENTRY(entry1));


        //GtkWidget *label2;
        //label2=(const gchar*)"Hello World";

        //gtk_label_set_text(GTK_LABEL(label1),(const gchar*)"Hello World");

        //gtk_button_set_label(GTK_BUTTON(button1),(const gchar*)label2);

        //gtk_widget_hide(window);
        //printf(tmp);

  }
  void on_entry1_changed(GtkEntry *e){

  sprintf(p1,gtk_entry_get_text(e));

  //gtk_entry_set_text(GTK_ENTRY(entry2),(const gchar*)tmp);

  }

  void on_entry2_changed(GtkEntry *e){

  sprintf(p2,gtk_entry_get_text(e));

  //gtk_entry_set_text(GTK_ENTRY(entry2),(const gchar*)tmp);

  }
    //MenuWin2

  void rb1_toggled_cb(GtkRadioButton *r){
    rfinal=1;
  }
  void rb2_toggled_cb(GtkRadioButton *r){
    rfinal=2;
  }
  void rb3_toggled_cb(GtkRadioButton *r){
    rfinal=3;
  }
  void b2_clicked_cb(GtkButton *b)//OK in Game Choice
    {
    gtk_widget_hide(MenuWin2);
    //gtk_widget_show(AppWin3);
    gameCaller(rfinal);
    //gtk_widget_show();
  }
  void on_entry3_changed(GtkEntry *e){

  sprintf(gch,gtk_entry_get_text(e));

  //gtk_entry_set_text(GTK_ENTRY(entry2),(const gchar*)tmp);

  }
  void b4_clicked_cb(GtkButton *b)//OK in Game Choice
  {
  //int x=atoi(gch);

    if(gch[0]>'3'||gch[0]<'1'||gch[1]!=NULL)
    {
        //gtk_entry_set_text(GTK_ENTRY(TryLeb),(const gchar*)gch);
        //gtk_label_set_text(GTK_LABEL (LebTry),(const gchar*) gch);
        gtk_widget_show(Dia1);
    }
    else
    {
        gtk_widget_hide(MenuWin2);
        //if(gch[0]=='1')gtk_widget_show(AppWin3);
        gameCaller((int)gch[0]);
    }
    //gtk_widget_show();
  }

  //Dia1

  void b5_clicked_cb(GtkButton *b)
  {
    gtk_widget_hide(Dia1);
  }

  //TTTGAme method
  void TTTG()
  {
    gtk_widget_show(AppWin3);
    gtk_widget_hide(img1);
    gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);





    }

  //AppWin3
   void b6_clicked_cb()
   {
        if(o6==false){

        if(TTcount%2==0){
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
         gtk_button_set_label(GTK_BUTTON(b6),(const gchar*) "X");
         q6=1;
         checkTTT(p2);}

        else {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
         gtk_button_set_label(GTK_BUTTON(b6),(const gchar*) "O");
         q6=2;
         checkTTT(p1);}

        o6=true;
        TTcount++;}

   }
   void b7_clicked_cb()
   {
        if(o7==false){

        if(TTcount%2==0){
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
         gtk_button_set_label(GTK_BUTTON(b7),(const gchar*) "X");
         q7=1;
         checkTTT(p2);}
        else {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
         gtk_button_set_label(GTK_BUTTON(b7),(const gchar*) "O");
         q7=2;
         checkTTT(p1);}

        o7=true;
        TTcount++;}

   }
   void b8_clicked_cb()
   {
        if(o8==false){

        if(TTcount%2==0){
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
         gtk_button_set_label(GTK_BUTTON(b8),(const gchar*) "X");
         q8=1;
         checkTTT(p2);}
        else {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
         gtk_button_set_label(GTK_BUTTON(b8),(const gchar*) "O");
         q8=2;
         checkTTT(p1);}

        o8=true;
        TTcount++;}

   }
   void b9_clicked_cb()
   {
        if(o9==false){

        if(TTcount%2==0){
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
         gtk_button_set_label(GTK_BUTTON(b9),(const gchar*) "X");
         q9=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b9),(const gchar*) "O");
        q9=2;
         checkTTT(p1);}

        o9=true;
        TTcount++;}

   }
   void b10_clicked_cb()
   {
        if(o10==false){

        if(TTcount%2==0) {
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
        gtk_button_set_label(GTK_BUTTON(b10),(const gchar*) "X");
        q10=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b10),(const gchar*) "O");
        q10=2;
         checkTTT(p1);}

        o10=true;
        TTcount++;}

   }
   void b11_clicked_cb()
   {
        if(o11==false){

        if(TTcount%2==0) {
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
        gtk_button_set_label(GTK_BUTTON(b11),(const gchar*) "X");
        q11=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b11),(const gchar*) "O");
        q11=2;
         checkTTT(p1);}

        o11=true;
        TTcount++;}

   }
   void b12_clicked_cb()
   {
        if(o12==false){

        if(TTcount%2==0) {
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
        gtk_button_set_label(GTK_BUTTON(b12),(const gchar*) "X");
        q12=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b12),(const gchar*) "O");
        q12=2;
         checkTTT(p1);}

        o12=true;
        TTcount++;}

   }
   void b13_clicked_cb()
   {
        if(o13==false){

        if(TTcount%2==0) {
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
        gtk_button_set_label(GTK_BUTTON(b13),(const gchar*) "X");
        q13=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b13),(const gchar*) "O");
        q13=2;
         checkTTT(p1);}

        o13=true;
        TTcount++;}

   }
   void b14_clicked_cb()
   {
        if(o14==false){

        if(TTcount%2==0) {
        gtk_widget_show(img1);
        gtk_widget_hide(img2);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p1);
        gtk_button_set_label(GTK_BUTTON(b14),(const gchar*) "X");
        q14=1;
         checkTTT(p2);}
        else  {
        gtk_widget_show(img2);
        gtk_widget_hide(img1);
        gtk_label_set_text(GTK_LABEL(label6),(const gchar*)p2);
        gtk_button_set_label(GTK_BUTTON(b14),(const gchar*) "O");
        q14=2;
         checkTTT(p1);}

        o14=true;
        TTcount++;}

   }
   void b15_clicked_cb()
   {
        gtk_widget_hide(AppWin3);
   }
   void checkTTT(char x[])
   {
        if((q6==q7&&q7==q8)||(q9==q10&&q10==q11)||(q12==q13&&q13==q14)||(q6==q9&&q9==q12)||(q7==q10&&q10==q13)||(q8==q11&&q11==q14)||(q6==q10&&q10==q14)||(q8==q10&&q10==q12))
        {
            o6 = true;o7=true;o8=true;o9=true;o10=true;o11=true;o12=true;o13=true;o14=true;o15=true;
            char k[200]=" Won The Game!!!";
            strcat(x,k);

            gtk_label_set_text(GTK_LABEL(label5),(const gchar*) x);

        }
        else if(TTcount>=8)gtk_label_set_text(GTK_LABEL(label5),(const gchar*) "           Match Draw!!!");
   }
    void DOG()
    {


        gtk_widget_show(DOWin4);
        gtk_widget_hide(label14);
        gtk_widget_hide(img3);
        gtk_widget_hide(img4);

        char turn[200]="First Turn, Please Roll the Dice ";
        strcat(turn,p1);
        gtk_label_set_text(GTK_LABEL(label11),(const gchar*)turn);

        gtk_label_set_text(GTK_LABEL(label7),(const gchar*)p1);
        gtk_label_set_text(GTK_LABEL(label8),(const gchar*)p2);


    }
    /*
    void fireNext(int x)
    {

        o16=true;

        if(x<=9){
            int k=dsum-x;
            last=k;
            switch(k)
            {
            case 1:d1_clicked_cb();break;
            case 2:d2_clicked_cb();break;
            case 3:d3_clicked_cb();break;
            case 4:d4_clicked_cb();break;
            case 5:d5_clicked_cb();break;
            case 6:d6_clicked_cb();break;
            case 7:d7_clicked_cb();break;
            case 8:d8_clicked_cb();break;
            case 9:d9_clicked_cb();break;
            }
        }
        else{
                x=x-9;
                int k=dsum-x;
                last=k+9;
                switch(k)
                {
                case 1:d10_clicked_cb();
                case 2:d11_clicked_cb();
                case 3:d12_clicked_cb();
                case 4:d13_clicked_cb();
                case 5:d14_clicked_cb();
                case 6:d15_clicked_cb();
                case 7:d16_clicked_cb();
                case 8:d17_clicked_cb();
                case 9:d18_clicked_cb();
                }
            }
            if(lastz==1&&oldsum!=dsum)
            {
            p1round=dsum;
            p1sum+=p1round;
            char io[5]="+";
            char iio[5]="+";
            sprintf(io,"%d",dsum);
            sprintf(iio,"%d",p1sum);
            gtk_widget_hide (label14);
            gtk_widget_hide(img3);
            gtk_widget_hide(img4);
            gtk_label_set_text(GTK_LABEL(label9),(const gchar*)iio);
            gtk_label_set_text(GTK_LABEL(label12),(const gchar*)io);
            }
            else if(lastz==2&&oldsum!=dsum)
            {
            p2round=dsum;
            p2sum+=p2round;
            char io[5]="+";
            char iio[5];
            sprintf(io,"%d",dsum);
            sprintf(iio,"%d",p2sum);
            gtk_widget_hide (label14);
            gtk_widget_hide(img3);
            gtk_widget_hide(img4);
            gtk_label_set_text(GTK_LABEL(label10),(const gchar*)iio);
            gtk_label_set_text(GTK_LABEL(label13),(const gchar*)io);
            }
            oldsum=dsum;

    }

    */

    int isValid(int x)
    {
        int ct=0;
        if(x<=9)
        {
            for(int i=1;i<=9;i++)
            {
                for(int j=i;j<=9;j++)
                {
                    if((i+j==dsum)&&(!z[i]&&!z[j])&&(i!=j))
                    {
                        ct++;
                        dd[i]=true;
                        dd[j]=true;
                    }
                }
            }
            if(dsum<=9){if(!z[dsum])ct++;}
        }
        else
        {
            for(int i=1;i<=9;i++)
            {
                for(int j=i;j<=9;j++)
                {
                    if((i+j==dsum)&&(!z2[i]&&!z2[j])&&(i!=j))
                    {
                        ct++;
                        dd2[i]=true;
                        dd2[j]=true;
                    }
                }
            }
            if(dsum<=9){if(!z2[dsum])ct++;}
        }


        if(ct>0)return 1;
        else return 0;
    }

    void b16_clicked_cb()//DICE BUTTON
    {
        if(zab1&&zab2){
            z[0]=false;z2[0]=false;
                if(p1sum>p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                else if(p1sum<p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                else gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Its a draw!!!!");

                gtk_widget_hide(label11);
                o16=false;
            }
        else if(o16);
        {
            //Dice Display
            int u2;
            int y2;
            srand(time(0));
            int u;
            int y;
            while(true){u=rand();u=u%10;if(u>0&&u<=6&&u!=u2)break;}
            while(true){y=rand();y=y%10;if(y>0&&y<=6&&y!=y2)break;}
            gchar cq1[8]=".png";
            gchar cq2[8]=".png";
            dsum=u+y;
            gchar u1[200];
            gchar y1[200];
            u2=u;
            y2=y;
            sprintf(u1,"%d",u);
            sprintf(y1,"%d",y);
            strcat(u1,cq1);
            strcat(y1,cq2);
            gtk_image_set_from_file(GTK_IMAGE(img3),(const gchar*) u1);
            gtk_image_set_from_file(GTK_IMAGE(img4),(const gchar*) y1);


            if(zab1&&zab2){
            z[0]=false;z2[0]=false;
                if(p1sum>p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                else if(p1sum<p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                else gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Its a draw!!!!");

                gtk_widget_hide(label11);
                o16=false;
            }
            else if(zab1){z[0]=false;z2[0]=true;}
            else if(zab2){z[0]=true;z2[0]=false;}
            else if(!z[0]&&!z2[0])z[0]=true;

            //Game Initialization
            char turn[200]="Next Turn: ";
            char now[200]="Click Options Now: ";




            if(z[0])
            {strcat(turn,p2);strcat(now,p1);}
            else {strcat(turn,p1);strcat(now,p2);}



            gtk_widget_show(img3);
            gtk_widget_show(img4);

            gtk_label_set_text(GTK_LABEL(label11),(const gchar*)turn);
            gtk_widget_show (label14);
            gtk_label_set_text(GTK_LABEL(label14),(const gchar*)now);

            o16=false;//Disable Dice


            for(int i=0;i<9;i++){dd[i]=false;dd2[i]=false;}

                if(isValid(u)!=1&&z[0])
                {
                    z[0]=false;
                    z2[0]=true;
                    gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "No Moves Left For Player On Top!!");
                    o16=true;
                    zab1=true;

                    if(zab1&&zab2){
                    z[0]=false;z2[0]=false;
                    if(p1sum>p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                    else if(p1sum<p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                    else gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Its a draw!!!!");
                    gtk_widget_hide(label11);

                    o16=false;
                    }
                }
                else if(isValid(u+9)!=1&&z2[0])
                {
                    z2[0]=false;
                    z[0]=true;
                    gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "No Moves Left For Player On Bottom!!");
                    o16=true;
                    zab2=true;

                    if(zab1&&zab2){
                    z[0]=false;z2[0]=false;
                    if(p1sum>p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                    else if(p1sum<p2sum)gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Player 1(on Top) wins!!!!");
                    else gtk_label_set_text(GTK_LABEL(label14),(const gchar*) "Its a draw!!!!");

                    gtk_widget_hide(label11);

                    o16=false;

                    }

                }



        }
    }
    /*
    int checkV(int x)
    {

        if(last==x)return 1;

        else if(x<=9)
        {
            if(dsum==x)
            {
                if(!z[x])return 1;
                else return 0;
            }
            int q=dsum-x;
            if(q<1||q>9)return 0;

            if(z[q])return 0;
            else return 1;
        }
        else
        {
            if(dsum==(x-9))
            {
                if(!z2[dsum])return 1;
                else return 0;
            }

            int q=dsum-(x-9);
            if(q<1||q>9)return 0;

            if(z2[q])return 0;
            else return 1;
        }
    }

    */

    /*
    void d1_clicked_cb()
    {
        if(dsum<1||dsum==2);
        else if(!dd[1]);

            else if((z[0]&&!z[1])||(last==1&&!z[1]))
            {
                    z[0]=false;
                    //z2[0]=true;
                    gtk_button_set_label(GTK_BUTTON(d1),(const gchar*) "0");
                    z[1]=true;
                    last=100;
                    fireNext(1);
            }
    }

    void d2_clicked_cb()
    {
        if(dsum<2||dsum==4);
        else if(!dd[2]);
        //else if(last!=2&&checkV(2)==0);

            else if((z[0]&&!z[2])||(last==2&&!z[2]))
        {
                z[0]=false;
                //z2[0]=true;
                gtk_button_set_label(GTK_BUTTON(d2),(const gchar*) "0");
                z[2]=true;
                last=100;
                fireNext(2);
        }

    }

    void d3_clicked_cb()
    {

            if(dsum<3||dsum==6);
           else if(!dd[3]);
            //else if(last!=3&&checkV(3)==0);

            else if((z[0]&&!z[3])||(last==3&&!z[3]))
            {
                    z[0]=false;
                    //z2[0]=true;
                    gtk_button_set_label(GTK_BUTTON(d3),(const gchar*) "0");
                    z[3]=true;
                    last=100;
                    fireNext(3);
            }
    }

    void d4_clicked_cb()
    {
            if(dsum<4||dsum==8);
            else if(!dd[4]);
            //else if(last!=4&&checkV(4)==0);

            else if((z[0]&&!z[4])||(last==4&&!z[4]))
            {
                    z[0]=false;
                    //z2[0]=true;
                    gtk_button_set_label(GTK_BUTTON(d4),(const gchar*) "0");
                    z[4]=true;
                    last=100;
                    fireNext(4);
            }
    }

    void d5_clicked_cb()
    {
        if(dsum<5||dsum==10);
        else if(!dd[5]);
        //else if(last!=5&&checkV(5)==0);
            else if((z[0]&&!z[5])||(last==5&&!z[5]))
        {
                z[0]=false;
                //z2[0]=true;
                gtk_button_set_label(GTK_BUTTON(d5),(const gchar*) "0");
                z[5]=true;
                last=100;
                fireNext(5);
        }
    }

    void d6_clicked_cb()
    {
        if(dsum<6||dsum==12);
       else if(!dd[6]);
        //else if(last!=6&&checkV(6)==0);

            else if((z[0]&&!z[6])||(last==6&&!z[6]))
        {
                z[0]=false;
                //z2[0]=true;
                z[6]=true;
                gtk_button_set_label(GTK_BUTTON(d6),(const gchar*) "0");
                last=100;
                fireNext(6);
        }
    }

    void d7_clicked_cb()
    {
        if(dsum<7||dsum==14);
        else if(!dd[7]);
        //else if(last!=7&&checkV(7)==0);

            else if((z[0]&&!z[7])||(last==7&&!z[7]))
        {
                z[0]=false;
                //z2[0]=true;
                gtk_button_set_label(GTK_BUTTON(d7),(const gchar*) "0");
                z[7]=true;
                last=100;
                fireNext(7);
        }
    }

    void d8_clicked_cb()
    {
        if(dsum<8||dsum==16);
        else if(!dd[8]);
        //else if(last!=8&&checkV(8)==0);
            else if((z[0]&&!z[8])||(last==8&&!z[8]))
        {
                z[0]=false;
                //z2[0]=true;
                z[8]=true;
                gtk_button_set_label(GTK_BUTTON(d8),(const gchar*) "0");
                last=100;
                fireNext(8);
        }
    }

    void d9_clicked_cb()
    {
        if(dsum<9||dsum==18);
        else if(!dd[9]);
        //else if(last!=9&&checkV(9)==0);
        else if((z[0]&&!z[9])||(last==9&&!z[9]))
        {
                z[0]=false;
                //z2[0]=true;
                z[9]=true;
                gtk_button_set_label(GTK_BUTTON(d9),(const gchar*) "0");
                last=100;
                fireNext(9);
        }
    }

   //Z2
    void d10_clicked_cb()
    {
        if(dsum<1||dsum==2);
        else if(!dd2[1]);
        //else if(last!=10&&checkV(10)==0);

            else if((z2[0]&&!z2[1])||(last==10&&!z2[1]))
        {
                //z[0]=true;
                z2[0]=false;

                z2[1]=true;
                gtk_button_set_label(GTK_BUTTON(d10),(const gchar*) "0");
                last=100;
                fireNext(10);
        }
    }
    void d11_clicked_cb()
    {
        if(dsum<2||dsum==4);
        else if(!dd2[2]);
        //else if(last!=11&&checkV(11)==0);

            else if((z2[0]&&!z2[2])||(last==11&&!z2[2]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[2]=true;
                gtk_button_set_label(GTK_BUTTON(d11),(const gchar*) "0");
                last=100;
                fireNext(11);
        }
    }
    void d12_clicked_cb()
    {
        if(dsum<3||dsum==6);
        else if(!dd2[3]);
        //else if(last!=12&&checkV(12)==0);

            else if((z2[0]&&!z2[3])||(last==12&&!z2[3]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[3]=true;
                gtk_button_set_label(GTK_BUTTON(d12),(const gchar*) "0");
                last=100;
                fireNext(12);
        }
    }
    void d13_clicked_cb()
    {
        if(dsum<4||dsum==8);
        else if(!dd2[4]);
        //else if(last!=13&&checkV(13)==0);


            else if((z2[0]&&!z2[4])||(last==13&&!z2[4]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[4]=true;
                gtk_button_set_label(GTK_BUTTON(d13),(const gchar*) "0");
                last=100;
                fireNext(13);
        }
    }
    void d14_clicked_cb()
    {
        if(dsum<5||dsum==10);
        else if(!dd2[5]);
        //else if(last!=14&&checkV(14)==0);

            else if((z2[0]&&!z2[5])||(last==14&&!z2[5]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[5]=true;
                gtk_button_set_label(GTK_BUTTON(d14),(const gchar*) "0");
                last=100;
                fireNext(14);
        }
    }
    void d15_clicked_cb()
    {
        if(dsum<6||dsum==12);
        else if(!dd2[6]);
        //else if(last!=15&&checkV(15)==0);


            else if((z2[0]&&!z2[6])||(last==15&&!z2[6]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[6]=true;
                gtk_button_set_label(GTK_BUTTON(d15),(const gchar*) "0");
                last=100;
                fireNext(15);
        }
    }
    void d16_clicked_cb()
    {
        if(dsum<7||dsum==4);
        else if(!dd2[7]);
        //else if(last!=16&&checkV(16)==0);


            else if((z2[0]&&!z2[7])||(last==16&&!z2[7]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[7]=true;
                gtk_button_set_label(GTK_BUTTON(d16),(const gchar*) "0");
                last=100;
                fireNext(16);
        }
    }
    void d17_clicked_cb()
    {
        if(dsum<8||dsum==16);
        else if(!dd2[8]);
        //else if(last!=17&&checkV(17)==0);


            else if((z2[0]&&!z2[8])||(last==17&&!z2[8]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[8]=true;
                gtk_button_set_label(GTK_BUTTON(d17),(const gchar*) "0");
                last=100;
                fireNext(17);
        }
    }
    void d18_clicked_cb()
    {
        if(dsum<9||dsum==18)return;
        else if(!dd2[9]);
        //else if(last!=18&&checkV(18)==0)return;

            else if((z2[0]&&!z2[9])||(last==18&&!z2[9]))
        {
                //z[0]=true;
                z2[0]=false;
                z2[9]=true;
                gtk_button_set_label(GTK_BUTTON(d18),(const gchar*) "0");
                last=100;
                fireNext(18);
        }
    }
    */

void setLab(int button,int player)
{
    if(player==1)
    {

            if(button==1)gtk_button_set_label(GTK_BUTTON(d1),(const gchar*) "0");
            else if(button==2)gtk_button_set_label(GTK_BUTTON(d2),(const gchar*) "0");
            else if(button==3)gtk_button_set_label(GTK_BUTTON(d3),(const gchar*) "0");
            else if(button==4)gtk_button_set_label(GTK_BUTTON(d4),(const gchar*) "0");
            else if(button==5)gtk_button_set_label(GTK_BUTTON(d5),(const gchar*) "0");
            else if(button==6)gtk_button_set_label(GTK_BUTTON(d6),(const gchar*) "0");
            else if(button==7)gtk_button_set_label(GTK_BUTTON(d7),(const gchar*) "0");
            else if(button==8)gtk_button_set_label(GTK_BUTTON(d8),(const gchar*) "0");
            else if(button==9)gtk_button_set_label(GTK_BUTTON(d9),(const gchar*) "0");


    }
     if(player==2)
    {
            if(button==1)gtk_button_set_label(GTK_BUTTON(d10),(const gchar*) "0");
            else if(button==2)gtk_button_set_label(GTK_BUTTON(d11),(const gchar*) "0");
            else if(button==3)gtk_button_set_label(GTK_BUTTON(d12),(const gchar*) "0");
            else if(button==4)gtk_button_set_label(GTK_BUTTON(d13),(const gchar*) "0");
            else if(button==5)gtk_button_set_label(GTK_BUTTON(d14),(const gchar*) "0");
            else if(button==6)gtk_button_set_label(GTK_BUTTON(d15),(const gchar*) "0");
            else if(button==7)gtk_button_set_label(GTK_BUTTON(d16),(const gchar*) "0");
            else if(button==8)gtk_button_set_label(GTK_BUTTON(d17),(const gchar*) "0");
            else if(button==9)gtk_button_set_label(GTK_BUTTON(d18),(const gchar*) "0");
    }

}
void DoEv(int click,int player)
{
    int next=dsum-click;
    if(next<=9&&next>=0&&next!=click)
    {

        if(player==1)
        {
            if(next==0)
            {
                if(!z[click])
                {
                    z[click]=true;
                    setLab(click,1);
                    z[0]=false;
                    z2[0]=true;
                    o16=true;


                    p1round=dsum;
                    p1sum+=p1round;
                    char io[5]="+";
                    char iio[5]="+";
                    sprintf(io,"%d",dsum);
                    sprintf(iio,"%d",p1sum);
                    gtk_widget_hide (label14);
                    gtk_widget_hide(img3);
                    gtk_widget_hide(img4);
                    gtk_label_set_text(GTK_LABEL(label9),(const gchar*)iio);
                    gtk_label_set_text(GTK_LABEL(label12),(const gchar*)io);
                }
            }
            else if(!z[click]&&!z[next])
            {
                z[click]=true;
                setLab(click,1);
                z[next]=true;
                setLab(next,1);
                z[0]=false;
                z2[0]=true;
                o16=true;


                p1round=dsum;
                p1sum+=p1round;
                char io[5]="+";
                char iio[5]="+";
                sprintf(io,"%d",dsum);
                sprintf(iio,"%d",p1sum);
                gtk_widget_hide (label14);
                gtk_widget_hide(img3);
                gtk_widget_hide(img4);
                gtk_label_set_text(GTK_LABEL(label9),(const gchar*)iio);
                gtk_label_set_text(GTK_LABEL(label12),(const gchar*)io);

            }
        }

        if(player==2)
        {
            if(next==0)
            {
                if(!z2[click])
                {
                    z2[click]=true;
                    setLab(click,2);
                    z2[0]=false;
                    z[0]=true;
                    o16=true;


                    p2round=dsum;
                    p2sum+=p2round;
                    char io[5]="+";
                    char iio[5];
                    sprintf(io,"%d",dsum);
                    sprintf(iio,"%d",p2sum);
                    gtk_widget_hide (label14);
                    gtk_widget_hide(img3);
                    gtk_widget_hide(img4);
                    gtk_label_set_text(GTK_LABEL(label10),(const gchar*)iio);
                    gtk_label_set_text(GTK_LABEL(label13),(const gchar*)io);
                }
            }
            else if(!z2[click]&&!z2[next])
            {
                z2[click]=true;
                setLab(click,2);
                z2[next]=true;
                setLab(next,2);
                z2[0]=false;
                z[0]=true;
                o16=true;


                p2round=dsum;
                p2sum+=p2round;
                char io[5]="+";
                char iio[5];
                sprintf(io,"%d",dsum);
                sprintf(iio,"%d",p2sum);
                gtk_widget_hide (label14);
                gtk_widget_hide(img3);
                gtk_widget_hide(img4);
                gtk_label_set_text(GTK_LABEL(label10),(const gchar*)iio);
                gtk_label_set_text(GTK_LABEL(label13),(const gchar*)io);

            }
        }
    }

}

void d1_clicked_cb(){DoEv(1,1);}
void d2_clicked_cb(){DoEv(2,1);}
void d3_clicked_cb(){DoEv(3,1);}
void d4_clicked_cb(){DoEv(4,1);}
void d5_clicked_cb(){DoEv(5,1);}
void d6_clicked_cb(){DoEv(6,1);}
void d7_clicked_cb(){DoEv(7,1);}
void d8_clicked_cb(){DoEv(8,1);}
void d9_clicked_cb(){DoEv(9,1);}

void d10_clicked_cb(){DoEv(1,2);}
void d11_clicked_cb(){DoEv(2,2);}
void d12_clicked_cb(){DoEv(3,2);}
void d13_clicked_cb(){DoEv(4,2);}
void d14_clicked_cb(){DoEv(5,2);}
void d15_clicked_cb(){DoEv(6,2);}
void d16_clicked_cb(){DoEv(7,2);}
void d17_clicked_cb(){DoEv(8,2);}
void d18_clicked_cb(){DoEv(9,2);}

void CS()
{
    gtk_widget_show(ChopS);

}


