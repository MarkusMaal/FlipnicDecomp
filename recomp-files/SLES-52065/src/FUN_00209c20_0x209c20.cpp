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

// Function: FUN_00209c20
// Address: 0x209c20 - 0x209c54
void FUN_00209c20_0x209c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209c20_0x209c20");
#endif

    switch (ctx->pc) {
        case 0x209c44u: goto label_209c44;
        default: break;
    }

    ctx->pc = 0x209c20u;

    // 0x209c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209c28: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209C28u;
    {
        const bool branch_taken_0x209c28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x209C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C28u;
        // 0x209c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c28) {
            ctx->pc = 0x209C3Cu;
            goto label_209c3c;
        }
    }
    ctx->pc = 0x209C30u;
    // 0x209c30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x209c34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209C34u;
    {
        const bool branch_taken_0x209c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C34u;
        // 0x209c38: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c34) {
            ctx->pc = 0x209C48u;
            goto label_209c48;
        }
    }
    ctx->pc = 0x209C3Cu;
label_209c3c:
    // 0x209c3c: 0xc08254c  jal         func_209530
    ctx->pc = 0x209C3Cu;
    SET_GPR_U32(ctx, 31, 0x209C44u);
    ctx->pc = 0x209C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C3Cu;
    // 0x209c40: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209530u, 0x209C3Cu, 0x209C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C44u;
label_209c44:
    // 0x209c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c48:
    // 0x209c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x209C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C4Cu;
        // 0x209c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209C54u;
}
