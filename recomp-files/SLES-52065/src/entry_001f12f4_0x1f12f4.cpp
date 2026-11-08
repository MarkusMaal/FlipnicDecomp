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

// Function: entry_001f12f4
// Address: 0x1f12f4 - 0x1f1318
void entry_001f12f4_0x1f12f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f12f4_0x1f12f4");
#endif

    switch (ctx->pc) {
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1310u: goto label_1f1310;
        default: break;
    }

    ctx->pc = 0x1f12f4u;

    // 0x1f12f4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f12f8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F12F8u;
    SET_GPR_U32(ctx, 31, 0x1F1300u);
    ctx->pc = 0x1F12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12F8u;
    // 0x1f12fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F12F8u, 0x1F1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1300u;
label_1f1300:
    // 0x1f1300: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1318u;
            return;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1308u;
    SET_GPR_U32(ctx, 31, 0x1F1310u);
    ctx->pc = 0x1F130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1308u;
    // 0x1f130c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1308u, 0x1F1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1310u;
label_1f1310:
    // 0x1f1310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1310u;
    {
        const bool branch_taken_0x1f1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1310u;
        // 0x1f1314: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1310) {
            ctx->pc = 0x1F132Cu;
            return;
        }
    }
    ctx->pc = 0x1F1318u;
}
