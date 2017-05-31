#include "ContInPort.h"


ContInPort::ContInPort(MUSIC::Setup* setup, char* port_name, int data_size)
{

    port = setup->publishContInput(port_name);

    data = new double[data_size];
    for (int i = 0; i < data_size; ++i)
    {
        data[i] = 0.;
    }

    // Declare where in memory to put command_data
    MUSIC::ArrayData dmap(data,
      		 MPI::DOUBLE,
      		 0,
      		 data_size);
    port->map (&dmap, 0., 1, false);
 
}
