#pragma once

#include <QPixmap>

namespace Icon {

    enum TrayIconStatus {
        NONE,
        RUNNING,
        SYSTEM_PROXY,
        VPN,
        DNS,
        SYSTEM_PROXY_DNS,
    };

    QPixmap GetTrayIcon(TrayIconStatus status);

    // Loads the bundled brand icon directly, bypassing any custom icon lookup.
    QPixmap GetBrandIcon();
} // namespace Icon
