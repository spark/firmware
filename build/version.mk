VERSION_STRING ?= 2.0.1

# PRODUCT_FIRMWARE_VERSION reported by default
# FIXME: Unclear if this is used, PRODUCT_FIRMWARE_VERSION defaults to 65535 every release
VERSION = 2011

CFLAGS += -DSYSTEM_VERSION_STRING=$(VERSION_STRING)
