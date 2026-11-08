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

// Function: FUN_001e7010
// Address: 0x1e7010 - 0x1e7080
void FUN_001e7010_0x1e7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7010_0x1e7010");
#endif

    switch (ctx->pc) {
        case 0x1e7040u: goto label_1e7040;
        case 0x1e704cu: goto label_1e704c;
        default: break;
    }

    ctx->pc = 0x1e7010u;

    // 0x1e7010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e7014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e7018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e701c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7028: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e7028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e702c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7030: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x1e7030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7034: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e7034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7038: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7038u;
    {
        const bool branch_taken_0x1e7038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7038u;
        // 0x1e703c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7038) {
            ctx->pc = 0x1E7060u;
            goto label_1e7060;
        }
    }
    ctx->pc = 0x1E7040u;
label_1e7040:
    // 0x1e7040: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1e7044: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E7044u;
    SET_GPR_U32(ctx, 31, 0x1E704Cu);
    ctx->pc = 0x1E7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7044u;
    // 0x1e7048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E7044u, 0x1E704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E704Cu;
label_1e704c:
    // 0x1e704c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e704cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7050: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e7054: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1e7054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E7058u;
    {
        const bool branch_taken_0x1e7058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7058u;
        // 0x1e705c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7058) {
            ctx->pc = 0x1E7040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7040;
        }
    }
    ctx->pc = 0x1E7060u;
label_1e7060:
    // 0x1e7060: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e7060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e706c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e706cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7078: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7078u;
        // 0x1e707c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7080u;
}
