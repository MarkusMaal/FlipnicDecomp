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

// Function: entry_001a45a4
// Address: 0x1a45a4 - 0x1a45c0
void entry_001a45a4_0x1a45a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45a4_0x1a45a4");
#endif

    switch (ctx->pc) {
        case 0x1a45bcu: goto label_1a45bc;
        default: break;
    }

    ctx->pc = 0x1a45a4u;

    // 0x1a45a4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A45A4u;
    {
        const bool branch_taken_0x1a45a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A4u;
        // 0x1a45a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45a4) {
            ctx->pc = 0x1A45C0u;
            return;
        }
    }
    ctx->pc = 0x1A45ACu;
    // 0x1a45ac: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a45b0: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a45b4: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1A45B4u;
    SET_GPR_U32(ctx, 31, 0x1A45BCu);
    ctx->pc = 0x1A45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45B4u;
    // 0x1a45b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A45B4u, 0x1A45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45BCu;
label_1a45bc:
    // 0x1a45bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a45c0u;
}
