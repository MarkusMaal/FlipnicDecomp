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

// Function: FUN_001ebc68
// Address: 0x1ebc68 - 0x1ebcdc
void FUN_001ebc68_0x1ebc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebc68_0x1ebc68");
#endif

    switch (ctx->pc) {
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebcb8u: goto label_1ebcb8;
        default: break;
    }

    ctx->pc = 0x1ebc68u;

    // 0x1ebc68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebc6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebc70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ebc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ebc74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ebc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ebc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ebc7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ebc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc80: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EBC80u;
    {
        const bool branch_taken_0x1ebc80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC80u;
        // 0x1ebc84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc80) {
            ctx->pc = 0x1EBCC0u;
            goto label_1ebcc0;
        }
    }
    ctx->pc = 0x1EBC88u;
    // 0x1ebc88: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ebc88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ebc8c: 0x8e02a3b0  lw          $v0, -0x5C50($s0)
    ctx->pc = 0x1ebc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A3B0u));
    // 0x1ebc90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBC90u;
    {
        const bool branch_taken_0x1ebc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC90u;
        // 0x1ebc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc90) {
            ctx->pc = 0x1EBCB0u;
            goto label_1ebcb0;
        }
    }
    ctx->pc = 0x1EBC98u;
    // 0x1ebc98: 0xc07b330  jal         func_1ECCC0
    ctx->pc = 0x1EBC98u;
    SET_GPR_U32(ctx, 31, 0x1EBCA0u);
    ctx->pc = 0x1ECCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECCC0u, 0x1EBC98u, 0x1EBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCA0u;
label_1ebca0:
    // 0x1ebca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBCA0u;
    {
        const bool branch_taken_0x1ebca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCA0u;
        // 0x1ebca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebca0) {
            ctx->pc = 0x1EBCC0u;
            goto label_1ebcc0;
        }
    }
    ctx->pc = 0x1EBCA8u;
    // 0x1ebca8: 0xae02a3b0  sw          $v0, -0x5C50($s0)
    ctx->pc = 0x1ebca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943664), GPR_U32(ctx, 2));
    // 0x1ebcac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcb0:
    // 0x1ebcb0: 0xc07b2fc  jal         func_1ECBF0
    ctx->pc = 0x1EBCB0u;
    SET_GPR_U32(ctx, 31, 0x1EBCB8u);
    ctx->pc = 0x1EBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCB0u;
    // 0x1ebcb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBF0u, 0x1EBCB0u, 0x1EBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCB8u;
label_1ebcb8:
    // 0x1ebcb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBCB8u;
    {
        const bool branch_taken_0x1ebcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcb8) {
            ctx->pc = 0x1EBCC8u;
            goto label_1ebcc8;
        }
    }
    ctx->pc = 0x1EBCC0u;
label_1ebcc0:
    // 0x1ebcc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebcc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ebcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebcc8:
    // 0x1ebcc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebcc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ebcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebcd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCD4u;
        // 0x1ebcd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBCDCu;
}
