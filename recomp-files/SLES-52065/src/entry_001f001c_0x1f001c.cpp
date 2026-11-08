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

// Function: entry_001f001c
// Address: 0x1f001c - 0x1f0030
void entry_001f001c_0x1f001c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f001c_0x1f001c");
#endif

    switch (ctx->pc) {
        case 0x1f0024u: goto label_1f0024;
        case 0x1f002cu: goto label_1f002c;
        default: break;
    }

    ctx->pc = 0x1f001cu;

    // 0x1f001c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F001Cu;
    SET_GPR_U32(ctx, 31, 0x1F0024u);
    ctx->pc = 0x1F0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F001Cu;
    // 0x1f0020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F001Cu, 0x1F0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0024u;
label_1f0024:
    // 0x1f0024: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0024u;
    SET_GPR_U32(ctx, 31, 0x1F002Cu);
    ctx->pc = 0x1F0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0024u;
    // 0x1f0028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0024u, 0x1F002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F002Cu;
label_1f002c:
    // 0x1f002c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f0030u;
}
