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

// Function: entry_0011ad78
// Address: 0x11ad78 - 0x11ad98
void entry_0011ad78_0x11ad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad78_0x11ad78");
#endif

    switch (ctx->pc) {
        case 0x11ad80u: goto label_11ad80;
        default: break;
    }

    ctx->pc = 0x11ad78u;

    // 0x11ad78: 0xc046f0c  jal         func_11BC30
    ctx->pc = 0x11AD78u;
    SET_GPR_U32(ctx, 31, 0x11AD80u);
    ctx->pc = 0x11AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD78u;
    // 0x11ad7c: 0x260503c4  addiu       $a1, $s0, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC30u, 0x11AD78u, 0x11AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD80u;
label_11ad80:
    // 0x11ad80: 0xae020528  sw          $v0, 0x528($s0)
    ctx->pc = 0x11ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 2));
    // 0x11ad84: 0x8e020528  lw          $v0, 0x528($s0)
    ctx->pc = 0x11ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x11ad88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD88u;
    {
        const bool branch_taken_0x11ad88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ad88) {
            ctx->pc = 0x11AD98u;
            return;
        }
    }
    ctx->pc = 0x11AD90u;
    // 0x11ad90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11AD90u;
    {
        const bool branch_taken_0x11ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD90u;
        // 0x11ad94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad90) {
            ctx->pc = 0x11ADACu;
            return;
        }
    }
    ctx->pc = 0x11AD98u;
}
