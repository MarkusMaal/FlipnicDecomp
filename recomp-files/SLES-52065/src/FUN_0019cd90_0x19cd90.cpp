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

// Function: FUN_0019cd90
// Address: 0x19cd90 - 0x19cdf0
void FUN_0019cd90_0x19cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019cd90_0x19cd90");
#endif

    switch (ctx->pc) {
        case 0x19cda0u: goto label_19cda0;
        default: break;
    }

    ctx->pc = 0x19cd90u;

    // 0x19cd90: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x19cd90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19cd94: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CD94u;
    {
        const bool branch_taken_0x19cd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD94u;
        // 0x19cd98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd94) {
            ctx->pc = 0x19CDE4u;
            goto label_19cde4;
        }
    }
    ctx->pc = 0x19CD9Cu;
    // 0x19cd9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cda0:
    // 0x19cda0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19cda4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x19cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19cda8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19CDA8u;
    {
        const bool branch_taken_0x19cda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDA8u;
        // 0x19cdac: 0x91840  sll         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cda8) {
            ctx->pc = 0x19CDD4u;
            goto label_19cdd4;
        }
    }
    ctx->pc = 0x19CDB0u;
    // 0x19cdb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cdb4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19cdb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19cdbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19cdc0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x19cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x19cdc4: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x19cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x19cdc8: 0x8200a  movz        $a0, $zero, $t0
    ctx->pc = 0x19cdc8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x19cdcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CDCCu;
    {
        const bool branch_taken_0x19cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDCCu;
        // 0x19cdd0: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdcc) {
            ctx->pc = 0x19CDE4u;
            goto label_19cde4;
        }
    }
    ctx->pc = 0x19CDD4u;
label_19cdd4:
    // 0x19cdd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19cdd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19cdd8: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x19cdd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19cddc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19CDDCu;
    {
        const bool branch_taken_0x19cddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDDCu;
        // 0x19cde0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cddc) {
            ctx->pc = 0x19CDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cda0;
        }
    }
    ctx->pc = 0x19CDE4u;
label_19cde4:
    // 0x19cde4: 0x0  nop
    ctx->pc = 0x19cde4u;
    // NOP
    // 0x19cde8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDF0u;
}
