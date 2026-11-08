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

// Function: entry_00171044
// Address: 0x171044 - 0x171060
void entry_00171044_0x171044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171044_0x171044");
#endif

    ctx->pc = 0x171044u;

    // 0x171044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171048: 0xa0820262  sb          $v0, 0x262($a0)
    ctx->pc = 0x171048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 610), (uint8_t)GPR_U32(ctx, 2));
    // 0x17104c: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x171050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171050u;
    {
        const bool branch_taken_0x171050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171050u;
        // 0x171054: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171050) {
            ctx->pc = 0x171060u;
            return;
        }
    }
    ctx->pc = 0x171058u;
    // 0x171058: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x171058u;
    {
        const bool branch_taken_0x171058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171058u;
        // 0x17105c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171058) {
            ctx->pc = 0x1710C0u;
            return;
        }
    }
    ctx->pc = 0x171060u;
}
