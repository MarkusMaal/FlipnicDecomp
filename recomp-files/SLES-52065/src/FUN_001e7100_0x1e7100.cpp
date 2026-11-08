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

// Function: FUN_001e7100
// Address: 0x1e7100 - 0x1e7180
void FUN_001e7100_0x1e7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7100_0x1e7100");
#endif

    switch (ctx->pc) {
        case 0x1e7134u: goto label_1e7134;
        case 0x1e713cu: goto label_1e713c;
        default: break;
    }

    ctx->pc = 0x1e7100u;

    // 0x1e7100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e7104: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e7108: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e710c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7110: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7118: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e711c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e711cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7124: 0xd1082b  sltu        $at, $a2, $s1
    ctx->pc = 0x1e7124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7128: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7128u;
    {
        const bool branch_taken_0x1e7128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7128u;
        // 0x1e712c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7128) {
            ctx->pc = 0x1E7160u;
            goto label_1e7160;
        }
    }
    ctx->pc = 0x1E7130u;
    // 0x1e7130: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1e7134:
    // 0x1e7134: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E7134u;
    SET_GPR_U32(ctx, 31, 0x1E713Cu);
    ctx->pc = 0x1E7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7134u;
    // 0x1e7138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E7134u, 0x1E713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E713Cu;
label_1e713c:
    // 0x1e713c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e7140: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1e7140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1e7144: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e7144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e7148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7148u;
    {
        const bool branch_taken_0x1e7148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7148) {
            ctx->pc = 0x1E7160u;
            goto label_1e7160;
        }
    }
    ctx->pc = 0x1E7150u;
    // 0x1e7150: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e7154: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1e7154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7158: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7158u;
    {
        const bool branch_taken_0x1e7158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7158u;
        // 0x1e715c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7158) {
            ctx->pc = 0x1E7134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7134;
        }
    }
    ctx->pc = 0x1E7160u;
label_1e7160:
    // 0x1e7160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e716c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e716cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7178: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7178u;
        // 0x1e717c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7180u;
}
