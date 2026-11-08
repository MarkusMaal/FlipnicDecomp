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

// Function: entry_001f101c
// Address: 0x1f101c - 0x1f1044
void entry_001f101c_0x1f101c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f101c_0x1f101c");
#endif

    switch (ctx->pc) {
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1038u: goto label_1f1038;
        default: break;
    }

    ctx->pc = 0x1f101cu;

    // 0x1f101c: 0xc07c21e  jal         func_1F0878
    ctx->pc = 0x1F101Cu;
    SET_GPR_U32(ctx, 31, 0x1F1024u);
    ctx->pc = 0x1F1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F101Cu;
    // 0x1f1020: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0878u, 0x1F101Cu, 0x1F1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1024u;
label_1f1024:
    // 0x1f1024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1028: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1028u;
    {
        const bool branch_taken_0x1f1028 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1028u;
        // 0x1f102c: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1028) {
            ctx->pc = 0x1F1044u;
            return;
        }
    }
    ctx->pc = 0x1F1030u;
    // 0x1f1030: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1030u;
    SET_GPR_U32(ctx, 31, 0x1F1038u);
    ctx->pc = 0x1F1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1030u;
    // 0x1f1034: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1030u, 0x1F1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1038u;
label_1f1038:
    // 0x1f1038: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f1038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f103c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F103Cu;
    {
        const bool branch_taken_0x1f103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F103Cu;
        // 0x1f1040: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f103c) {
            ctx->pc = 0x1F1064u;
            return;
        }
    }
    ctx->pc = 0x1F1044u;
}
