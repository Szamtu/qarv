#pragma once

#include "decoder.h"

namespace QArv
{

class BayerGR12 : public QObject, public QArvPixelFormat {
    Q_OBJECT
    Q_INTERFACES(QArvPixelFormat)
    Q_PLUGIN_METADATA(IID "si.ad-vega.qarv.BayerGR12")

public:
    ArvPixelFormat pixelFormat() override { return ARV_PIXEL_FORMAT_BAYER_GR_12; }
    QArvDecoder* makeDecoder(QSize size) override {
        return new BayerDecoder<ARV_PIXEL_FORMAT_BAYER_GR_12>(size);
    }
};

}
