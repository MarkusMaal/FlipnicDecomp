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

// Function: entry_00130ca8
// Address: 0x130ca8 - 0x130cc0
void entry_00130ca8_0x130ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ca8_0x130ca8");
#endif

    switch (ctx->pc) {
        case 0x130cbcu: goto label_130cbc;
        default: break;
    }

    ctx->pc = 0x130ca8u;

    // 0x130ca8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130cac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130CACu;
    {
        const bool branch_taken_0x130cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CACu;
        // 0x130cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cac) {
            ctx->pc = 0x130CC0u;
            return;
        }
    }
    ctx->pc = 0x130CB4u;
    // 0x130cb4: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130CB4u;
    SET_GPR_U32(ctx, 31, 0x130CBCu);
    ctx->pc = 0x130CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CB4u;
    // 0x130cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130CB4u, 0x130CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CBCu;
label_130cbc:
    // 0x130cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130cc0u;
}
