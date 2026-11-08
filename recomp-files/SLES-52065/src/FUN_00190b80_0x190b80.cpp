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

// Function: FUN_00190b80
// Address: 0x190b80 - 0x190bdc
void FUN_00190b80_0x190b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190b80_0x190b80");
#endif

    switch (ctx->pc) {
        case 0x190b94u: goto label_190b94;
        case 0x190bd0u: goto label_190bd0;
        default: break;
    }

    ctx->pc = 0x190b80u;

    // 0x190b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190b84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190b8c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190b90: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x190b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
label_190b94:
    // 0x190b94: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190b98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x190b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190b9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190B9Cu;
    {
        const bool branch_taken_0x190b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B9Cu;
        // 0x190ba0: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b9c) {
            ctx->pc = 0x190BB8u;
            goto label_190bb8;
        }
    }
    ctx->pc = 0x190BA4u;
    // 0x190ba4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x190ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x190ba8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x190bac: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x190bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190bb0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x190BB0u;
    {
        const bool branch_taken_0x190bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190bb0) {
            ctx->pc = 0x190B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b94;
        }
    }
    ctx->pc = 0x190BB8u;
label_190bb8:
    // 0x190bb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x190bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190bbc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190bc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190bc4: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x190bc8: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x190BC8u;
    SET_GPR_U32(ctx, 31, 0x190BD0u);
    ctx->pc = 0x190BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BC8u;
    // 0x190bcc: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x190BC8u, 0x190BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BD0u;
label_190bd0:
    // 0x190bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x190BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD4u;
        // 0x190bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190BDCu;
}
