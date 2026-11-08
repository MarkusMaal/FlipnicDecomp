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

// Function: entry_0011c7b0
// Address: 0x11c7b0 - 0x11c7d0
void entry_0011c7b0_0x11c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7b0_0x11c7b0");
#endif

    ctx->pc = 0x11c7b0u;

    // 0x11c7b0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x11c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x11c7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c7b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C7B8u;
    {
        const bool branch_taken_0x11c7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c7b8) {
            ctx->pc = 0x11C7D0u;
            return;
        }
    }
    ctx->pc = 0x11C7C0u;
    // 0x11c7c0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c7c4: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x11c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x11c7c8: 0x1483026f  bne         $a0, $v1, . + 4 + (0x26F << 2)
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C7D0u;
}
