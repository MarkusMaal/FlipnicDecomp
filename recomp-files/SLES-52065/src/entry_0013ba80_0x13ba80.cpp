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

// Function: entry_0013ba80
// Address: 0x13ba80 - 0x13ba98
void entry_0013ba80_0x13ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba80_0x13ba80");
#endif

    switch (ctx->pc) {
        case 0x13ba94u: goto label_13ba94;
        default: break;
    }

    ctx->pc = 0x13ba80u;

    // 0x13ba80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ba84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BA84u;
    {
        const bool branch_taken_0x13ba84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA84u;
        // 0x13ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba84) {
            ctx->pc = 0x13BA98u;
            return;
        }
    }
    ctx->pc = 0x13BA8Cu;
    // 0x13ba8c: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BA8Cu;
    SET_GPR_U32(ctx, 31, 0x13BA94u);
    ctx->pc = 0x13BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA8Cu;
    // 0x13ba90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BA8Cu, 0x13BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA94u;
label_13ba94:
    // 0x13ba94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ba98u;
}
