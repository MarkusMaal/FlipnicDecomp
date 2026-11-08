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

// Function: entry_0017eb5c
// Address: 0x17eb5c - 0x17ebbc
void entry_0017eb5c_0x17eb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb5c_0x17eb5c");
#endif

    ctx->pc = 0x17eb5cu;

label_17eb5c:
    // 0x17eb5c: 0x0  nop
    ctx->pc = 0x17eb5cu;
    // NOP
    // 0x17eb60: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x17eb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17eb64: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x17eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
    // 0x17eb68: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17eb6c: 0xad200020  sw          $zero, 0x20($t1)
    ctx->pc = 0x17eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 0));
    // 0x17eb70: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17eb74: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x17eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x17eb78: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17eb7c: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x17eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
    // 0x17eb80: 0xad20002c  sw          $zero, 0x2C($t1)
    ctx->pc = 0x17eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 0));
    // 0x17eb84: 0xad200030  sw          $zero, 0x30($t1)
    ctx->pc = 0x17eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 0));
    // 0x17eb88: 0xad200034  sw          $zero, 0x34($t1)
    ctx->pc = 0x17eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 0));
    // 0x17eb8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17EB8Cu;
    {
        const bool branch_taken_0x17eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB8Cu;
        // 0x17eb90: 0xad200038  sw          $zero, 0x38($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb8c) {
            ctx->pc = 0x17EB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb5c;
        }
    }
    ctx->pc = 0x17EB94u;
    // 0x17eb94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17eb98: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x17eb98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17eb9c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17EB9Cu;
    {
        const bool branch_taken_0x17eb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB9Cu;
        // 0x17eba0: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb9c) {
            ctx->pc = 0x17EB50u;
            return;
        }
    }
    ctx->pc = 0x17EBA4u;
    // 0x17eba4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17eba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17eba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ebac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ebacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ebb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ebb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBB4u;
        // 0x17ebb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EBBCu;
}
