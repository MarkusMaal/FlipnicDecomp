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

// Function: entry_001a45d0
// Address: 0x1a45d0 - 0x1a45f0
void entry_001a45d0_0x1a45d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45d0_0x1a45d0");
#endif

    switch (ctx->pc) {
        case 0x1a45e8u: goto label_1a45e8;
        default: break;
    }

    ctx->pc = 0x1a45d0u;

    // 0x1a45d0: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1A45D0u;
    {
        const bool branch_taken_0x1a45d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45d0) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A45D8u;
    // 0x1a45d8: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a45dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a45e0: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1A45E0u;
    SET_GPR_U32(ctx, 31, 0x1A45E8u);
    ctx->pc = 0x1A45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45E0u;
    // 0x1a45e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A45E0u, 0x1A45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45E8u;
label_1a45e8:
    // 0x1a45e8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1A45E8u;
    {
        const bool branch_taken_0x1a45e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45e8) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A45F0u;
}
