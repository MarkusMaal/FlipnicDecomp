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

// Function: entry_001b12c8
// Address: 0x1b12c8 - 0x1b12e8
void entry_001b12c8_0x1b12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12c8_0x1b12c8");
#endif

    ctx->pc = 0x1b12c8u;

    // 0x1b12c8: 0x8e8402dc  lw          $a0, 0x2DC($s4)
    ctx->pc = 0x1b12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 732)));
    // 0x1b12cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b12d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B12D0u;
    {
        const bool branch_taken_0x1b12d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b12d0) {
            ctx->pc = 0x1B12F8u;
            return;
        }
    }
    ctx->pc = 0x1B12D8u;
    // 0x1b12d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B12D8u;
    {
        const bool branch_taken_0x1b12d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12d8) {
            ctx->pc = 0x1B12E8u;
            return;
        }
    }
    ctx->pc = 0x1B12E0u;
    // 0x1b12e0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B1528u;
            return;
        }
    }
    ctx->pc = 0x1B12E8u;
}
