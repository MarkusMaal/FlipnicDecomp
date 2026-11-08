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

// Function: FUN_00190820
// Address: 0x190820 - 0x190898
void FUN_00190820_0x190820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190820_0x190820");
#endif

    switch (ctx->pc) {
        case 0x190838u: goto label_190838;
        case 0x19084cu: goto label_19084c;
        default: break;
    }

    ctx->pc = 0x190820u;

    // 0x190820: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x190820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x190824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190828: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19082c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19082cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190830: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x190830u;
    {
        const bool branch_taken_0x190830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190830u;
        // 0x190834: 0x246810c8  addiu       $t0, $v1, 0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190830) {
            ctx->pc = 0x19087Cu;
            goto label_19087c;
        }
    }
    ctx->pc = 0x190838u;
label_190838:
    // 0x190838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x190838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19083c: 0xa0601684  sb          $zero, 0x1684($v1)
    ctx->pc = 0x19083cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x190840: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x190844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190844u;
    {
        const bool branch_taken_0x190844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190844u;
        // 0x190848: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190844) {
            ctx->pc = 0x19085Cu;
            goto label_19085c;
        }
    }
    ctx->pc = 0x19084Cu;
label_19084c:
    // 0x19084c: 0x0  nop
    ctx->pc = 0x19084cu;
    // NOP
    // 0x190850: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190854: 0xa0601084  sb          $zero, 0x1084($v1)
    ctx->pc = 0x190854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4228), (uint8_t)GPR_U32(ctx, 0));
    // 0x190858: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x190858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19085c:
    // 0x19085c: 0x0  nop
    ctx->pc = 0x19085cu;
    // NOP
    // 0x190860: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x190860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x190864: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x190864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190868: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190868) {
            ctx->pc = 0x19084Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19084c;
        }
    }
    ctx->pc = 0x190870u;
    // 0x190870: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x190874: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x190878: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19087c:
    // 0x19087c: 0x0  nop
    ctx->pc = 0x19087cu;
    // NOP
    // 0x190880: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x190880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x190884: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x190884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190888: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190888u;
    {
        const bool branch_taken_0x190888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190888u;
        // 0x19088c: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190888) {
            ctx->pc = 0x190838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190838;
        }
    }
    ctx->pc = 0x190890u;
    // 0x190890: 0x3e00008  jr          $ra
    ctx->pc = 0x190890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190898u;
}
