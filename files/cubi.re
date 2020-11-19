acPostProcForParallelTransferReceived(*leaf_resource) {
#       writeLine("serverLog", "Enter parallel");
        msi_update_unixfilesystem_resource_free_space(*leaf_resource);
}

acPostProcForDataCopyReceived(*leaf_resource) {
#       writeLine("serverLog", "Enter copy");
        msi_update_unixfilesystem_resource_free_space(*leaf_resource);
}

