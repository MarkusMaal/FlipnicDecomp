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

// Function: entry_0017bfe8
// Address: 0x17bfe8 - 0x17c008
void entry_0017bfe8_0x17bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfe8_0x17bfe8");
#endif

    switch (ctx->pc) {
        case 0x17c000u: goto label_17c000;
        default: break;
    }

    ctx->pc = 0x17bfe8u;

    // 0x17bfe8: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x17bfe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x17bfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bff0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17BFF0u;
    {
        const bool branch_taken_0x17bff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFF0u;
        // 0x17bff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bff0) {
            ctx->pc = 0x17C008u;
            return;
        }
    }
    ctx->pc = 0x17BFF8u;
    // 0x17bff8: 0xc042118  jal         func_108460
    ctx->pc = 0x17BFF8u;
    SET_GPR_U32(ctx, 31, 0x17C000u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17BFF8u, 0x17C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C000u;
label_17c000:
    // 0x17c000: 0xc058404  jal         func_161010
    ctx->pc = 0x17C000u;
    SET_GPR_U32(ctx, 31, 0x17C008u);
    ctx->pc = 0x17C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C000u;
    // 0x17c004: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161010u, 0x17C000u, 0x17C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C008u;
}
