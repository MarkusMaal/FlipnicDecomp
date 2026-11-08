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

// Function: FUN_0010f310
// Address: 0x10f310 - 0x10f344
void FUN_0010f310_0x10f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f310_0x10f310");
#endif

    switch (ctx->pc) {
        case 0x10f324u: goto label_10f324;
        case 0x10f330u: goto label_10f330;
        default: break;
    }

    ctx->pc = 0x10f310u;

    // 0x10f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f31c: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x10F31Cu;
    SET_GPR_U32(ctx, 31, 0x10F324u);
    ctx->pc = 0x10F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F31Cu;
    // 0x10f320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x10F31Cu, 0x10F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F324u;
label_10f324:
    // 0x10f324: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10f324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10f328: 0xc046458  jal         func_119160
    ctx->pc = 0x10F328u;
    SET_GPR_U32(ctx, 31, 0x10F330u);
    ctx->pc = 0x10F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F328u;
    // 0x10f32c: 0x2484e368  addiu       $a0, $a0, -0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10F328u, 0x10F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F330u;
label_10f330:
    // 0x10f330: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x10f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x10f334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f33c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F33Cu;
        // 0x10f340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F344u;
}
