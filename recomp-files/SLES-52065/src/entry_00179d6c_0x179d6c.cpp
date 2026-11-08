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

// Function: entry_00179d6c
// Address: 0x179d6c - 0x179e8c
void entry_00179d6c_0x179d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d6c_0x179d6c");
#endif

    switch (ctx->pc) {
        case 0x179dacu: goto label_179dac;
        case 0x179e00u: goto label_179e00;
        case 0x179e64u: goto label_179e64;
        default: break;
    }

    ctx->pc = 0x179d6cu;

    // 0x179d6c: 0x0  nop
    ctx->pc = 0x179d6cu;
    // NOP
    // 0x179d70: 0x28c20040  slti        $v0, $a2, 0x40
    ctx->pc = 0x179d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179d74: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x179D74u;
    {
        const bool branch_taken_0x179d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179d74) {
            ctx->pc = 0x179C78u;
            return;
        }
    }
    ctx->pc = 0x179D7Cu;
    // 0x179d7c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x179d7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179d84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x179d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x179d8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179d94: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x179d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179d98: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x179d98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x179d9c: 0x0  nop
    ctx->pc = 0x179d9cu;
    // NOP
    // 0x179da0: 0x0  nop
    ctx->pc = 0x179da0u;
    // NOP
    // 0x179da4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179DA4u;
    SET_GPR_U32(ctx, 31, 0x179DACu);
    ctx->pc = 0x179DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DA4u;
    // 0x179da8: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179DA4u, 0x179DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DACu;
label_179dac:
    // 0x179dac: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x179dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179db0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179db4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x179db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179db8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179dbc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x179dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179dc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179dc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179dc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x179dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179dcc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179dd0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x179dd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x179dd4: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x179dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x179dd8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x179dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x179ddc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x179ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x179de0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x179de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x179de4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x179de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x179de8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179dec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179df0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179df4: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179df8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179DF8u;
    SET_GPR_U32(ctx, 31, 0x179E00u);
    ctx->pc = 0x179DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DF8u;
    // 0x179dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179DF8u, 0x179E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E00u;
label_179e00:
    // 0x179e00: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x179e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x179e04: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x179e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x179e08: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x179e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x179e0c: 0xc6405ff0  lwc1        $f0, 0x5FF0($s2)
    ctx->pc = 0x179e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179e10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x179e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x179e14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x179e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179e18: 0x0  nop
    ctx->pc = 0x179e18u;
    // NOP
    // 0x179e1c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x179E1Cu;
    {
        const bool branch_taken_0x179e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e1c) {
            ctx->pc = 0x179ED4u;
            return;
        }
    }
    ctx->pc = 0x179E24u;
    // 0x179e24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179e28: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x179e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179e2c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179e30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179e34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179e38: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x179e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x179e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179e40: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x179e44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179e48: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x179e4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179e50: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x179e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179e54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179e58: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179e5c: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x179E5Cu;
    SET_GPR_U32(ctx, 31, 0x179E64u);
    ctx->pc = 0x179E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E5Cu;
    // 0x179e60: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x179E5Cu, 0x179E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E64u;
label_179e64:
    // 0x179e64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x179e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179e68: 0x0  nop
    ctx->pc = 0x179e68u;
    // NOP
    // 0x179e6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x179e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179e70: 0x0  nop
    ctx->pc = 0x179e70u;
    // NOP
    // 0x179e74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x179E74u;
    {
        const bool branch_taken_0x179e74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x179E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E74u;
        // 0x179e78: 0x3c02be4c  lui         $v0, 0xBE4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e74) {
            ctx->pc = 0x179E8Cu;
            return;
        }
    }
    ctx->pc = 0x179E7Cu;
    // 0x179e7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x179e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x179e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179E84u;
    {
        const bool branch_taken_0x179e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e84) {
            ctx->pc = 0x179E9Cu;
            return;
        }
    }
    ctx->pc = 0x179E8Cu;
}
