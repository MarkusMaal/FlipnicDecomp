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

// Function: FUN_00165d20
// Address: 0x165d20 - 0x165e24
void FUN_00165d20_0x165d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165d20_0x165d20");
#endif

    switch (ctx->pc) {
        case 0x165d8cu: goto label_165d8c;
        case 0x165dc8u: goto label_165dc8;
        case 0x165dd4u: goto label_165dd4;
        case 0x165decu: goto label_165dec;
        case 0x165e00u: goto label_165e00;
        case 0x165e0cu: goto label_165e0c;
        default: break;
    }

    ctx->pc = 0x165d20u;

    // 0x165d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165d28: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x165d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165d30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165d38: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x165d3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d40: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x165d44: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x165d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x165d48: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x165d48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165d4c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x165d4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165d50: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x165d50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165d54: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x165d54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x165d58: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165d5c: 0x78860060  lq          $a2, 0x60($a0)
    ctx->pc = 0x165d5cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x165d60: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x165d60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x165d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x165d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165d6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x165d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d70: 0x26080290  addiu       $t0, $s0, 0x290
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x165d74: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x165d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165d78: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x165d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x165d7c: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x165d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165d80: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x165d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165d84: 0xc055160  jal         func_154580
    ctx->pc = 0x165D84u;
    SET_GPR_U32(ctx, 31, 0x165D8Cu);
    ctx->pc = 0x165D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D84u;
    // 0x165d88: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154580u, 0x165D84u, 0x165D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D8Cu;
label_165d8c:
    // 0x165d8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x165d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165d90: 0x0  nop
    ctx->pc = 0x165d90u;
    // NOP
    // 0x165d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165d98: 0x0  nop
    ctx->pc = 0x165d98u;
    // NOP
    // 0x165d9c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x165D9Cu;
    {
        const bool branch_taken_0x165d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D9Cu;
        // 0x165da0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d9c) {
            ctx->pc = 0x165E10u;
            goto label_165e10;
        }
    }
    ctx->pc = 0x165DA4u;
    // 0x165da4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165da8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x165da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x165dac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x165dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x165db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165db8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x165db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165dbc: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x165dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165dc0: 0xc056194  jal         func_158650
    ctx->pc = 0x165DC0u;
    SET_GPR_U32(ctx, 31, 0x165DC8u);
    ctx->pc = 0x165DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DC0u;
    // 0x165dc4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x165DC0u, 0x165DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DC8u;
label_165dc8:
    // 0x165dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165dcc: 0xc042118  jal         func_108460
    ctx->pc = 0x165DCCu;
    SET_GPR_U32(ctx, 31, 0x165DD4u);
    ctx->pc = 0x165DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DCCu;
    // 0x165dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x165DCCu, 0x165DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DD4u;
label_165dd4:
    // 0x165dd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x165dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165dd8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x165ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165de0: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x165de4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x165DE4u;
    SET_GPR_U32(ctx, 31, 0x165DECu);
    ctx->pc = 0x165DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DE4u;
    // 0x165de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x165DE4u, 0x165DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DECu;
label_165dec:
    // 0x165dec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x165decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x165df0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x165df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x165df4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165df8: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x165DF8u;
    SET_GPR_U32(ctx, 31, 0x165E00u);
    ctx->pc = 0x165DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165DF8u;
    // 0x165dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x165DF8u, 0x165E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E00u;
label_165e00:
    // 0x165e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e04: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x165E04u;
    SET_GPR_U32(ctx, 31, 0x165E0Cu);
    ctx->pc = 0x165E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E04u;
    // 0x165e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x165E04u, 0x165E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E0Cu;
label_165e0c:
    // 0x165e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165e10:
    // 0x165e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x165E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E1Cu;
        // 0x165e20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E24u;
}
