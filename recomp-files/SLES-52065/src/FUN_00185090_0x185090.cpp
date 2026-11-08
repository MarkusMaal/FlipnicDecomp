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

// Function: FUN_00185090
// Address: 0x185090 - 0x1850d4
void FUN_00185090_0x185090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185090_0x185090");
#endif

    switch (ctx->pc) {
        case 0x1850c0u: goto label_1850c0;
        default: break;
    }

    ctx->pc = 0x185090u;

    // 0x185090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18509c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18509cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1850a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1850A0u;
    {
        const bool branch_taken_0x1850a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850A0u;
        // 0x1850a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850a0) {
            ctx->pc = 0x1850C4u;
            goto label_1850c4;
        }
    }
    ctx->pc = 0x1850A8u;
    // 0x1850a8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1850a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1850ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1850acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1850b0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1850B0u;
    {
        const bool branch_taken_0x1850b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1850b0) {
            ctx->pc = 0x1850C0u;
            goto label_1850c0;
        }
    }
    ctx->pc = 0x1850B8u;
    // 0x1850b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1850B8u;
    SET_GPR_U32(ctx, 31, 0x1850C0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1850B8u, 0x1850C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850C0u;
label_1850c0:
    // 0x1850c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1850c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1850c4:
    // 0x1850c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1850c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1850c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1850c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1850cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1850CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1850D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850CCu;
        // 0x1850d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1850D4u;
}
