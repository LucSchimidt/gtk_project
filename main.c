#include <gtk-3.0/gtk/gtk.h>


//===========================================================================================
// Eventos com os botoes:

G_MODULE_EXPORT void on_button_clicked(GtkWidget *widget, gpointer data) {
    GtkBuilder *builder;
    GtkWidget *window;

    // Cria um GtkBuilder
    builder = gtk_builder_new();
    // Carrega a interface gráfica do arquivo XML
    gtk_builder_add_from_file(builder, "C:\\Programming\\C\\gtk_project\\interfaces\\secondary.ui", NULL);
    // Obtem a janela principal
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));

    gtk_builder_connect_signals(builder, NULL);



    // Conecta o sinal "destroy" da janela para sair do loop do GTK
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);
    gtk_main();

    // Libera o GtkBuilder
    g_object_unref(builder);


    printf("Este botao foi clicado!\n");
}


//===========================================================================================


int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;

    // Inicializa o GTK
    gtk_init(&argc, &argv);

    // Cria um GtkBuilder
    builder = gtk_builder_new();
    // Carrega a interface gráfica do arquivo XML
    gtk_builder_add_from_file(builder, "C:\\Programming\\C\\gtk_project\\interfaces\\interface.ui", NULL);
    // Obtem a janela principal
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));

    gtk_builder_connect_signals(builder, NULL);



    // Conecta o sinal "destroy" da janela para sair do loop do GTK
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);
    gtk_main();

    // Libera o GtkBuilder
    g_object_unref(builder);

    return 0;
}
