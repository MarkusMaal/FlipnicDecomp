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

// Function: FUN_0012b900
// Address: 0x12b900 - 0x12b984
void FUN_0012b900_0x12b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b900_0x12b900");
#endif

    switch (ctx->pc) {
        case 0x12b924u: goto label_12b924;
        case 0x12b934u: goto label_12b934;
        case 0x12b944u: goto label_12b944;
        default: break;
    }

    ctx->pc = 0x12b900u;

    // 0x12b900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12b908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12b90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12b910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b914: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b91c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b924:
    // 0x12b924: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x12b928: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12b92c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B92Cu;
    SET_GPR_U32(ctx, 31, 0x12B934u);
    ctx->pc = 0x12B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B92Cu;
    // 0x12b930: 0x2453000c  addiu       $s3, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B92Cu, 0x12B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B934u;
label_12b934:
    // 0x12b934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B934u;
    {
        const bool branch_taken_0x12b934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b934) {
            ctx->pc = 0x12B944u;
            goto label_12b944;
        }
    }
    ctx->pc = 0x12B93Cu;
    // 0x12b93c: 0xc04aa38  jal         func_12A8E0
    ctx->pc = 0x12B93Cu;
    SET_GPR_U32(ctx, 31, 0x12B944u);
    ctx->pc = 0x12B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B93Cu;
    // 0x12b940: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A8E0u, 0x12B93Cu, 0x12B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B944u;
label_12b944:
    // 0x12b944: 0x0  nop
    ctx->pc = 0x12b944u;
    // NOP
    // 0x12b948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12b94c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b950: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x12B950u;
    {
        const bool branch_taken_0x12b950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B950u;
        // 0x12b954: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b950) {
            ctx->pc = 0x12B924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b924;
        }
    }
    ctx->pc = 0x12B958u;
    // 0x12b958: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b95c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x12b960: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x12b964: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x12b964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x12b968: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b96c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12b96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B97Cu;
        // 0x12b980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B984u;
}
