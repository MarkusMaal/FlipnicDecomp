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

// Function: entry_0017f474
// Address: 0x17f474 - 0x17f4a0
void entry_0017f474_0x17f474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f474_0x17f474");
#endif

    ctx->pc = 0x17f474u;

    // 0x17f474: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f478: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x17F478u;
    {
        const bool branch_taken_0x17f478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F478u;
        // 0x17f47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f478) {
            ctx->pc = 0x17F530u;
            return;
        }
    }
    ctx->pc = 0x17F480u;
    // 0x17f480: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f484: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F484u;
    {
        const bool branch_taken_0x17f484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f484) {
            ctx->pc = 0x17F4D0u;
            return;
        }
    }
    ctx->pc = 0x17F48Cu;
    // 0x17f48c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F490u;
    {
        const bool branch_taken_0x17f490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F490u;
        // 0x17f494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f490) {
            ctx->pc = 0x17F4A0u;
            return;
        }
    }
    ctx->pc = 0x17F498u;
    // 0x17f498: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F498u;
    SET_GPR_U32(ctx, 31, 0x17F4A0u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F498u, 0x17F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4A0u;
}
