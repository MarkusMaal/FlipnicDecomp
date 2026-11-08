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

// Function: entry_00191494
// Address: 0x191494 - 0x1914b0
void entry_00191494_0x191494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191494_0x191494");
#endif

    ctx->pc = 0x191494u;

    // 0x191494: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191498: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x191498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x19149c: 0x8c632c10  lw          $v1, 0x2C10($v1)
    ctx->pc = 0x19149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x1914a0: 0x1443007d  bne         $v0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1914A0u;
    {
        const bool branch_taken_0x1914a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1914a0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x1914A8u;
    // 0x1914a8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1914A8u;
    {
        const bool branch_taken_0x1914a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A8u;
        // 0x1914ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914a8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x1914B0u;
}
