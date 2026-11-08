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

// Function: entry_00104b94
// Address: 0x104b94 - 0x104bc4
void entry_00104b94_0x104b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b94_0x104b94");
#endif

    switch (ctx->pc) {
        case 0x104b9cu: goto label_104b9c;
        case 0x104bacu: goto label_104bac;
        default: break;
    }

    ctx->pc = 0x104b94u;

    // 0x104b94: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B94u;
    SET_GPR_U32(ctx, 31, 0x104B9Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B94u, 0x104B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B9Cu;
label_104b9c:
    // 0x104b9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104B9Cu;
    {
        const bool branch_taken_0x104b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B9Cu;
        // 0x104ba0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b9c) {
            ctx->pc = 0x104BC4u;
            return;
        }
    }
    ctx->pc = 0x104BA4u;
    // 0x104ba4: 0xc056360  jal         func_158D80
    ctx->pc = 0x104BA4u;
    SET_GPR_U32(ctx, 31, 0x104BACu);
    ctx->pc = 0x104BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BA4u;
    // 0x104ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104BA4u, 0x104BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BACu;
label_104bac:
    // 0x104bac: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104bb0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104bb4: 0x2463ae20  addiu       $v1, $v1, -0x51E0
    ctx->pc = 0x104bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946336));
    // 0x104bb8: 0x2442ad60  addiu       $v0, $v0, -0x52A0
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946144));
    // 0x104bbc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104bc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104bc4u;
}
