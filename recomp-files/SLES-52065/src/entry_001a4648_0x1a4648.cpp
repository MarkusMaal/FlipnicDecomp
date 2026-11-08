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

// Function: entry_001a4648
// Address: 0x1a4648 - 0x1a4670
void entry_001a4648_0x1a4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4648_0x1a4648");
#endif

    switch (ctx->pc) {
        case 0x1a4668u: goto label_1a4668;
        default: break;
    }

    ctx->pc = 0x1a4648u;

    // 0x1a4648: 0x8ca2093c  lw          $v0, 0x93C($a1)
    ctx->pc = 0x1a4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2364)));
    // 0x1a464c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A464Cu;
    {
        const bool branch_taken_0x1a464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A464Cu;
        // 0x1a4650: 0x24a6093c  addiu       $a2, $a1, 0x93C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a464c) {
            ctx->pc = 0x1A4670u;
            return;
        }
    }
    ctx->pc = 0x1A4654u;
    // 0x1a4654: 0xae320320  sw          $s2, 0x320($s1)
    ctx->pc = 0x1a4654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 18));
    // 0x1a4658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a465c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a465cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a4660: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4660u, 0x1A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4668u;
label_1a4668:
    // 0x1a4668: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1A4668u;
    {
        const bool branch_taken_0x1a4668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4668) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4670u;
}
