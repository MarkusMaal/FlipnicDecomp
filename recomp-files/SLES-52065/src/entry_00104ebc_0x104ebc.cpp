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

// Function: entry_00104ebc
// Address: 0x104ebc - 0x104ef8
void entry_00104ebc_0x104ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ebc_0x104ebc");
#endif

    switch (ctx->pc) {
        case 0x104ec4u: goto label_104ec4;
        case 0x104ed8u: goto label_104ed8;
        default: break;
    }

    ctx->pc = 0x104ebcu;

    // 0x104ebc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104EBCu;
    SET_GPR_U32(ctx, 31, 0x104EC4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104EBCu, 0x104EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EC4u;
label_104ec4:
    // 0x104ec4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x104EC4u;
    {
        const bool branch_taken_0x104ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC4u;
        // 0x104ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec4) {
            ctx->pc = 0x104F5Cu;
            return;
        }
    }
    ctx->pc = 0x104ECCu;
    // 0x104ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ed0: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104ED0u;
    SET_GPR_U32(ctx, 31, 0x104ED8u);
    ctx->pc = 0x104ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104ED0u;
    // 0x104ed4: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104ED0u, 0x104ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ED8u;
label_104ed8:
    // 0x104ed8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104edc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ee0: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104ee4: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x104ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x104ee8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104eec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104ef4: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->pc = 0x104ef8u;
}
