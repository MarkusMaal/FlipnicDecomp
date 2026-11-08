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

// Function: FUN_00151e40
// Address: 0x151e40 - 0x152040
void FUN_00151e40_0x151e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151e40_0x151e40");
#endif

    switch (ctx->pc) {
        case 0x151e70u: goto label_151e70;
        case 0x151ebcu: goto label_151ebc;
        case 0x151f00u: goto label_151f00;
        case 0x151f24u: goto label_151f24;
        case 0x151f60u: goto label_151f60;
        case 0x151fe4u: goto label_151fe4;
        default: break;
    }

    ctx->pc = 0x151e40u;

    // 0x151e40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x151e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x151e44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x151e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x151e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x151e4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x151e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x151e50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x151e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x151e54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151e64: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x151e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151e68: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x151E68u;
    SET_GPR_U32(ctx, 31, 0x151E70u);
    ctx->pc = 0x151E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E68u;
    // 0x151e6c: 0x24a5f380  addiu       $a1, $a1, -0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x151E68u, 0x151E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E70u;
label_151e70:
    // 0x151e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e74: 0x6000069  bltz        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x151E74u;
    {
        const bool branch_taken_0x151e74 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x151e74) {
            ctx->pc = 0x15201Cu;
            goto label_15201c;
        }
    }
    ctx->pc = 0x151E7Cu;
    // 0x151e7c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151E7Cu;
    {
        const bool branch_taken_0x151e7c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x151E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E7Cu;
        // 0x151e80: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e7c) {
            ctx->pc = 0x151E8Cu;
            goto label_151e8c;
        }
    }
    ctx->pc = 0x151E84u;
    // 0x151e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151E84u;
    {
        const bool branch_taken_0x151e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E84u;
        // 0x151e88: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e84) {
            ctx->pc = 0x151EA4u;
            goto label_151ea4;
        }
    }
    ctx->pc = 0x151E8Cu;
label_151e8c:
    // 0x151e8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151e94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151e9c: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151ea0: 0x0  nop
    ctx->pc = 0x151ea0u;
    // NOP
label_151ea4:
    // 0x151ea4: 0x1a60005d  blez        $s3, . + 4 + (0x5D << 2)
    ctx->pc = 0x151EA4u;
    {
        const bool branch_taken_0x151ea4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x151ea4) {
            ctx->pc = 0x15201Cu;
            goto label_15201c;
        }
    }
    ctx->pc = 0x151EACu;
    // 0x151eac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151eb0: 0x8c752c10  lw          $s5, 0x2C10($v1)
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x151eb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x151EB4u;
    {
        const bool branch_taken_0x151eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EB4u;
        // 0x151eb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151eb4) {
            ctx->pc = 0x151F04u;
            goto label_151f04;
        }
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151ec0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x151ec4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x151ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x151ec8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x151ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151ecc: 0x8ca32c1c  lw          $v1, 0x2C1C($a1)
    ctx->pc = 0x151eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x151ed0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151ed4: 0x90630043  lbu         $v1, 0x43($v1)
    ctx->pc = 0x151ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x151ed8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x151ED8u;
    {
        const bool branch_taken_0x151ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ED8u;
        // 0x151edc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ed8) {
            ctx->pc = 0x151F00u;
            goto label_151f00;
        }
    }
    ctx->pc = 0x151EE0u;
    // 0x151ee0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x151ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151ee4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x151ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151ee8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x151ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151eec: 0x8ca22c1c  lw          $v0, 0x2C1C($a1)
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x151ef0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151ef4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ef8: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151EF8u;
    SET_GPR_U32(ctx, 31, 0x151F00u);
    ctx->pc = 0x151EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF8u;
    // 0x151efc: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151EF8u, 0x151F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F00u;
label_151f00:
    // 0x151f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_151f04:
    // 0x151f04: 0x0  nop
    ctx->pc = 0x151f04u;
    // NOP
    // 0x151f08: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151f0c: 0x8c632c20  lw          $v1, 0x2C20($v1)
    ctx->pc = 0x151f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x151f10: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151f14: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x151F14u;
    {
        const bool branch_taken_0x151f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f14) {
            ctx->pc = 0x151EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151ebc;
        }
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x151F1Cu;
    {
        const bool branch_taken_0x151f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F1Cu;
        // 0x151f20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f1c) {
            ctx->pc = 0x15200Cu;
            goto label_15200c;
        }
    }
    ctx->pc = 0x151F24u;
label_151f24:
    // 0x151f24: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x151f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151f28: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151f2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151f30: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x151f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151f34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151f38: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x151f3c: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x151f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x151f40: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x151f44: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x151f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151f48: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x151f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151f4c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x151f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151f50: 0x1475002c  bne         $v1, $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x151F50u;
    {
        const bool branch_taken_0x151f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x151F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F50u;
        // 0x151f54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f50) {
            ctx->pc = 0x152004u;
            goto label_152004;
        }
    }
    ctx->pc = 0x151F58u;
    // 0x151f58: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x151F58u;
    {
        const bool branch_taken_0x151f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f58) {
            ctx->pc = 0x151FECu;
            goto label_151fec;
        }
    }
    ctx->pc = 0x151F60u;
label_151f60:
    // 0x151f60: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x151f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x151f64: 0x1643001f  bne         $s2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x151F64u;
    {
        const bool branch_taken_0x151f64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x151f64) {
            ctx->pc = 0x151FE4u;
            goto label_151fe4;
        }
    }
    ctx->pc = 0x151F6Cu;
    // 0x151f6c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151f70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x151f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151f74: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x151f78: 0x86890004  lh          $t1, 0x4($s4)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x151f7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151f80: 0x868a0006  lh          $t2, 0x6($s4)
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x151f84: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x151f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151f90: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x151f94: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x151f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151f9c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151fa0: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x151fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x151fa4: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x151fa8: 0x1241823  subu        $v1, $t1, $a0
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x151fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fb0: 0xa1070043  sb          $a3, 0x43($t0)
    ctx->pc = 0x151fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 67), (uint8_t)GPR_U32(ctx, 7));
    // 0x151fb4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x151fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x151fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151fbc: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x151fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x151fc0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x151fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x151fc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151fc8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x151fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x151fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fd0: 0x0  nop
    ctx->pc = 0x151fd0u;
    // NOP
    // 0x151fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151fd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151fdc: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151FDCu;
    SET_GPR_U32(ctx, 31, 0x151FE4u);
    ctx->pc = 0x151FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FDCu;
    // 0x151fe0: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151FDCu, 0x151FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FE4u;
label_151fe4:
    // 0x151fe4: 0x0  nop
    ctx->pc = 0x151fe4u;
    // NOP
    // 0x151fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x151fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_151fec:
    // 0x151fec: 0x0  nop
    ctx->pc = 0x151fecu;
    // NOP
    // 0x151ff0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x151ff4: 0x8c632c20  lw          $v1, 0x2C20($v1)
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11296)));
    // 0x151ff8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x151ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x151ffc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x151FFCu;
    {
        const bool branch_taken_0x151ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ffc) {
            ctx->pc = 0x151F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f60;
        }
    }
    ctx->pc = 0x152004u;
label_152004:
    // 0x152004: 0x0  nop
    ctx->pc = 0x152004u;
    // NOP
    // 0x152008: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15200c:
    // 0x15200c: 0x0  nop
    ctx->pc = 0x15200cu;
    // NOP
    // 0x152010: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x152010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x152014: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x152014u;
    {
        const bool branch_taken_0x152014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152014) {
            ctx->pc = 0x151F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f24;
        }
    }
    ctx->pc = 0x15201Cu;
label_15201c:
    // 0x15201c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x152020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15202c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15202cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152038: 0x3e00008  jr          $ra
    ctx->pc = 0x152038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152038u;
        // 0x15203c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152040u;
}
