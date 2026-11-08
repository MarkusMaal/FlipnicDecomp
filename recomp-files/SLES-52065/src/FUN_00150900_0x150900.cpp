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

// Function: FUN_00150900
// Address: 0x150900 - 0x1509a8
void FUN_00150900_0x150900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150900_0x150900");
#endif

    switch (ctx->pc) {
        case 0x15095cu: goto label_15095c;
        case 0x150968u: goto label_150968;
        default: break;
    }

    ctx->pc = 0x150900u;

    // 0x150900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x150908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15090c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150910: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x150910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150918: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x150918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15091c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150920: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x150920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150924: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150928: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15092c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15092Cu;
    {
        const bool branch_taken_0x15092c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x150930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15092Cu;
        // 0x150930: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15092c) {
            ctx->pc = 0x15093Cu;
            goto label_15093c;
        }
    }
    ctx->pc = 0x150934u;
    // 0x150934: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x150934u;
    {
        const bool branch_taken_0x150934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150934u;
        // 0x150938: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150934) {
            ctx->pc = 0x15098Cu;
            goto label_15098c;
        }
    }
    ctx->pc = 0x15093Cu;
label_15093c:
    // 0x15093c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150940: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150944: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150948: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x150948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x15094c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x150950: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x150950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150954u;
    {
        const bool branch_taken_0x150954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150954u;
        // 0x150958: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150954) {
            ctx->pc = 0x150974u;
            goto label_150974;
        }
    }
    ctx->pc = 0x15095Cu;
label_15095c:
    // 0x15095c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150960: 0xc0401a4  jal         func_100690
    ctx->pc = 0x150960u;
    SET_GPR_U32(ctx, 31, 0x150968u);
    ctx->pc = 0x150964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150960u;
    // 0x150964: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x150960u, 0x150968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150968u;
label_150968:
    // 0x150968: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x150968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15096c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x150970: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x150970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_150974:
    // 0x150974: 0x0  nop
    ctx->pc = 0x150974u;
    // NOP
    // 0x150978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15097c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150980: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x150980u;
    {
        const bool branch_taken_0x150980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x150980) {
            ctx->pc = 0x15095Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15095c;
        }
    }
    ctx->pc = 0x150988u;
    // 0x150988: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x150988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_15098c:
    // 0x15098c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15099c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1509a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1509A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1509A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509A0u;
        // 0x1509a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1509A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1509A8u;
}
