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

// Function: entry_001fcd94
// Address: 0x1fcd94 - 0x1fcdb8
void entry_001fcd94_0x1fcd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd94_0x1fcd94");
#endif

    switch (ctx->pc) {
        case 0x1fcdb0u: goto label_1fcdb0;
        default: break;
    }

    ctx->pc = 0x1fcd94u;

    // 0x1fcd94: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1fcd98: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fcd9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCD9Cu;
    {
        const bool branch_taken_0x1fcd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD9Cu;
        // 0x1fcda0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd9c) {
            ctx->pc = 0x1FCDC8u;
            return;
        }
    }
    ctx->pc = 0x1FCDA4u;
    // 0x1fcda4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcda8: 0xc08005a  jal         func_200168
    ctx->pc = 0x1FCDA8u;
    SET_GPR_U32(ctx, 31, 0x1FCDB0u);
    ctx->pc = 0x1FCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDA8u;
    // 0x1fcdac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x1FCDA8u, 0x1FCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDB0u;
label_1fcdb0:
    // 0x1fcdb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCDB0u;
    {
        const bool branch_taken_0x1fcdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDB0u;
        // 0x1fcdb4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdb0) {
            ctx->pc = 0x1FCDC8u;
            return;
        }
    }
    ctx->pc = 0x1FCDB8u;
}
