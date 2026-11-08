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

// Function: entry_001d1bb8
// Address: 0x1d1bb8 - 0x1d1bdc
void entry_001d1bb8_0x1d1bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1bb8_0x1d1bb8");
#endif

    ctx->pc = 0x1d1bb8u;

label_1d1bb8:
    // 0x1d1bb8: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1d1bb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1d1bbc:
    // 0x1d1bbc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1d1bc0:
    if (ctx->pc == 0x1D1BC0u) {
        ctx->pc = 0x1D1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BBCu;
        // 0x1d1bc0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BC4u;
        goto label_1d1bc4;
    }
    ctx->pc = 0x1D1BBCu;
    {
        const bool branch_taken_0x1d1bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BBCu;
        // 0x1d1bc0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bbc) {
            ctx->pc = 0x1D1C60u;
            return;
        }
    }
    ctx->pc = 0x1D1BC4u;
label_1d1bc4:
    // 0x1d1bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d1bc8:
    // 0x1d1bc8: 0x24a53500  addiu       $a1, $a1, 0x3500
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13568));
label_1d1bcc:
    // 0x1d1bcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d1bd0:
    // 0x1d1bd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1bd4:
    // 0x1d1bd4: 0x600008  jr          $v1
label_1d1bd8:
    if (ctx->pc == 0x1D1BD8u) {
        ctx->pc = 0x1D1BDCu;
        goto label_fallthrough_0x1d1bd4;
    }
    ctx->pc = 0x1D1BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d1bd4:
    ctx->pc = 0x1D1BDCu;
}
