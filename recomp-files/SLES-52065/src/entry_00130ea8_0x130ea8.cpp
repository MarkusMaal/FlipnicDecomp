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

// Function: entry_00130ea8
// Address: 0x130ea8 - 0x130ec0
void entry_00130ea8_0x130ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ea8_0x130ea8");
#endif

    switch (ctx->pc) {
        case 0x130ebcu: goto label_130ebc;
        default: break;
    }

    ctx->pc = 0x130ea8u;

    // 0x130ea8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130eac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130EACu;
    {
        const bool branch_taken_0x130eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EACu;
        // 0x130eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eac) {
            ctx->pc = 0x130EC0u;
            return;
        }
    }
    ctx->pc = 0x130EB4u;
    // 0x130eb4: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130EB4u;
    SET_GPR_U32(ctx, 31, 0x130EBCu);
    ctx->pc = 0x130EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EB4u;
    // 0x130eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130EB4u, 0x130EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EBCu;
label_130ebc:
    // 0x130ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130ec0u;
}
