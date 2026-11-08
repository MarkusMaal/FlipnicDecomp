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

// Function: entry_00152824
// Address: 0x152824 - 0x15283c
void entry_00152824_0x152824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152824_0x152824");
#endif

    ctx->pc = 0x152824u;

    // 0x152824: 0x0  nop
    ctx->pc = 0x152824u;
    // NOP
    // 0x152828: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x152828u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15282c: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x15282Cu;
    {
        const bool branch_taken_0x15282c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15282Cu;
        // 0x152830: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15282c) {
            ctx->pc = 0x1526E0u;
            return;
        }
    }
    ctx->pc = 0x152834u;
    // 0x152834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x152838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x15283cu;
}
