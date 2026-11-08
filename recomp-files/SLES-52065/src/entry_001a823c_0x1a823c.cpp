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

// Function: entry_001a823c
// Address: 0x1a823c - 0x1a825c
void entry_001a823c_0x1a823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a823c_0x1a823c");
#endif

    switch (ctx->pc) {
        case 0x1a8248u: goto label_1a8248;
        default: break;
    }

    ctx->pc = 0x1a823cu;

    // 0x1a823c: 0x8f8580f4  lw          $a1, -0x7F0C($gp)
    ctx->pc = 0x1a823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x1a8240: 0xc064918  jal         func_192460
    ctx->pc = 0x1A8240u;
    SET_GPR_U32(ctx, 31, 0x1A8248u);
    ctx->pc = 0x1A8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8240u;
    // 0x1a8244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A8240u, 0x1A8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8248u;
label_1a8248:
    // 0x1a8248: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1a8248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    // 0x1a824c: 0xae6006c0  sw          $zero, 0x6C0($s3)
    ctx->pc = 0x1a824cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1728), GPR_U32(ctx, 0));
    // 0x1a8250: 0xae6006c4  sw          $zero, 0x6C4($s3)
    ctx->pc = 0x1a8250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1732), GPR_U32(ctx, 0));
    // 0x1a8254: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a8258: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1a825cu;
}
