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
GtkWidget *img3;
GtkWidget *img4;
GtkWidget *b16;



char p1[256]="Player1 ",p2[256]="Player2 ",gch[1];//player names
bool o6 = false,o7=false,o8=false,o9=false,o10=false,o11=false,o12=false,o13=false,o14=false,o15=false;
int q6=6,q7=7,q8=8,q9=9,q10=10,q11=11,q12=12,q13=13,q14=14;
int TTcount=0;
//const gchar XO[3];

int rfinal=1;
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
   img3=GTK_WIDGET(gtk_builder_get_object(builder,"img3"));
   img4=GTK_WIDGET(gtk_builder_get_object(builder,"img4"));
   b16=GTK_WIDGET(gtk_builder_get_object(builder,"b16"));




  gtk_main ();
  return EXIT_SUCCESS;

  }

  void gameCaller(int x)
  {
        if(x==1||x==(int)'1')DOG();
        else if(x==2||x==(int)'2')TTTG();

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

    }
    void b16_clicked_cb()
    {
        int u2;
        int y2;
        srand(time(0));
        int u;
        int y;
        while(true){u=rand();u=u%10;if(u>0&&u<=6&&u!=u2)break;}
        while(true){y=rand();y=y%10;if(y>0&&y<=6&&y!=y2)break;}

        gchar cq1[8]=".png";
        gchar cq2[8]=".png";

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

    }
