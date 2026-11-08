#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0016b7ec
// Address: 0x16b7ec - 0x16b7f0
void entry_0016b7ec_0x16b7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7ec_0x16b7ec");
#endif

    ctx->pc = 0x16b7ecu;

    // 0x16b7ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16b7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x16b7f0u;
}
