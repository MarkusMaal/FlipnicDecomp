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

// Function: entry_001f9004
// Address: 0x1f9004 - 0x1f9024
void entry_001f9004_0x1f9004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9004_0x1f9004");
#endif

    switch (ctx->pc) {
        case 0x1f901cu: goto label_1f901c;
        default: break;
    }

    ctx->pc = 0x1f9004u;

    // 0x1f9004: 0x26421bc0  addiu       $v0, $s2, 0x1BC0
    ctx->pc = 0x1f9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 7104));
    // 0x1f9008: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f9008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f900c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1f900cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f9010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9014: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F9014u;
    SET_GPR_U32(ctx, 31, 0x1F901Cu);
    ctx->pc = 0x1F9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9014u;
    // 0x1f9018: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F9014u, 0x1F901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F901Cu;
label_1f901c:
    // 0x1f901c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1f9020: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1f9020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f9024u;
}
