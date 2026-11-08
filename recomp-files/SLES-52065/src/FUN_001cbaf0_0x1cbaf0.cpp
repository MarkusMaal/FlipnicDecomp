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

// Function: FUN_001cbaf0
// Address: 0x1cbaf0 - 0x1cbb38
void FUN_001cbaf0_0x1cbaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbaf0_0x1cbaf0");
#endif

    switch (ctx->pc) {
        case 0x1cbb1cu: goto label_1cbb1c;
        default: break;
    }

    ctx->pc = 0x1cbaf0u;

    // 0x1cbaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cbaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cbaf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cbafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb00: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x1cbb00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cbb04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB04u;
    {
        const bool branch_taken_0x1cbb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB04u;
        // 0x1cbb08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb04) {
            ctx->pc = 0x1CBB14u;
            goto label_1cbb14;
        }
    }
    ctx->pc = 0x1CBB0Cu;
    // 0x1cbb0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBB0Cu;
    {
        const bool branch_taken_0x1cbb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB0Cu;
        // 0x1cbb10: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb0c) {
            ctx->pc = 0x1CBB2Cu;
            goto label_1cbb2c;
        }
    }
    ctx->pc = 0x1CBB14u;
label_1cbb14:
    // 0x1cbb14: 0xc072f04  jal         func_1CBC10
    ctx->pc = 0x1CBB14u;
    SET_GPR_U32(ctx, 31, 0x1CBB1Cu);
    ctx->pc = 0x1CBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC10u, 0x1CBB14u, 0x1CBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB1Cu;
label_1cbb1c:
    // 0x1cbb1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cbb20: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1cbb20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1cbb24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cbb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbb2c:
    // 0x1cbb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB30u;
        // 0x1cbb34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBB38u;
}
