/*
  g_signal_connect (window, "delete_event", G_CALLBACK (gtk_main_quit), NULL);
*/
#include <gtk/gtk.h>

int
main(int argc, char **argv)
{
  GtkWidget *window;
  GtkWidget *image;

  gtk_init (&argc, &argv);

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  g_signal_connect (window, "delete_event", G_CALLBACK (gtk_main_quit), NULL);
  gtk_window_set_decorated (GTK_WINDOW (window), FALSE);

  image = gtk_image_new_from_file ("romeo.png");
  gtk_container_add (GTK_CONTAINER (window),
		     image);

  gtk_widget_show_all (window);

  gtk_main ();
}
