TEMPLATE = subdirs

SUBDIRS += \
	DSPQuick \
	DSPCore

DSPQuick.depends += DSPCore
