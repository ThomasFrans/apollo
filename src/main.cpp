
#include <cstdio>

#include "apollo-application.h"

int main(int argc, char* argv[])
{
    Glib::RefPtr<Gtk::Application> app = Apollo::Application::create("org.thomas.apollo");
    
    return app->make_window_and_run<Gtk::ApplicationWindow>(argc, argv);
}
