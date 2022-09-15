##########
# 完成lib 数据结构结构设计
# 完成lib库中所有关于unit的定义读取，返回 json格式
# 完成lib中所有所有cell定义读取，返回json格式
# 完成lib中所有cellLeakagePower列表读取(因为一个cell会包含多个leakage_power，所以每个leakage_power的数据结构中会同时包含when/related_pg_pin/values这三个数据以示区分)
# 完成lib中所有pin信息列表读取(library file中所有pin层级的timing和internal_power信息，最小单位是timing table和internal_power table中所包含的index及values数据)

from liberty.parser import parse_liberty
import gzip
import re
import json


class Liberty:
    def __init__(self):
        self.content = []
        self.libDec = {
            'library': ('value', ''),
            'delay_model': ('value', ''),
            'input_threshold_pct_fall': ('value', ''),
            'input_threshold_pct_rise': ('value', ''),
            'slew_derate_from_library': ('value', ''),
            'nom_process': ('value', ''),
            'nom_temperature': ('value', ''),
            'nom_voltage': ('value', ''),
            'voltage_map': ('value', ''),
            'capacitive_load_unit': ('value', ''),
            'voltage_unit': ('value', ''),
            'current_unit': ('value', ''),
            'time_unit': ('value', ''),
            'operating_conditions': ('callback', self.parse_as_undefgroup),
            'wire_load': ('callback', self.parse_as_undefgroup),
            'wire_load_selection': ('callback', self.parse_as_undefgroup),
            'lu_table_template': ('callback', self.parse_as_undefgroup),
            'power_lut_template': ('callback', self.parse_as_undefgroup),
            'normalized_driver_waveform': ('callback', self.parse_as_undefgroup),
            'cell': ('callback', self.parse_as_cell),
            '_L': ('bos', ''),
            '_R': ('eos', '')
        }
        self.unitdec = {
            'time_unit': ('value', ''),
            'voltage_unit': ('value', ''),
            'current_unit': ('value', ''),
            'capacitive_load_unit': ('value', ''),
            'pulling_resistance_unit': ('value', ''),
            'leakage_power_unit': ('value', '')}


# Read and parse a library.
library = parse_liberty(open(liberty_file).read())

}

    # Format the library.
    print(str(library))

    # Loop through all cells.
    for cell_group in library.get_groups('cell'):
    name = cell_group.args[0]
    print(cell_name)

    # Loop through all pins of the cell.
    for pin_group in library.get_groups('pin'):
        pin_name = pin_gropu.args[0]
        print(pin_name)

        # Access a pin attribute.
        some_attribute = pin_group['some_attribute']

# lib structure
group_name(args) {
simple_attribute: 1.23;
other_group_name(args) {
    other_simple_attribute: 2.34;
    complex_attribute (1.23, 2.34);}
}
# read array and timing arc convert to numpy structure
    some_group.get_array('attribute_name')
