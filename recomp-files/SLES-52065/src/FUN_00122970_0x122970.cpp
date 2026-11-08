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

// Function: FUN_00122970
// Address: 0x122970 - 0x122adc
void FUN_00122970_0x122970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122970_0x122970");
#endif

    switch (ctx->pc) {
        case 0x1229c4u: goto label_1229c4;
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a38u: goto label_122a38;
        case 0x122a44u: goto label_122a44;
        case 0x122a50u: goto label_122a50;
        case 0x122a68u: goto label_122a68;
        case 0x122a88u: goto label_122a88;
        default: break;
    }

    ctx->pc = 0x122970u;

    // 0x122970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x122970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x122974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x122974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x122978: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x122978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12297c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x122980: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x122980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122984: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x122984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x122988: 0x27d70004  addiu       $s7, $fp, 0x4
    ctx->pc = 0x122988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x12298c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x122990: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x122990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x122994: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x122994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12299c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12299cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1229a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1229a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1229a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1229a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1229a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1229acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1229b0: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1229b4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1229b4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1229b8: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1229B8u;
    {
        const bool branch_taken_0x1229b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1229BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229B8u;
        // 0x1229bc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1229b8) {
            ctx->pc = 0x122A28u;
            goto label_122a28;
        }
    }
    ctx->pc = 0x1229C0u;
    // 0x1229c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1229c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1229c4:
    // 0x1229c4: 0xc048880  jal         func_122200
    ctx->pc = 0x1229C4u;
    SET_GPR_U32(ctx, 31, 0x1229CCu);
    ctx->pc = 0x1229C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229C4u;
    // 0x1229c8: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1229C4u, 0x1229CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229CCu;
label_1229cc:
    // 0x1229cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1229ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229d0: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1229D0u;
    SET_GPR_U32(ctx, 31, 0x1229D8u);
    ctx->pc = 0x1229D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229D0u;
    // 0x1229d4: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1229D0u, 0x1229D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229D8u;
label_1229d8:
    // 0x1229d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1229d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229dc: 0xc048880  jal         func_122200
    ctx->pc = 0x1229DCu;
    SET_GPR_U32(ctx, 31, 0x1229E4u);
    ctx->pc = 0x1229E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229DCu;
    // 0x1229e0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1229DCu, 0x1229E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229E4u;
label_1229e4:
    // 0x1229e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1229e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1229ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1229F4u;
    SET_GPR_U32(ctx, 31, 0x1229FCu);
    ctx->pc = 0x1229F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229F4u;
    // 0x1229f8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1229F4u, 0x1229FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229FCu;
label_1229fc:
    // 0x1229fc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1229FCu;
    {
        const bool branch_taken_0x1229fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1229fc) {
            ctx->pc = 0x122A10u;
            goto label_122a10;
        }
    }
    ctx->pc = 0x122A04u;
    // 0x122a04: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x122a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122A08u;
    {
        const bool branch_taken_0x122a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A08u;
        // 0x122a0c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a08) {
            ctx->pc = 0x122A20u;
            goto label_122a20;
        }
    }
    ctx->pc = 0x122A10u;
label_122a10:
    // 0x122a10: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a14: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x122a18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x122a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122a20:
    // 0x122a20: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x122A20u;
    {
        const bool branch_taken_0x122a20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A20u;
        // 0x122a24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a20) {
            ctx->pc = 0x1229C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1229c4;
        }
    }
    ctx->pc = 0x122A28u;
label_122a28:
    // 0x122a28: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x122A28u;
    {
        const bool branch_taken_0x122a28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A28u;
        // 0x122a2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a28) {
            ctx->pc = 0x122A74u;
            goto label_122a74;
        }
    }
    ctx->pc = 0x122A30u;
    // 0x122a30: 0xc048880  jal         func_122200
    ctx->pc = 0x122A30u;
    SET_GPR_U32(ctx, 31, 0x122A38u);
    ctx->pc = 0x122A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A30u;
    // 0x122a34: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122A30u, 0x122A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A38u;
label_122a38:
    // 0x122a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a3c: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122A3Cu;
    SET_GPR_U32(ctx, 31, 0x122A44u);
    ctx->pc = 0x122A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A3Cu;
    // 0x122a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122A3Cu, 0x122A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A44u;
label_122a44:
    // 0x122a44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x122a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a48: 0xc048880  jal         func_122200
    ctx->pc = 0x122A48u;
    SET_GPR_U32(ctx, 31, 0x122A50u);
    ctx->pc = 0x122A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A48u;
    // 0x122a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122A48u, 0x122A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A50u;
label_122a50:
    // 0x122a50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a58: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x122a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a60: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x122A60u;
    SET_GPR_U32(ctx, 31, 0x122A68u);
    ctx->pc = 0x122A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A60u;
    // 0x122a64: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x122A60u, 0x122A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A68u;
label_122a68:
    // 0x122a68: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x122A68u;
    {
        const bool branch_taken_0x122a68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x122a68) {
            ctx->pc = 0x122A9Cu;
            goto label_122a9c;
        }
    }
    ctx->pc = 0x122A70u;
    // 0x122a70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x122a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_122a74:
    // 0x122a74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a7c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x122a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a80: 0xc048d50  jal         func_123540
    ctx->pc = 0x122A80u;
    SET_GPR_U32(ctx, 31, 0x122A88u);
    ctx->pc = 0x122A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A80u;
    // 0x122a84: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123540u, 0x122A80u, 0x122A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A88u;
label_122a88:
    // 0x122a88: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x122a88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x122a8c: 0x93838040  lbu         $v1, -0x7FC0($gp)
    ctx->pc = 0x122a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934592)));
    // 0x122a90: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x122a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122A94u;
    {
        const bool branch_taken_0x122a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A94u;
        // 0x122a98: 0xa2a30004  sb          $v1, 0x4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a94) {
            ctx->pc = 0x122AACu;
            goto label_122aac;
        }
    }
    ctx->pc = 0x122A9Cu;
label_122a9c:
    // 0x122a9c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x122a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x122aa0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x122aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122aa4: 0x93838044  lbu         $v1, -0x7FBC($gp)
    ctx->pc = 0x122aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934596)));
    // 0x122aa8: 0xa2a30004  sb          $v1, 0x4($s5)
    ctx->pc = 0x122aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 3));
label_122aac:
    // 0x122aac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x122aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122ab0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x122ab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122ab4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x122ab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122ab8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x122ab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122abc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x122abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122ac0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122ac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x122AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122AD4u;
        // 0x122ad8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122ADCu;
}
