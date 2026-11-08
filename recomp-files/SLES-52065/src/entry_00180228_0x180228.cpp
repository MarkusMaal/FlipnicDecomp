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

// Function: entry_00180228
// Address: 0x180228 - 0x180254
void entry_00180228_0x180228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180228_0x180228");
#endif

    switch (ctx->pc) {
        case 0x180230u: goto label_180230;
        default: break;
    }

    ctx->pc = 0x180228u;

    // 0x180228: 0xc080748  jal         func_201D20
    ctx->pc = 0x180228u;
    SET_GPR_U32(ctx, 31, 0x180230u);
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x180228u, 0x180230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180230u;
label_180230:
    // 0x180230: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x180230u;
    {
        const bool branch_taken_0x180230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180230u;
        // 0x180234: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180230) {
            ctx->pc = 0x180300u;
            return;
        }
    }
    ctx->pc = 0x180238u;
    // 0x180238: 0x8c3287c8  lw          $s2, -0x7838($at)
    ctx->pc = 0x180238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936520)));
    // 0x18023c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180240: 0x8c2287c4  lw          $v0, -0x783C($at)
    ctx->pc = 0x180240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3687C4u));
    // 0x180244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180248: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18024c: 0x1251002c  beq         $s2, $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x18024Cu;
    {
        const bool branch_taken_0x18024c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x18024c) {
            ctx->pc = 0x180300u;
            return;
        }
    }
    ctx->pc = 0x180254u;
}
