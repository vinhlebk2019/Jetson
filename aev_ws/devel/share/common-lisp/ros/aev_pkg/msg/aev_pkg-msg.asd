
(cl:in-package :asdf)

(defsystem "aev_pkg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "driving_mode_msg" :depends-on ("_package_driving_mode_msg"))
    (:file "_package_driving_mode_msg" :depends-on ("_package"))
    (:file "ecu_feedback_msg" :depends-on ("_package_ecu_feedback_msg"))
    (:file "_package_ecu_feedback_msg" :depends-on ("_package"))
    (:file "gui_msg" :depends-on ("_package_gui_msg"))
    (:file "_package_gui_msg" :depends-on ("_package"))
    (:file "lane_detection_msg" :depends-on ("_package_lane_detection_msg"))
    (:file "_package_lane_detection_msg" :depends-on ("_package"))
    (:file "mpc_msg" :depends-on ("_package_mpc_msg"))
    (:file "_package_mpc_msg" :depends-on ("_package"))
    (:file "object_detection_msg" :depends-on ("_package_object_detection_msg"))
    (:file "_package_object_detection_msg" :depends-on ("_package"))
    (:file "radar_msg" :depends-on ("_package_radar_msg"))
    (:file "_package_radar_msg" :depends-on ("_package"))
    (:file "system_monitor_msg" :depends-on ("_package_system_monitor_msg"))
    (:file "_package_system_monitor_msg" :depends-on ("_package"))
  ))