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

    // Same as GetTrayIcon, unless the taskbar is pinned to the bundled brand icon.
    QPixmap GetTaskbarIcon(TrayIconStatus status);
} // namespace Icon
