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

// Function: FUN_001089c0
// Address: 0x1089c0 - 0x108b80
void FUN_001089c0_0x1089c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001089c0_0x1089c0");
#endif

    switch (ctx->pc) {
        case 0x1089f8u: goto label_1089f8;
        case 0x108a54u: goto label_108a54;
        case 0x108ac8u: goto label_108ac8;
        case 0x108afcu: goto label_108afc;
        case 0x108b38u: goto label_108b38;
        case 0x108b44u: goto label_108b44;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b5cu: goto label_108b5c;
        default: break;
    }

    ctx->pc = 0x1089c0u;

    // 0x1089c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1089c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1089c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1089c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1089c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1089c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1089cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1089ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1089d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1089d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1089d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1089d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1089d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1089dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1089dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1089e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1089e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1089e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1089e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1089e8: 0x8c942c10  lw          $s4, 0x2C10($a0)
    ctx->pc = 0x1089e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
    // 0x1089ec: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1089f0: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1089F0u;
    SET_GPR_U32(ctx, 31, 0x1089F8u);
    ctx->pc = 0x1089F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089F0u;
    // 0x1089f4: 0x24a5e1f0  addiu       $a1, $a1, -0x1E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1089F0u, 0x1089F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089F8u;
label_1089f8:
    // 0x1089f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1089f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089fc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1089FCu;
    {
        const bool branch_taken_0x1089fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x108A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089FCu;
        // 0x108a00: 0x8f848388  lw          $a0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089fc) {
            ctx->pc = 0x108A0Cu;
            goto label_108a0c;
        }
    }
    ctx->pc = 0x108A04u;
    // 0x108a04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108A04u;
    {
        const bool branch_taken_0x108a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A04u;
        // 0x108a08: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a04) {
            ctx->pc = 0x108A24u;
            goto label_108a24;
        }
    }
    ctx->pc = 0x108A0Cu;
label_108a0c:
    // 0x108a0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a10: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x108a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108a1c: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x108a20: 0x0  nop
    ctx->pc = 0x108a20u;
    // NOP
label_108a24:
    // 0x108a24: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108a28: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108a2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x108A2Cu;
    {
        const bool branch_taken_0x108a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A2Cu;
        // 0x108a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a2c) {
            ctx->pc = 0x108A80u;
            goto label_108a80;
        }
    }
    ctx->pc = 0x108A34u;
    // 0x108a34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x108a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a38: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108a3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108a40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x108a48: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x108a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x108a4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a50: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x108a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_108a54:
    // 0x108a54: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x108a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a58: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x108a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108a5c: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x108A5Cu;
    {
        const bool branch_taken_0x108a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x108a5c) {
            ctx->pc = 0x108A70u;
            goto label_108a70;
        }
    }
    ctx->pc = 0x108A64u;
    // 0x108a64: 0x84d10004  lh          $s1, 0x4($a2)
    ctx->pc = 0x108a64u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x108a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108A68u;
    {
        const bool branch_taken_0x108a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A68u;
        // 0x108a6c: 0x84d20002  lh          $s2, 0x2($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a68) {
            ctx->pc = 0x108A80u;
            goto label_108a80;
        }
    }
    ctx->pc = 0x108A70u;
label_108a70:
    // 0x108a70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108a74: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x108a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108a78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x108A78u;
    {
        const bool branch_taken_0x108a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A78u;
        // 0x108a7c: 0x651018  mult        $v0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a78) {
            ctx->pc = 0x108A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108a54;
        }
    }
    ctx->pc = 0x108A80u;
label_108a80:
    // 0x108a80: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x108a84: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108a88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x108a8c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108a90: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x108a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x108a94: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x108a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108a98: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x108a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x108a9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108A9Cu;
    {
        const bool branch_taken_0x108a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A9Cu;
        // 0x108aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a9c) {
            ctx->pc = 0x108AA8u;
            goto label_108aa8;
        }
    }
    ctx->pc = 0x108AA4u;
    // 0x108aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108aa8:
    // 0x108aa8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x108AA8u;
    {
        const bool branch_taken_0x108aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108aa8) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108AB0u;
    // 0x108ab0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x108ab4: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ab8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x108ab8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x108abc: 0x84470006  lh          $a3, 0x6($v0)
    ctx->pc = 0x108abcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x108ac0: 0xc0583b8  jal         func_160EE0
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AC0u;
    // 0x108ac4: 0x26a42c00  addiu       $a0, $s5, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x108AC0u, 0x108AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x108ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108acc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x108accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108ad0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x108AD0u;
    {
        const bool branch_taken_0x108ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AD0u;
        // 0x108ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ad0) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108AD8u;
    // 0x108ad8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x108ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x108adc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x108adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108ae0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108ae4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ae8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108aec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108af0: 0x8484000a  lh          $a0, 0xA($a0)
    ctx->pc = 0x108af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x108af4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108af8: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x108af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_108afc:
    // 0x108afc: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x108afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108b00: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108b04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108B04u;
    {
        const bool branch_taken_0x108b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108b04) {
            ctx->pc = 0x108B18u;
            goto label_108b18;
        }
    }
    ctx->pc = 0x108B0Cu;
    // 0x108b0c: 0x84f10004  lh          $s1, 0x4($a3)
    ctx->pc = 0x108b0cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x108b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x108B10u;
    {
        const bool branch_taken_0x108b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B10u;
        // 0x108b14: 0x84f20002  lh          $s2, 0x2($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b10) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108B18u;
label_108b18:
    // 0x108b18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x108b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x108b1c: 0xd3182a  slt         $v1, $a2, $s3
    ctx->pc = 0x108b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108b20: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x108B20u;
    {
        const bool branch_taken_0x108b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B20u;
        // 0x108b24: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b20) {
            ctx->pc = 0x108AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108afc;
        }
    }
    ctx->pc = 0x108B28u;
label_108b28:
    // 0x108b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b30: 0xc057040  jal         func_15C100
    ctx->pc = 0x108B30u;
    SET_GPR_U32(ctx, 31, 0x108B38u);
    ctx->pc = 0x108B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B30u;
    // 0x108b34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x108B30u, 0x108B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B38u;
label_108b38:
    // 0x108b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xc058018  jal         func_160060
    ctx->pc = 0x108B3Cu;
    SET_GPR_U32(ctx, 31, 0x108B44u);
    ctx->pc = 0x108B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B3Cu;
    // 0x108b40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x108B3Cu, 0x108B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B44u;
label_108b44:
    // 0x108b44: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x108B44u;
    SET_GPR_U32(ctx, 31, 0x108B4Cu);
    ctx->pc = 0x108B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B44u;
    // 0x108b48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x108B44u, 0x108B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B4Cu;
label_108b4c:
    // 0x108b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b54: 0xc042360  jal         func_108D80
    ctx->pc = 0x108B54u;
    SET_GPR_U32(ctx, 31, 0x108B5Cu);
    ctx->pc = 0x108B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B54u;
    // 0x108b58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x108B54u, 0x108B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B5Cu;
label_108b5c:
    // 0x108b5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108b60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x108b60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b78: 0x3e00008  jr          $ra
    ctx->pc = 0x108B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B78u;
        // 0x108b7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B80u;
}
