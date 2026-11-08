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

// Function: entry_001b1704
// Address: 0x1b1704 - 0x1b170c
void entry_001b1704_0x1b1704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1704_0x1b1704");
#endif

    ctx->pc = 0x1b1704u;

    // 0x1b1704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1708: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1b1708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    ctx->pc = 0x1b170cu;
}
