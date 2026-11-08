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

// Function: FUN_00185f80
// Address: 0x185f80 - 0x185fc4
void FUN_00185f80_0x185f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00185f80_0x185f80");
#endif

    switch (ctx->pc) {
        case 0x185fb0u: goto label_185fb0;
        default: break;
    }

    ctx->pc = 0x185f80u;

    // 0x185f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x185f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x185F90u;
    {
        const bool branch_taken_0x185f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F90u;
        // 0x185f94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f90) {
            ctx->pc = 0x185FB4u;
            goto label_185fb4;
        }
    }
    ctx->pc = 0x185F98u;
    // 0x185f98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x185f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x185f9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x185f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x185fa0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185FA0u;
    {
        const bool branch_taken_0x185fa0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x185fa0) {
            ctx->pc = 0x185FB0u;
            goto label_185fb0;
        }
    }
    ctx->pc = 0x185FA8u;
    // 0x185fa8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x185FA8u;
    SET_GPR_U32(ctx, 31, 0x185FB0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x185FA8u, 0x185FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FB0u;
label_185fb0:
    // 0x185fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185fb4:
    // 0x185fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x185FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FBCu;
        // 0x185fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185FC4u;
}
