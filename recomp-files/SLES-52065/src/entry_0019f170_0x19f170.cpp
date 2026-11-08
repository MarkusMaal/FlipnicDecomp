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

// Function: entry_0019f170
// Address: 0x19f170 - 0x19f198
void entry_0019f170_0x19f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f170_0x19f170");
#endif

    ctx->pc = 0x19f170u;

    // 0x19f170: 0x10400214  beqz        $v0, . + 4 + (0x214 << 2)
    ctx->pc = 0x19F170u;
    {
        const bool branch_taken_0x19f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f170) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F178u;
    // 0x19f178: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f17c: 0x8c4228e4  lw          $v0, 0x28E4($v0)
    ctx->pc = 0x19f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
    // 0x19f180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19f184: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F184u;
    {
        const bool branch_taken_0x19f184 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19f184) {
            ctx->pc = 0x19F198u;
            return;
        }
    }
    ctx->pc = 0x19F18Cu;
    // 0x19f18c: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x19f190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19F190u;
    {
        const bool branch_taken_0x19f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F190u;
        // 0x19f194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f190) {
            ctx->pc = 0x19F1D4u;
            return;
        }
    }
    ctx->pc = 0x19F198u;
}
