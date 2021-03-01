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



char p1[256]="Player 1",p2[256]="Player ",gch[1];//player names
bool o6 = false,o7=false,o8=false,o9=false,o10=false,o11=false,o12=false,o13=false,o14=false,o15=false;
int TTcount;
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



  gtk_main ();
  return EXIT_SUCCESS;

  }

  void gameCaller(int x)
  {
        if(x==1||x==(int)'1')TTTG();
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
    gtk_widget_show(AppWin3);
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
    gtk_widget_hide(img2);




    }

  //AppWin3
   void b6_clicked_cb()
   {
        if(o6==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b6),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b6),(const gchar*) "O");

        o6=true;
        TTcount++;}

   }
   void b7_clicked_cb()
   {
        if(o7==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b7),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b7),(const gchar*) "O");

        o7=true;
        TTcount++;}

   }
   void b8_clicked_cb()
   {
        if(o8==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b8),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b8),(const gchar*) "O");

        o8=true;
        TTcount++;}

   }
   void b9_clicked_cb()
   {
        if(o9==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b9),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b9),(const gchar*) "O");

        o9=true;
        TTcount++;}

   }
   void b10_clicked_cb()
   {
        if(o10==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b10),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b10),(const gchar*) "O");

        o10=true;
        TTcount++;}

   }
   void b11_clicked_cb()
   {
        if(o11==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b11),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b11),(const gchar*) "O");

        o11=true;
        TTcount++;}

   }
   void b12_clicked_cb()
   {
        if(o12==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b12),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b12),(const gchar*) "O");

        o12=true;
        TTcount++;}

   }
   void b13_clicked_cb()
   {
        if(o13==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b13),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b13),(const gchar*) "O");

        o13=true;
        TTcount++;}

   }
   void b14_clicked_cb()
   {
        if(o14==false){

        if(TTcount%2==0) gtk_button_set_label(GTK_BUTTON(b14),(const gchar*) "X");
        else  gtk_button_set_label(GTK_BUTTON(b14),(const gchar*) "O");

        o14=true;
        TTcount++;}

   }


   void b15_clicked_cb()
   {
        gtk_widget_hide(AppWin3);
   }

