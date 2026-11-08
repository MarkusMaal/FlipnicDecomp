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

// Function: entry_0011187c
// Address: 0x11187c - 0x1118a0
void entry_0011187c_0x11187c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011187c_0x11187c");
#endif

    ctx->pc = 0x11187cu;

    // 0x11187c: 0x0  nop
    ctx->pc = 0x11187cu;
    // NOP
    // 0x111880: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111884: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x111884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111888: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111888u;
    {
        const bool branch_taken_0x111888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111888) {
            ctx->pc = 0x11184Cu;
            return;
        }
    }
    ctx->pc = 0x111890u;
    // 0x111890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111898: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x111898u;
    {
        const bool branch_taken_0x111898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111898u;
        // 0x11189c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111898) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x1118A0u;
}
