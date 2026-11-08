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

// Function: entry_001f2168
// Address: 0x1f2168 - 0x1f218c
void entry_001f2168_0x1f2168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2168_0x1f2168");
#endif

    switch (ctx->pc) {
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2184u: goto label_1f2184;
        default: break;
    }

    ctx->pc = 0x1f2168u;

    // 0x1f2168: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f2168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f216c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F216Cu;
    SET_GPR_U32(ctx, 31, 0x1F2174u);
    ctx->pc = 0x1F2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F216Cu;
    // 0x1f2170: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F216Cu, 0x1F2174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2174u;
label_1f2174:
    // 0x1f2174: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2174u;
    {
        const bool branch_taken_0x1f2174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2174) {
            ctx->pc = 0x1F218Cu;
            return;
        }
    }
    ctx->pc = 0x1F217Cu;
    // 0x1f217c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F217Cu;
    SET_GPR_U32(ctx, 31, 0x1F2184u);
    ctx->pc = 0x1F2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F217Cu;
    // 0x1f2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F217Cu, 0x1F2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2184u;
label_1f2184:
    // 0x1f2184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2184u;
    {
        const bool branch_taken_0x1f2184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2184u;
        // 0x1f2188: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2184) {
            ctx->pc = 0x1F21A0u;
            return;
        }
    }
    ctx->pc = 0x1F218Cu;
}
