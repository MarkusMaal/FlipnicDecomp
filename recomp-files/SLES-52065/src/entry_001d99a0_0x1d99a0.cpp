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

// Function: entry_001d99a0
// Address: 0x1d99a0 - 0x1d99c4
void entry_001d99a0_0x1d99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99a0_0x1d99a0");
#endif

    switch (ctx->pc) {
        case 0x1d99c0u: goto label_1d99c0;
        default: break;
    }

    ctx->pc = 0x1d99a0u;

    // 0x1d99a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d99a4: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D99A4u;
    {
        const bool branch_taken_0x1d99a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d99a4) {
            ctx->pc = 0x1D99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D99A4u;
            // 0x1d99a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D99C4u;
            return;
        }
    }
    ctx->pc = 0x1D99ACu;
    // 0x1d99ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d99b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d99b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d99b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99b8: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D99B8u;
    SET_GPR_U32(ctx, 31, 0x1D99C0u);
    ctx->pc = 0x1D99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99B8u;
    // 0x1d99bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D99B8u, 0x1D99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99C0u;
label_1d99c0:
    // 0x1d99c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x1d99c4u;
}
