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

// Function: FUN_001e7080
// Address: 0x1e7080 - 0x1e7100
void FUN_001e7080_0x1e7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7080_0x1e7080");
#endif

    switch (ctx->pc) {
        case 0x1e70b4u: goto label_1e70b4;
        case 0x1e70bcu: goto label_1e70bc;
        default: break;
    }

    ctx->pc = 0x1e7080u;

    // 0x1e7080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e7084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e7088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e708c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e7090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7098: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e7098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e709c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e709cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e70a4: 0xd1082b  sltu        $at, $a2, $s1
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e70a8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E70A8u;
    {
        const bool branch_taken_0x1e70a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70A8u;
        // 0x1e70ac: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70a8) {
            ctx->pc = 0x1E70E0u;
            goto label_1e70e0;
        }
    }
    ctx->pc = 0x1E70B0u;
    // 0x1e70b0: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x1e70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1e70b4:
    // 0x1e70b4: 0xc07a1d0  jal         func_1E8740
    ctx->pc = 0x1E70B4u;
    SET_GPR_U32(ctx, 31, 0x1E70BCu);
    ctx->pc = 0x1E70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70B4u;
    // 0x1e70b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8740u, 0x1E70B4u, 0x1E70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70BCu;
label_1e70bc:
    // 0x1e70bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e70bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e70c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1e70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1e70c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e70c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E70C8u;
    {
        const bool branch_taken_0x1e70c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e70c8) {
            ctx->pc = 0x1E70E0u;
            goto label_1e70e0;
        }
    }
    ctx->pc = 0x1E70D0u;
    // 0x1e70d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e70d4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1e70d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e70d8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E70D8u;
    {
        const bool branch_taken_0x1e70d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70D8u;
        // 0x1e70dc: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e70d8) {
            ctx->pc = 0x1E70B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e70b4;
        }
    }
    ctx->pc = 0x1E70E0u;
label_1e70e0:
    // 0x1e70e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e70e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e70e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e70e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e70e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e70ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e70ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e70f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e70f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e70f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e70f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70F8u;
        // 0x1e70fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7100u;
}
