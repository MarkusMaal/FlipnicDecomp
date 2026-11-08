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

// Function: entry_00119754
// Address: 0x119754 - 0x119774
void entry_00119754_0x119754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119754_0x119754");
#endif

    ctx->pc = 0x119754u;

    // 0x119754: 0x0  nop
    ctx->pc = 0x119754u;
    // NOP
    // 0x119758: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11975c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119760: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x119760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119764: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x119764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119768: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x119768u;
    {
        const bool branch_taken_0x119768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119768u;
        // 0x11976c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119768) {
            ctx->pc = 0x11972Cu;
            return;
        }
    }
    ctx->pc = 0x119770u;
    // 0x119770: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x119770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x119774u;
}
