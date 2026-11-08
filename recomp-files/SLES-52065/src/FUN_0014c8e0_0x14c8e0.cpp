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

// Function: FUN_0014c8e0
// Address: 0x14c8e0 - 0x14c9c8
void FUN_0014c8e0_0x14c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c8e0_0x14c8e0");
#endif

    switch (ctx->pc) {
        case 0x14c8e0u: goto label_14c8e0;
        case 0x14c8e4u: goto label_14c8e4;
        case 0x14c8e8u: goto label_14c8e8;
        case 0x14c8ecu: goto label_14c8ec;
        case 0x14c8f0u: goto label_14c8f0;
        case 0x14c8f4u: goto label_14c8f4;
        case 0x14c8f8u: goto label_14c8f8;
        case 0x14c8fcu: goto label_14c8fc;
        case 0x14c900u: goto label_14c900;
        case 0x14c904u: goto label_14c904;
        case 0x14c908u: goto label_14c908;
        case 0x14c90cu: goto label_14c90c;
        case 0x14c910u: goto label_14c910;
        case 0x14c914u: goto label_14c914;
        case 0x14c918u: goto label_14c918;
        case 0x14c91cu: goto label_14c91c;
        case 0x14c920u: goto label_14c920;
        case 0x14c924u: goto label_14c924;
        case 0x14c928u: goto label_14c928;
        case 0x14c92cu: goto label_14c92c;
        case 0x14c930u: goto label_14c930;
        case 0x14c934u: goto label_14c934;
        case 0x14c938u: goto label_14c938;
        case 0x14c93cu: goto label_14c93c;
        case 0x14c940u: goto label_14c940;
        case 0x14c944u: goto label_14c944;
        case 0x14c948u: goto label_14c948;
        case 0x14c94cu: goto label_14c94c;
        case 0x14c950u: goto label_14c950;
        case 0x14c954u: goto label_14c954;
        case 0x14c958u: goto label_14c958;
        case 0x14c95cu: goto label_14c95c;
        case 0x14c960u: goto label_14c960;
        case 0x14c964u: goto label_14c964;
        case 0x14c968u: goto label_14c968;
        case 0x14c96cu: goto label_14c96c;
        case 0x14c970u: goto label_14c970;
        case 0x14c974u: goto label_14c974;
        case 0x14c978u: goto label_14c978;
        case 0x14c97cu: goto label_14c97c;
        case 0x14c980u: goto label_14c980;
        case 0x14c984u: goto label_14c984;
        case 0x14c988u: goto label_14c988;
        case 0x14c98cu: goto label_14c98c;
        case 0x14c990u: goto label_14c990;
        case 0x14c994u: goto label_14c994;
        case 0x14c998u: goto label_14c998;
        case 0x14c99cu: goto label_14c99c;
        case 0x14c9a0u: goto label_14c9a0;
        case 0x14c9a4u: goto label_14c9a4;
        case 0x14c9a8u: goto label_14c9a8;
        case 0x14c9acu: goto label_14c9ac;
        case 0x14c9b0u: goto label_14c9b0;
        case 0x14c9b4u: goto label_14c9b4;
        case 0x14c9b8u: goto label_14c9b8;
        case 0x14c9bcu: goto label_14c9bc;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9c4u: goto label_14c9c4;
        default: break;
    }

    ctx->pc = 0x14c8e0u;

label_14c8e0:
    // 0x14c8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_14c8e4:
    // 0x14c8e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14c8e8:
    // 0x14c8e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14c8ec:
    // 0x14c8ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14c8f0:
    // 0x14c8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14c8f4:
    // 0x14c8f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c8f8:
    // 0x14c8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14c8fc:
    // 0x14c8fc: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x14c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_14c900:
    // 0x14c900: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_14c904:
    // 0x14c904: 0xc04c558  jal         func_131560
label_14c908:
    if (ctx->pc == 0x14C908u) {
        ctx->pc = 0x14C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C904u;
        // 0x14c908: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C90Cu;
        goto label_14c90c;
    }
    ctx->pc = 0x14C904u;
    SET_GPR_U32(ctx, 31, 0x14C90Cu);
    ctx->pc = 0x14C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C904u;
    // 0x14c908: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x14C904u, 0x14C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C90Cu;
label_14c90c:
    // 0x14c90c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x14c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_14c910:
    // 0x14c910: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x14c910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14c914:
    // 0x14c914: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_14c918:
    if (ctx->pc == 0x14C918u) {
        ctx->pc = 0x14C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C914u;
        // 0x14c918: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C91Cu;
        goto label_14c91c;
    }
    ctx->pc = 0x14C914u;
    {
        const bool branch_taken_0x14c914 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C914u;
        // 0x14c918: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c914) {
            ctx->pc = 0x14C934u;
            goto label_14c934;
        }
    }
    ctx->pc = 0x14C91Cu;
label_14c91c:
    // 0x14c91c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x14c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_14c920:
    // 0x14c920: 0xc053464  jal         func_14D190
label_14c924:
    if (ctx->pc == 0x14C924u) {
        ctx->pc = 0x14C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C920u;
        // 0x14c924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C928u;
        goto label_14c928;
    }
    ctx->pc = 0x14C920u;
    SET_GPR_U32(ctx, 31, 0x14C928u);
    ctx->pc = 0x14C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C920u;
    // 0x14c924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D190u, 0x14C920u, 0x14C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C928u;
label_14c928:
    // 0x14c928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c92c:
    // 0x14c92c: 0xc05360c  jal         func_14D830
label_14c930:
    if (ctx->pc == 0x14C930u) {
        ctx->pc = 0x14C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C92Cu;
        // 0x14c930: 0x264400cc  addiu       $a0, $s2, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C934u;
        goto label_14c934;
    }
    ctx->pc = 0x14C92Cu;
    SET_GPR_U32(ctx, 31, 0x14C934u);
    ctx->pc = 0x14C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C92Cu;
    // 0x14c930: 0x264400cc  addiu       $a0, $s2, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D830u, 0x14C92Cu, 0x14C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C934u;
label_14c934:
    // 0x14c934: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_14c938:
    // 0x14c938: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x14c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_14c93c:
    // 0x14c93c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_14c940:
    // 0x14c940: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c944:
    // 0x14c944: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_14c948:
    // 0x14c948: 0xc049ed0  jal         func_127B40
label_14c94c:
    if (ctx->pc == 0x14C94Cu) {
        ctx->pc = 0x14C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C948u;
        // 0x14c94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C950u;
        goto label_14c950;
    }
    ctx->pc = 0x14C948u;
    SET_GPR_U32(ctx, 31, 0x14C950u);
    ctx->pc = 0x14C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C948u;
    // 0x14c94c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x14C948u, 0x14C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C950u;
label_14c950:
    // 0x14c950: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c954:
    // 0x14c954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c958:
    // 0x14c958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c95c:
    // 0x14c95c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c960:
    // 0x14c960: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x14c960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_14c964:
    // 0x14c964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c968:
    // 0x14c968: 0xc0484ec  jal         func_1213B0
label_14c96c:
    if (ctx->pc == 0x14C96Cu) {
        ctx->pc = 0x14C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C968u;
        // 0x14c96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C970u;
        goto label_14c970;
    }
    ctx->pc = 0x14C968u;
    SET_GPR_U32(ctx, 31, 0x14C970u);
    ctx->pc = 0x14C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C968u;
    // 0x14c96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x14C968u, 0x14C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C970u;
label_14c970:
    // 0x14c970: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_14c974:
    // 0x14c974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c978:
    // 0x14c978: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x14c978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_14c97c:
    // 0x14c97c: 0x320f809  jalr        $t9
label_14c980:
    if (ctx->pc == 0x14C980u) {
        ctx->pc = 0x14C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C97Cu;
        // 0x14c980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C984u;
        goto label_14c984;
    }
    ctx->pc = 0x14C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C984u);
        ctx->pc = 0x14C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C97Cu;
        // 0x14c980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C97Cu, 0x14C984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C984u;
label_14c984:
    // 0x14c984: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_14c988:
    // 0x14c988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c98c:
    // 0x14c98c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x14c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14c990:
    // 0x14c990: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_14c994:
    // 0x14c994: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14c998:
    // 0x14c998: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14c99c:
    // 0x14c99c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c9a0:
    // 0x14c9a0: 0xc053658  jal         func_14D960
label_14c9a4:
    if (ctx->pc == 0x14C9A4u) {
        ctx->pc = 0x14C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A0u;
        // 0x14c9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C9A8u;
        goto label_14c9a8;
    }
    ctx->pc = 0x14C9A0u;
    SET_GPR_U32(ctx, 31, 0x14C9A8u);
    ctx->pc = 0x14C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9A0u;
    // 0x14c9a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D960u, 0x14C9A0u, 0x14C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A8u;
label_14c9a8:
    // 0x14c9a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14c9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14c9ac:
    // 0x14c9ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14c9b0:
    // 0x14c9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c9b4:
    // 0x14c9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c9b8:
    // 0x14c9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c9bc:
    // 0x14c9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c9c0:
    // 0x14c9c0: 0x3e00008  jr          $ra
label_14c9c4:
    if (ctx->pc == 0x14C9C4u) {
        ctx->pc = 0x14C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C0u;
        // 0x14c9c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C9C8u;
        goto label_fallthrough_0x14c9c0;
    }
    ctx->pc = 0x14C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C0u;
        // 0x14c9c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c9c0:
    ctx->pc = 0x14C9C8u;
}
