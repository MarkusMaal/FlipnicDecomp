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

// Function: entry_0014a2d4
// Address: 0x14a2d4 - 0x14a2ec
void entry_0014a2d4_0x14a2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2d4_0x14a2d4");
#endif

    ctx->pc = 0x14a2d4u;

    // 0x14a2d4: 0x0  nop
    ctx->pc = 0x14a2d4u;
    // NOP
    // 0x14a2d8: 0x27b1058c  addiu       $s1, $sp, 0x58C
    ctx->pc = 0x14a2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1420));
    // 0x14a2dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a2e0: 0x8fa3056c  lw          $v1, 0x56C($sp)
    ctx->pc = 0x14a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1388)));
    // 0x14a2e4: 0x1483ffe0  bne         $a0, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x14A2E4u;
    {
        const bool branch_taken_0x14a2e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a2e4) {
            ctx->pc = 0x14A268u;
            return;
        }
    }
    ctx->pc = 0x14A2ECu;
}
