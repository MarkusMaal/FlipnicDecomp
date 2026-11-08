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

// Function: FUN_0010dd50
// Address: 0x10dd50 - 0x10ddcc
void FUN_0010dd50_0x10dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010dd50_0x10dd50");
#endif

    switch (ctx->pc) {
        case 0x10dd68u: goto label_10dd68;
        case 0x10dd84u: goto label_10dd84;
        case 0x10dd8cu: goto label_10dd8c;
        case 0x10ddb8u: goto label_10ddb8;
        default: break;
    }

    ctx->pc = 0x10dd50u;

    // 0x10dd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10dd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10dd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10dd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10dd5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10dd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd60: 0xc043774  jal         func_10DDD0
    ctx->pc = 0x10DD60u;
    SET_GPR_U32(ctx, 31, 0x10DD68u);
    ctx->pc = 0x10DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD60u;
    // 0x10dd64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDD0u, 0x10DD60u, 0x10DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD68u;
label_10dd68:
    // 0x10dd68: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x10dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x10dd6c: 0x8c642830  lw          $a0, 0x2830($v1)
    ctx->pc = 0x10dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10288)));
    // 0x10dd70: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DD70u;
    {
        const bool branch_taken_0x10dd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD70u;
        // 0x10dd74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd70) {
            ctx->pc = 0x10DDA8u;
            goto label_10dda8;
        }
    }
    ctx->pc = 0x10DD78u;
    // 0x10dd78: 0x8e300224  lw          $s0, 0x224($s1)
    ctx->pc = 0x10dd78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10dd7c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x10DD7Cu;
    {
        const bool branch_taken_0x10dd7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dd7c) {
            ctx->pc = 0x10DDB8u;
            goto label_10ddb8;
        }
    }
    ctx->pc = 0x10DD84u;
label_10dd84:
    // 0x10dd84: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10DD84u;
    SET_GPR_U32(ctx, 31, 0x10DD8Cu);
    ctx->pc = 0x10DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD84u;
    // 0x10dd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10DD84u, 0x10DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD8Cu;
label_10dd8c:
    // 0x10dd8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10dd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10dd90: 0x0  nop
    ctx->pc = 0x10dd90u;
    // NOP
    // 0x10dd94: 0x0  nop
    ctx->pc = 0x10dd94u;
    // NOP
    // 0x10dd98: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DD98u;
    {
        const bool branch_taken_0x10dd98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd98) {
            ctx->pc = 0x10DD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd84;
        }
    }
    ctx->pc = 0x10DDA0u;
    // 0x10dda0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10DDA0u;
    {
        const bool branch_taken_0x10dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA0u;
        // 0x10dda4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dda0) {
            ctx->pc = 0x10DDBCu;
            goto label_10ddbc;
        }
    }
    ctx->pc = 0x10DDA8u;
label_10dda8:
    // 0x10dda8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DDA8u;
    {
        const bool branch_taken_0x10dda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10dda8) {
            ctx->pc = 0x10DDB8u;
            goto label_10ddb8;
        }
    }
    ctx->pc = 0x10DDB0u;
    // 0x10ddb0: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10DDB0u;
    SET_GPR_U32(ctx, 31, 0x10DDB8u);
    ctx->pc = 0x10DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDB0u;
    // 0x10ddb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10DDB0u, 0x10DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDB8u;
label_10ddb8:
    // 0x10ddb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ddb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10ddbc:
    // 0x10ddbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ddbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ddc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ddc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x10DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDC4u;
        // 0x10ddc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DDCCu;
}
