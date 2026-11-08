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

// Function: FUN_001c46f0
// Address: 0x1c46f0 - 0x1c4720
void FUN_001c46f0_0x1c46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c46f0_0x1c46f0");
#endif

    switch (ctx->pc) {
        case 0x1c470cu: goto label_1c470c;
        default: break;
    }

    ctx->pc = 0x1c46f0u;

    // 0x1c46f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c46f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c46f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c46fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4704: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4704u;
    SET_GPR_U32(ctx, 31, 0x1C470Cu);
    ctx->pc = 0x1C4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4704u;
    // 0x1c4708: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4704u, 0x1C470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C470Cu;
label_1c470c:
    // 0x1c470c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c470cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c4710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4718: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4718u;
        // 0x1c471c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4720u;
}
