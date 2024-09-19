# Benchmarks in gem5
This repository contains C test programs used as benchmarks in gem5 across different CPU models. By analyzing the simulation statistics, we can derive key performance metrics. Below is an overview of the benchmarks and the performance parameters evaluated:

## Overview
Purpose: To assess the performance of various CPU models in gem5 by executing C tests.
Metrics Analyzed: The benchmarks focus on several critical performance parameters that help evaluate the efficiency and effectiveness of CPU architectures.
## Key Performance Parameters
CPI (Cycles Per Instruction):

Measures the average number of clock cycles each instruction takes to execute.
A lower CPI indicates better performance.
IPC (Instructions Per Cycle):

Represents the number of instructions executed in one clock cycle.
Higher IPC values suggest improved efficiency in processing instructions.
Cache Hit Rate:

The ratio of cache hits to the total memory accesses.
A higher cache hit rate indicates effective use of the cache, leading to faster data retrieval.
Cache Miss Rate:

The ratio of cache misses to total memory accesses.
Lower cache miss rates are desirable as they signify that most data requests are served from the cache rather than slower main memory.
Branch Predictor Performance:

Evaluates how effectively the CPU predicts the outcome of branch instructions.
Good branch predictor performance leads to fewer pipeline stalls and improved overall throughput.
