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

// Function: entry_00189b28
// Address: 0x189b28 - 0x189b2c
void entry_00189b28_0x189b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b28_0x189b28");
#endif

    ctx->pc = 0x189b28u;

    // 0x189b28: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x189b28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x189b2cu;
}
