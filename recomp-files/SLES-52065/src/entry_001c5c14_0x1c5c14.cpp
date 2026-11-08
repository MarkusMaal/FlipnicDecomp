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

// Function: entry_001c5c14
// Address: 0x1c5c14 - 0x1c5c2c
void entry_001c5c14_0x1c5c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c14_0x1c5c14");
#endif

    ctx->pc = 0x1c5c14u;

    // 0x1c5c14: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x1c5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1c5c18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C18u;
    {
        const bool branch_taken_0x1c5c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C18u;
        // 0x1c5c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c18) {
            ctx->pc = 0x1C5C2Cu;
            return;
        }
    }
    ctx->pc = 0x1C5C20u;
    // 0x1c5c20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c5c24: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1c5c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c5c2cu;
}
