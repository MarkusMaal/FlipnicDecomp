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

// Function: FUN_00162e80
// Address: 0x162e80 - 0x1630dc
void FUN_00162e80_0x162e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00162e80_0x162e80");
#endif

    switch (ctx->pc) {
        case 0x162ea4u: goto label_162ea4;
        case 0x162eb0u: goto label_162eb0;
        case 0x162ebcu: goto label_162ebc;
        case 0x162eccu: goto label_162ecc;
        case 0x162f64u: goto label_162f64;
        case 0x162fb0u: goto label_162fb0;
        default: break;
    }

    ctx->pc = 0x162e80u;

    // 0x162e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e94: 0x848201f4  lh          $v0, 0x1F4($a0)
    ctx->pc = 0x162e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x162e98: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x162e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x162e9c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x162E9Cu;
    SET_GPR_U32(ctx, 31, 0x162EA4u);
    ctx->pc = 0x162EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E9Cu;
    // 0x162ea0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x162E9Cu, 0x162EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EA4u;
label_162ea4:
    // 0x162ea4: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x162ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x162ea8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x162EA8u;
    SET_GPR_U32(ctx, 31, 0x162EB0u);
    ctx->pc = 0x162EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EA8u;
    // 0x162eac: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x162EA8u, 0x162EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EB0u;
label_162eb0:
    // 0x162eb0: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x162eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
    // 0x162eb4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x162EB4u;
    SET_GPR_U32(ctx, 31, 0x162EBCu);
    ctx->pc = 0x162EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EB4u;
    // 0x162eb8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x162EB4u, 0x162EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EBCu;
label_162ebc:
    // 0x162ebc: 0xae220224  sw          $v0, 0x224($s1)
    ctx->pc = 0x162ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
    // 0x162ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ec4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x162EC4u;
    {
        const bool branch_taken_0x162ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EC4u;
        // 0x162ec8: 0xae200228  sw          $zero, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ec4) {
            ctx->pc = 0x162F4Cu;
            goto label_162f4c;
        }
    }
    ctx->pc = 0x162ECCu;
label_162ecc:
    // 0x162ecc: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x162ed0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162ed4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162ed8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x162ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x162edc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x162edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162ee0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x162ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162ee4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162ee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ee8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x162ee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162eec: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x162eecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162ef0: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x162ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162ef4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x162ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162ef8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x162ef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162efc: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x162efcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x162f00: 0x4a0003bf  vwaitq
    ctx->pc = 0x162f00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x162f04: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x162f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162f08: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x162f08u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f10: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162f14: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x162f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x162f18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x162f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x162f24: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x162f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x162f28: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x162f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x162f34: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x162f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x162f38: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x162f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162f48: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x162f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
label_162f4c:
    // 0x162f4c: 0x0  nop
    ctx->pc = 0x162f4cu;
    // NOP
    // 0x162f50: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x162f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x162f54: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x162F54u;
    {
        const bool branch_taken_0x162f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f54) {
            ctx->pc = 0x162ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ecc;
        }
    }
    ctx->pc = 0x162F5Cu;
    // 0x162f5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x162F5Cu;
    {
        const bool branch_taken_0x162f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F5Cu;
        // 0x162f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f5c) {
            ctx->pc = 0x162F84u;
            goto label_162f84;
        }
    }
    ctx->pc = 0x162F64u;
label_162f64:
    // 0x162f64: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x162f68: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162f6c: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162f74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f78: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x162f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162f7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x162f80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x162f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_162f84:
    // 0x162f84: 0x0  nop
    ctx->pc = 0x162f84u;
    // NOP
    // 0x162f88: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x162f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x162f8c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x162F8Cu;
    {
        const bool branch_taken_0x162f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F8Cu;
        // 0x162f90: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f8c) {
            ctx->pc = 0x162F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f64;
        }
    }
    ctx->pc = 0x162F94u;
    // 0x162f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162f9c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x162f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162fa0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x162fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162fa4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162fa8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x162FA8u;
    {
        const bool branch_taken_0x162fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FA8u;
        // 0x162fac: 0x2604fffe  addiu       $a0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fa8) {
            ctx->pc = 0x16309Cu;
            goto label_16309c;
        }
    }
    ctx->pc = 0x162FB0u;
label_162fb0:
    // 0x162fb0: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x162fb4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x162fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x162fb8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x162fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x162fbc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x162fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162fc0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x162fc4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x162fc8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162fc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162fcc: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x162fccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x162fd0: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x162fd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162fd4: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x162fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162fd8: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x162fdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162fe0: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x162fe4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x162fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x162fe8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162fec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x162fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ff0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x162ff0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162ff4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x162ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162ff8: 0xf9260000  sqc2        $vf6, 0x0($t1)
    ctx->pc = 0x162ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162ffc: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x162ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x163000: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x163000u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x163004: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x163004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163008: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16300c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x16300cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163010: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163010u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163014: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x163014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x163018: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x163018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16301c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x16301cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163020: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163024: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163024u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x163028: 0x4a0003bf  vwaitq
    ctx->pc = 0x163028u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16302c: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x16302cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163030: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163030u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163038: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x163038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16303c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x16303cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163040: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x163040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163044: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x163044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163048: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x163048u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x16304c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16304cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x163050: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x163050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x163054: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x163054u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x163058: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x163058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16305c: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x16305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x163060: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x163060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x163064: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x163064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x163068: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16306c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x16306cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x163070: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x163070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x163074: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x163078: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16307c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163080: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x163080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163084: 0x0  nop
    ctx->pc = 0x163084u;
    // NOP
    // 0x163088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x163088u;
    {
        const bool branch_taken_0x163088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163088) {
            ctx->pc = 0x163098u;
            goto label_163098;
        }
    }
    ctx->pc = 0x163090u;
    // 0x163090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x163094: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x163094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_163098:
    // 0x163098: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_16309c:
    // 0x16309c: 0x0  nop
    ctx->pc = 0x16309cu;
    // NOP
    // 0x1630a0: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1630a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1630a4: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1630A4u;
    {
        const bool branch_taken_0x1630a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1630a4) {
            ctx->pc = 0x162FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162fb0;
        }
    }
    ctx->pc = 0x1630ACu;
    // 0x1630ac: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x1630acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1630b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1630b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1630b8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1630b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1630bc: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1630c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1630c4: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x1630c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
    // 0x1630c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1630c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1630cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1630ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1630d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1630d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1630D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630D4u;
        // 0x1630d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1630DCu;
}
