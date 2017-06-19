#include "ThresholdAdapter.h"

int
main(int argc, char** argv)
{

    ThresholdAdapter* adapter = new ThresholdAdapter();
    adapter->init(argc, argv);

    adapter->run(false);
    
    adapter->finalize();
}

ThresholdAdapter::ThresholdAdapter()
{
    port_in = new ContInPort();
    port_out = new ContOutPort();
}

void ThresholdAdapter::init(int argc, char** argv)
{
    threshold = DEFAULT_THRESHOLD;

    Adapter::init(argc, argv, "Threshold");

    // config needed for this specific adapter
    setup->config("threshold", &threshold);
}


void
ThresholdAdapter::tick()
{
    for (int i = 0; i < port_in->data_size; ++i)
    {
        if (port_in->data[i] < threshold)
            port_out->data[i] = 0.;
        else
            port_out->data[i] = 1.;
    }
}


