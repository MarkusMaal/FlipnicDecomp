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

// Function: FUN_0018ac80
// Address: 0x18ac80 - 0x18ad18
void FUN_0018ac80_0x18ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ac80_0x18ac80");
#endif

    switch (ctx->pc) {
        case 0x18acbcu: goto label_18acbc;
        case 0x18acecu: goto label_18acec;
        case 0x18acfcu: goto label_18acfc;
        default: break;
    }

    ctx->pc = 0x18ac80u;

    // 0x18ac80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ac84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ac88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ac8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ac90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ac94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ac98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ac98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18aca0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18aca4: 0x909821  addu        $s3, $a0, $s0
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18aca8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18acac: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ACACu;
    {
        const bool branch_taken_0x18acac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACACu;
        // 0x18acb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acac) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18ACB4u;
    // 0x18acb4: 0xc0784bc  jal         func_1E12F0
    ctx->pc = 0x18ACB4u;
    SET_GPR_U32(ctx, 31, 0x18ACBCu);
    ctx->pc = 0x1E12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E12F0u, 0x18ACB4u, 0x18ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACBCu;
label_18acbc:
    // 0x18acbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18acc0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_18acc4:
    // 0x18acc4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x18acc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18accc: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x18acccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18acd0: 0x80420080  lb          $v0, 0x80($v0)
    ctx->pc = 0x18acd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18acd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ACD4u;
    {
        const bool branch_taken_0x18acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD4u;
        // 0x18acd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd4) {
            ctx->pc = 0x18ACF4u;
            goto label_18acf4;
        }
    }
    ctx->pc = 0x18ACDCu;
    // 0x18acdc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x18acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18ace0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18ace4: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18ACE4u;
    SET_GPR_U32(ctx, 31, 0x18ACECu);
    ctx->pc = 0x18ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACE4u;
    // 0x18ace8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18ACE4u, 0x18ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACECu;
label_18acec:
    // 0x18acec: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x18acecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18acf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18acf4:
    // 0x18acf4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x18ACF4u;
    SET_GPR_U32(ctx, 31, 0x18ACFCu);
    ctx->pc = 0x18ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACF4u;
    // 0x18acf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x18ACF4u, 0x18ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACFCu;
label_18acfc:
    // 0x18acfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ad00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ad00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ad04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ad04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ad08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ad08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ad0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ad0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad10: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD18u;
}
