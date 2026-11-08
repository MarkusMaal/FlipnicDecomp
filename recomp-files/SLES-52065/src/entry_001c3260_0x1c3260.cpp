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

// Function: entry_001c3260
// Address: 0x1c3260 - 0x1c3294
void entry_001c3260_0x1c3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3260_0x1c3260");
#endif

    switch (ctx->pc) {
        case 0x1c328cu: goto label_1c328c;
        default: break;
    }

    ctx->pc = 0x1c3260u;

    // 0x1c3260: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c3264: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3264u;
    {
        const bool branch_taken_0x1c3264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3264) {
            ctx->pc = 0x1C32ACu;
            return;
        }
    }
    ctx->pc = 0x1C326Cu;
    // 0x1c326c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c3270: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3270u;
    {
        const bool branch_taken_0x1c3270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3270u;
        // 0x1c3274: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3270) {
            ctx->pc = 0x1C3294u;
            return;
        }
    }
    ctx->pc = 0x1C3278u;
    // 0x1c3278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c327c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3280: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3284: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C3284u;
    SET_GPR_U32(ctx, 31, 0x1C328Cu);
    ctx->pc = 0x1C3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3284u;
    // 0x1c3288: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C3284u, 0x1C328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C328Cu;
label_1c328c:
    // 0x1c328c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C328Cu;
    {
        const bool branch_taken_0x1c328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c328c) {
            ctx->pc = 0x1C32B0u;
            return;
        }
    }
    ctx->pc = 0x1C3294u;
}
