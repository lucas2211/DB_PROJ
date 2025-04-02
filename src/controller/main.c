#include "hardware.h"
#include "security.h"
#include "interface.h"

int main() {
    detect_hardware();
    apply_security_level();
    render_interface();
    return 0;
}
