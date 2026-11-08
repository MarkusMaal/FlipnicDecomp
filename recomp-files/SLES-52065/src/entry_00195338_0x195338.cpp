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

// Function: entry_00195338
// Address: 0x195338 - 0x195354
void entry_00195338_0x195338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195338_0x195338");
#endif

    switch (ctx->pc) {
        case 0x19534cu: goto label_19534c;
        default: break;
    }

    ctx->pc = 0x195338u;

    // 0x195338: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x195338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x19533c: 0x8f8586f4  lw          $a1, -0x790C($gp)
    ctx->pc = 0x19533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x195340: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195344: 0xc046350  jal         func_118D40
    ctx->pc = 0x195344u;
    SET_GPR_U32(ctx, 31, 0x19534Cu);
    ctx->pc = 0x195348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195344u;
    // 0x195348: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D40u, 0x195344u, 0x19534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19534Cu;
label_19534c:
    // 0x19534c: 0x10000285  b           . + 4 + (0x285 << 2)
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195354u;
}
