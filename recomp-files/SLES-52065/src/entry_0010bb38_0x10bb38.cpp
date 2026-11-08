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

// Function: entry_0010bb38
// Address: 0x10bb38 - 0x10bb58
void entry_0010bb38_0x10bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb38_0x10bb38");
#endif

    ctx->pc = 0x10bb38u;

    // 0x10bb38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10bb3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10bb40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10bb44: 0x8c630650  lw          $v1, 0x650($v1)
    ctx->pc = 0x10bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1616)));
    // 0x10bb48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BB48u;
    {
        const bool branch_taken_0x10bb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb48) {
            ctx->pc = 0x10BB58u;
            return;
        }
    }
    ctx->pc = 0x10BB50u;
    // 0x10bb50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB50u;
        // 0x10bb54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB6Cu;
            return;
        }
    }
    ctx->pc = 0x10BB58u;
}
