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

// Function: entry_0011290c
// Address: 0x11290c - 0x112930
void entry_0011290c_0x11290c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011290c_0x11290c");
#endif

    ctx->pc = 0x11290cu;

    // 0x11290c: 0x0  nop
    ctx->pc = 0x11290cu;
    // NOP
    // 0x112910: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112914: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112918: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x112918u;
    {
        const bool branch_taken_0x112918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112918) {
            ctx->pc = 0x1128E4u;
            return;
        }
    }
    ctx->pc = 0x112920u;
    // 0x112920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112928: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x112928u;
    {
        const bool branch_taken_0x112928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112928u;
        // 0x11292c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112928) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112930u;
}
