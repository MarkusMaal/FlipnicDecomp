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

// Function: entry_001f1318
// Address: 0x1f1318 - 0x1f132c
void entry_001f1318_0x1f1318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1318_0x1f1318");
#endif

    switch (ctx->pc) {
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1328u: goto label_1f1328;
        default: break;
    }

    ctx->pc = 0x1f1318u;

    // 0x1f1318: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1318u;
    SET_GPR_U32(ctx, 31, 0x1F1320u);
    ctx->pc = 0x1F131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1318u;
    // 0x1f131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1318u, 0x1F1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1320u;
label_1f1320:
    // 0x1f1320: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1320u;
    SET_GPR_U32(ctx, 31, 0x1F1328u);
    ctx->pc = 0x1F1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1320u;
    // 0x1f1324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1320u, 0x1F1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1328u;
label_1f1328:
    // 0x1f1328: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f132cu;
}
