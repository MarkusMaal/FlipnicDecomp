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

// Function: entry_00143724
// Address: 0x143724 - 0x14374c
void entry_00143724_0x143724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143724_0x143724");
#endif

    ctx->pc = 0x143724u;

    // 0x143724: 0x0  nop
    ctx->pc = 0x143724u;
    // NOP
    // 0x143728: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14372c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143730: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x143734: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x143734u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14373c: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14373Cu;
    {
        const bool branch_taken_0x14373c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14373Cu;
        // 0x143740: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14373c) {
            ctx->pc = 0x1436FCu;
            return;
        }
    }
    ctx->pc = 0x143744u;
    // 0x143744: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x143744u;
    {
        const bool branch_taken_0x143744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143744) {
            ctx->pc = 0x14380Cu;
            return;
        }
    }
    ctx->pc = 0x14374Cu;
}
