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

// Function: entry_001226e4
// Address: 0x1226e4 - 0x1226fc
void entry_001226e4_0x1226e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001226e4_0x1226e4");
#endif

    switch (ctx->pc) {
        case 0x1226f8u: goto label_1226f8;
        default: break;
    }

    ctx->pc = 0x1226e4u;

    // 0x1226e4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1226e8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226E8u;
        // 0x1226ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226FCu;
            return;
        }
    }
    ctx->pc = 0x1226F0u;
    // 0x1226f0: 0xc048990  jal         func_122640
    ctx->pc = 0x1226F0u;
    SET_GPR_U32(ctx, 31, 0x1226F8u);
    ctx->pc = 0x1226F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226F0u;
    // 0x1226f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x1226F0u, 0x1226F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226F8u;
label_1226f8:
    // 0x1226f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1226f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1226fcu;
}
