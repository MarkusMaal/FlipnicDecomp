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

// Function: entry_00122768
// Address: 0x122768 - 0x122780
void entry_00122768_0x122768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122768_0x122768");
#endif

    switch (ctx->pc) {
        case 0x12277cu: goto label_12277c;
        default: break;
    }

    ctx->pc = 0x122768u;

    // 0x122768: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x122768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12276c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12276Cu;
    {
        const bool branch_taken_0x12276c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x122770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12276Cu;
        // 0x122770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12276c) {
            ctx->pc = 0x122780u;
            return;
        }
    }
    ctx->pc = 0x122774u;
    // 0x122774: 0xc048990  jal         func_122640
    ctx->pc = 0x122774u;
    SET_GPR_U32(ctx, 31, 0x12277Cu);
    ctx->pc = 0x122778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122774u;
    // 0x122778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122640u, 0x122774u, 0x12277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12277Cu;
label_12277c:
    // 0x12277c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122780u;
}
