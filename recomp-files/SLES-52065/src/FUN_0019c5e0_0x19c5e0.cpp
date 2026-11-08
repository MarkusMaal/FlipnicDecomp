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

// Function: FUN_0019c5e0
// Address: 0x19c5e0 - 0x19c618
void FUN_0019c5e0_0x19c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c5e0_0x19c5e0");
#endif

    switch (ctx->pc) {
        case 0x19c5fcu: goto label_19c5fc;
        default: break;
    }

    ctx->pc = 0x19c5e0u;

    // 0x19c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c5e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x19c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19c5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c5f0: 0x8c850670  lw          $a1, 0x670($a0)
    ctx->pc = 0x19c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x19c5f4: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19C5F4u;
    SET_GPR_U32(ctx, 31, 0x19C5FCu);
    ctx->pc = 0x19C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5F4u;
    // 0x19c5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19C5F4u, 0x19C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5FCu;
label_19c5fc:
    // 0x19c5fc: 0x8e030914  lw          $v1, 0x914($s0)
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x19c600: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c604: 0xae030914  sw          $v1, 0x914($s0)
    ctx->pc = 0x19c604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 3));
    // 0x19c608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c610: 0x3e00008  jr          $ra
    ctx->pc = 0x19C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C610u;
        // 0x19c614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C618u;
}
