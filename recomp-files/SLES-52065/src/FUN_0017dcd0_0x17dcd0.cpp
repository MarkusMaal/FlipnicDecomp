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

// Function: FUN_0017dcd0
// Address: 0x17dcd0 - 0x17dd40
void FUN_0017dcd0_0x17dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017dcd0_0x17dcd0");
#endif

    switch (ctx->pc) {
        case 0x17dcf4u: goto label_17dcf4;
        default: break;
    }

    ctx->pc = 0x17dcd0u;

    // 0x17dcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17dcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17dcdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17dce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17dce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17dce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dce8: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x17dcec: 0xc049dd8  jal         func_127760
    ctx->pc = 0x17DCECu;
    SET_GPR_U32(ctx, 31, 0x17DCF4u);
    ctx->pc = 0x17DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCECu;
    // 0x17dcf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x17DCECu, 0x17DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCF4u;
label_17dcf4:
    // 0x17dcf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17dcf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17dcfc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17dd00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17dd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x17dd08: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x17dd0c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x17dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x17dd10: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x17dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x17dd14: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x17dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x17dd18: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x17dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x17dd1c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x17dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x17dd20: 0x8f838650  lw          $v1, -0x79B0($gp)
    ctx->pc = 0x17dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
    // 0x17dd24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17dd28: 0xaf838650  sw          $v1, -0x79B0($gp)
    ctx->pc = 0x17dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 3));
    // 0x17dd2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17dd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dd38: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD38u;
        // 0x17dd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD40u;
}
