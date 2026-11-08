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

// Function: entry_001690b0
// Address: 0x1690b0 - 0x1690c4
void entry_001690b0_0x1690b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001690b0_0x1690b0");
#endif

    ctx->pc = 0x1690b0u;

    // 0x1690b0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1690b4: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1690B4u;
    {
        const bool branch_taken_0x1690b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1690B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690B4u;
        // 0x1690b8: 0x24a20290  addiu       $v0, $a1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690b4) {
            ctx->pc = 0x1690C4u;
            return;
        }
    }
    ctx->pc = 0x1690BCu;
    // 0x1690bc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1690BCu;
    {
        const bool branch_taken_0x1690bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690BCu;
        // 0x1690c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690bc) {
            ctx->pc = 0x16919Cu;
            return;
        }
    }
    ctx->pc = 0x1690C4u;
}
