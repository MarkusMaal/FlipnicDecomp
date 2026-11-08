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

// Function: entry_001bcee8
// Address: 0x1bcee8 - 0x1bcf00
void entry_001bcee8_0x1bcee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcee8_0x1bcee8");
#endif

    ctx->pc = 0x1bcee8u;

    // 0x1bcee8: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bceec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEECu;
    {
        const bool branch_taken_0x1bceec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bceec) {
            ctx->pc = 0x1BCF00u;
            return;
        }
    }
    ctx->pc = 0x1BCEF4u;
    // 0x1bcef4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bcef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcefc: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcf00u;
}
