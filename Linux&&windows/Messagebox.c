#include <gtk/gtk.h>

// For Windows && Linux //

int main(int argc, char *argv[]) 
{
    gtk_init(&argc, &argv);

    GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_MODAL, 
                      GTK_MESSAGE_INFO, GTK_BUTTONS_OK, 
                      "If you see this message, you should subscribe!");
    
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
    
    return 0;
}