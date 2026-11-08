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

// Function: FUN_001bb8e0
// Address: 0x1bb8e0 - 0x1bb9fc
void FUN_001bb8e0_0x1bb8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb8e0_0x1bb8e0");
#endif

    switch (ctx->pc) {
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9b8u: goto label_1bb9b8;
        default: break;
    }

    ctx->pc = 0x1bb8e0u;

    // 0x1bb8e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb8e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bb8e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bb8ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb8f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb8f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bb8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb8fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb904: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bb904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb908: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1bb908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb90c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1bb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bb910: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB910u;
    {
        const bool branch_taken_0x1bb910 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB910u;
        // 0x1bb914: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb910) {
            ctx->pc = 0x1BB920u;
            goto label_1bb920;
        }
    }
    ctx->pc = 0x1BB918u;
    // 0x1bb918: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BB918u;
    {
        const bool branch_taken_0x1bb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB918u;
        // 0x1bb91c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb918) {
            ctx->pc = 0x1BB9DCu;
            goto label_1bb9dc;
        }
    }
    ctx->pc = 0x1BB920u;
label_1bb920:
    // 0x1bb920: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb924: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb928: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1bb928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb92c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1bb930: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1bb930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb934: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BB938u;
    {
        const bool branch_taken_0x1bb938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB938u;
        // 0x1bb93c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb938) {
            ctx->pc = 0x1BB9C4u;
            goto label_1bb9c4;
        }
    }
    ctx->pc = 0x1BB940u;
    // 0x1bb940: 0x24740008  addiu       $s4, $v1, 0x8
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1bb944:
    // 0x1bb944: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB944u;
    {
        const bool branch_taken_0x1bb944 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb944) {
            ctx->pc = 0x1BB9A8u;
            goto label_1bb9a8;
        }
    }
    ctx->pc = 0x1BB94Cu;
    // 0x1bb94c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bb950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb954: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB954u;
    {
        const bool branch_taken_0x1bb954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb954) {
            ctx->pc = 0x1BB974u;
            goto label_1bb974;
        }
    }
    ctx->pc = 0x1BB95Cu;
    // 0x1bb95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB95Cu;
    {
        const bool branch_taken_0x1bb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb95c) {
            ctx->pc = 0x1BB96Cu;
            goto label_1bb96c;
        }
    }
    ctx->pc = 0x1BB964u;
    // 0x1bb964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB964u;
    {
        const bool branch_taken_0x1bb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB964u;
        // 0x1bb968: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb964) {
            ctx->pc = 0x1BB974u;
            goto label_1bb974;
        }
    }
    ctx->pc = 0x1BB96Cu;
label_1bb96c:
    // 0x1bb96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb970: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bb970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1bb974:
    // 0x1bb974: 0x0  nop
    ctx->pc = 0x1bb974u;
    // NOP
    // 0x1bb978: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb980: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1bb980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1bb984: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1bb984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1bb988: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1bb988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1bb98c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bb98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bb990: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB990u;
    {
        const bool branch_taken_0x1bb990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb990) {
            ctx->pc = 0x1BB9A8u;
            goto label_1bb9a8;
        }
    }
    ctx->pc = 0x1BB998u;
    // 0x1bb998: 0xc06ee80  jal         func_1BBA00
    ctx->pc = 0x1BB998u;
    SET_GPR_U32(ctx, 31, 0x1BB9A0u);
    ctx->pc = 0x1BB99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB998u;
    // 0x1bb99c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA00u, 0x1BB998u, 0x1BB9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A0u;
label_1bb9a0:
    // 0x1bb9a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB9A0u;
    SET_GPR_U32(ctx, 31, 0x1BB9A8u);
    ctx->pc = 0x1BB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9A0u;
    // 0x1bb9a4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB9A0u, 0x1BB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9A8u;
label_1bb9a8:
    // 0x1bb9a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb9ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb9b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB9B0u;
    SET_GPR_U32(ctx, 31, 0x1BB9B8u);
    ctx->pc = 0x1BB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB9B0u;
    // 0x1bb9b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB9B0u, 0x1BB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB9B8u;
label_1bb9b8:
    // 0x1bb9b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb9bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bb9c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1bb9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1bb9c4:
    // 0x1bb9c4: 0x0  nop
    ctx->pc = 0x1bb9c4u;
    // NOP
    // 0x1bb9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb9cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb9d0: 0x1464ffdc  bne         $v1, $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BB9D0u;
    {
        const bool branch_taken_0x1bb9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D0u;
        // 0x1bb9d4: 0x24740008  addiu       $s4, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d0) {
            ctx->pc = 0x1BB944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb944;
        }
    }
    ctx->pc = 0x1BB9D8u;
    // 0x1bb9d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1bb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_1bb9dc:
    // 0x1bb9dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bb9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb9e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb9e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb9ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9F4u;
        // 0x1bb9f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB9FCu;
}
