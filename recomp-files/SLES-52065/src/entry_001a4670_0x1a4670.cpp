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

// Function: entry_001a4670
// Address: 0x1a4670 - 0x1a4690
void entry_001a4670_0x1a4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4670_0x1a4670");
#endif

    switch (ctx->pc) {
        case 0x1a4688u: goto label_1a4688;
        default: break;
    }

    ctx->pc = 0x1a4670u;

    // 0x1a4670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4674: 0xae220320  sw          $v0, 0x320($s1)
    ctx->pc = 0x1a4674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
    // 0x1a4678: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a467c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a4680: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1A4680u;
    SET_GPR_U32(ctx, 31, 0x1A4688u);
    ctx->pc = 0x1A4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4680u;
    // 0x1a4684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A4680u, 0x1A4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4688u;
label_1a4688:
    // 0x1a4688: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A4688u;
    {
        const bool branch_taken_0x1a4688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4688) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4690u;
}
