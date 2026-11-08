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

// Function: caseD_7
// Address: 0x169c6c - 0x169d50
void caseD_7_0x169c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x169c6c");
#endif

    switch (ctx->pc) {
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cb4u: goto label_169cb4;
        case 0x169cb8u: goto label_169cb8;
        case 0x169cbcu: goto label_169cbc;
        case 0x169cc0u: goto label_169cc0;
        case 0x169cc4u: goto label_169cc4;
        case 0x169cc8u: goto label_169cc8;
        case 0x169cccu: goto label_169ccc;
        case 0x169cd0u: goto label_169cd0;
        case 0x169cd4u: goto label_169cd4;
        case 0x169cd8u: goto label_169cd8;
        case 0x169cdcu: goto label_169cdc;
        case 0x169ce0u: goto label_169ce0;
        case 0x169ce4u: goto label_169ce4;
        case 0x169ce8u: goto label_169ce8;
        case 0x169cecu: goto label_169cec;
        case 0x169cf0u: goto label_169cf0;
        case 0x169cf4u: goto label_169cf4;
        case 0x169cf8u: goto label_169cf8;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d00u: goto label_169d00;
        case 0x169d04u: goto label_169d04;
        case 0x169d08u: goto label_169d08;
        case 0x169d0cu: goto label_169d0c;
        case 0x169d10u: goto label_169d10;
        case 0x169d14u: goto label_169d14;
        case 0x169d18u: goto label_169d18;
        case 0x169d1cu: goto label_169d1c;
        case 0x169d20u: goto label_169d20;
        case 0x169d24u: goto label_169d24;
        case 0x169d28u: goto label_169d28;
        case 0x169d2cu: goto label_169d2c;
        case 0x169d30u: goto label_169d30;
        case 0x169d34u: goto label_169d34;
        case 0x169d38u: goto label_169d38;
        case 0x169d3cu: goto label_169d3c;
        case 0x169d40u: goto label_169d40;
        case 0x169d44u: goto label_169d44;
        case 0x169d48u: goto label_169d48;
        case 0x169d4cu: goto label_169d4c;
        default: break;
    }

    ctx->pc = 0x169c6cu;

label_169c6c:
    // 0x169c6c: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169c70:
    // 0x169c70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x169c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169c74:
    // 0x169c74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169c78:
    // 0x169c78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169c7c:
    // 0x169c7c: 0x320f809  jalr        $t9
label_169c80:
    if (ctx->pc == 0x169C80u) {
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C84u;
        goto label_169c84;
    }
    ctx->pc = 0x169C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C84u);
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C7Cu, 0x169C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C84u;
label_169c84:
    // 0x169c84: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169c88:
    // 0x169c88: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169c8c:
    // 0x169c8c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169c90:
    // 0x169c90: 0x320f809  jalr        $t9
label_169c94:
    if (ctx->pc == 0x169C94u) {
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C98u;
        goto label_169c98;
    }
    ctx->pc = 0x169C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169C98u);
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169C90u, 0x169C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169C98u;
label_169c98:
    // 0x169c98: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x169c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169c9c:
    // 0x169c9c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_169ca0:
    // 0x169ca0: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x169ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169ca4:
    // 0x169ca4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_169ca8:
    // 0x169ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_169cac:
    // 0x169cac: 0xc46201c0  lwc1        $f2, 0x1C0($v1)
    ctx->pc = 0x169cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_169cb0:
    // 0x169cb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_169cb4:
    // 0x169cb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x169cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_169cb8:
    // 0x169cb8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x169cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_169cbc:
    // 0x169cbc: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169cc0:
    // 0x169cc0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169cc4:
    // 0x169cc4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169cc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169cc8:
    // 0x169cc8: 0x4b002103  vaddw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169ccc:
    // 0x169ccc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169cccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169cd0:
    // 0x169cd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169cd4:
    // 0x169cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x169cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169cd8:
    // 0x169cd8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x169cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_169cdc:
    // 0x169cdc: 0xc056194  jal         func_158650
label_169ce0:
    if (ctx->pc == 0x169CE0u) {
        ctx->pc = 0x169CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CDCu;
        // 0x169ce0: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CE4u;
        goto label_169ce4;
    }
    ctx->pc = 0x169CDCu;
    SET_GPR_U32(ctx, 31, 0x169CE4u);
    ctx->pc = 0x169CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CDCu;
    // 0x169ce0: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169CDCu, 0x169CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CE4u;
label_169ce4:
    // 0x169ce4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ce8:
    // 0x169ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169cec:
    // 0x169cec: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169cf0:
    // 0x169cf0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169cf4:
    // 0x169cf4: 0x320f809  jalr        $t9
label_169cf8:
    if (ctx->pc == 0x169CF8u) {
        ctx->pc = 0x169CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF4u;
        // 0x169cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CFCu;
        goto label_169cfc;
    }
    ctx->pc = 0x169CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169CFCu);
        ctx->pc = 0x169CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF4u;
        // 0x169cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CF4u, 0x169CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d00:
    // 0x169d00: 0xc042118  jal         func_108460
label_169d04:
    if (ctx->pc == 0x169D04u) {
        ctx->pc = 0x169D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D00u;
        // 0x169d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D08u;
        goto label_169d08;
    }
    ctx->pc = 0x169D00u;
    SET_GPR_U32(ctx, 31, 0x169D08u);
    ctx->pc = 0x169D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D00u;
    // 0x169d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169D00u, 0x169D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D08u;
label_169d08:
    // 0x169d08: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_169d0c:
    // 0x169d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d10:
    // 0x169d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169d14:
    // 0x169d14: 0xc0425a4  jal         func_109690
label_169d18:
    if (ctx->pc == 0x169D18u) {
        ctx->pc = 0x169D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D14u;
        // 0x169d18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D1Cu;
        goto label_169d1c;
    }
    ctx->pc = 0x169D14u;
    SET_GPR_U32(ctx, 31, 0x169D1Cu);
    ctx->pc = 0x169D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D14u;
    // 0x169d18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169D14u, 0x169D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D1Cu;
label_169d1c:
    // 0x169d1c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x169d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_169d20:
    // 0x169d20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x169d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_169d24:
    // 0x169d24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169d28:
    // 0x169d28: 0xc055dac  jal         func_1576B0
label_169d2c:
    if (ctx->pc == 0x169D2Cu) {
        ctx->pc = 0x169D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D28u;
        // 0x169d2c: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D30u;
        goto label_169d30;
    }
    ctx->pc = 0x169D28u;
    SET_GPR_U32(ctx, 31, 0x169D30u);
    ctx->pc = 0x169D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D28u;
    // 0x169d2c: 0x8e040224  lw          $a0, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x169D28u, 0x169D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D30u;
label_169d30:
    // 0x169d30: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x169d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_169d34:
    // 0x169d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169d38:
    // 0x169d38: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169d3c:
    // 0x169d3c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169d40:
    // 0x169d40: 0x320f809  jalr        $t9
label_169d44:
    if (ctx->pc == 0x169D44u) {
        ctx->pc = 0x169D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D40u;
        // 0x169d44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D48u;
        goto label_169d48;
    }
    ctx->pc = 0x169D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169D48u);
        ctx->pc = 0x169D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D40u;
        // 0x169d44: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D40u, 0x169D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169D48u;
label_169d48:
    // 0x169d48: 0x1000003f  b           . + 4 + (0x3F << 2)
label_169d4c:
    if (ctx->pc == 0x169D4Cu) {
        ctx->pc = 0x169D50u;
        goto label_fallthrough_0x169d48;
    }
    ctx->pc = 0x169D48u;
    {
        const bool branch_taken_0x169d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d48) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
label_fallthrough_0x169d48:
    ctx->pc = 0x169D50u;
}
