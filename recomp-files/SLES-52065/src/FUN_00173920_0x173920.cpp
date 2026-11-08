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

// Function: FUN_00173920
// Address: 0x173920 - 0x173a24
void FUN_00173920_0x173920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173920_0x173920");
#endif

    switch (ctx->pc) {
        case 0x17393cu: goto label_17393c;
        case 0x1739a4u: goto label_1739a4;
        default: break;
    }

    ctx->pc = 0x173920u;

    // 0x173920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x173924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17392c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173934: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x173934u;
    {
        const bool branch_taken_0x173934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173934u;
        // 0x173938: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173934) {
            ctx->pc = 0x1739FCu;
            goto label_1739fc;
        }
    }
    ctx->pc = 0x17393Cu;
label_17393c:
    // 0x17393c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x173940: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x173940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x173944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173948: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17394c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x173950: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x173950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173954: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x173954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17395c: 0x0  nop
    ctx->pc = 0x17395cu;
    // NOP
    // 0x173960: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x173960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x173964: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x173964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x173968: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x173968u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x17396c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173970: 0x0  nop
    ctx->pc = 0x173970u;
    // NOP
    // 0x173974: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x173974u;
    {
        const bool branch_taken_0x173974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173974) {
            ctx->pc = 0x173984u;
            goto label_173984;
        }
    }
    ctx->pc = 0x17397Cu;
    // 0x17397c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17397cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173980: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x173980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_173984:
    // 0x173984: 0x0  nop
    ctx->pc = 0x173984u;
    // NOP
    // 0x173988: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17398c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x173990: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173998: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x173998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17399c: 0xc05c550  jal         func_171540
    ctx->pc = 0x17399Cu;
    SET_GPR_U32(ctx, 31, 0x1739A4u);
    ctx->pc = 0x1739A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17399Cu;
    // 0x1739a0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17399Cu, 0x1739A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739A4u;
label_1739a4:
    // 0x1739a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1739a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1739a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1739a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1739ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1739b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1739b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1739b8: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1739bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1739bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1739c0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1739c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1739c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1739c8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1739cc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1739ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1739d0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1739d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1739d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1739d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1739d8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1739d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1739dc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1739dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1739e0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1739e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1739e4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1739e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739e8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1739e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739ec: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1739ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1739f0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1739f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1739f4: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1739f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1739f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1739f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1739fc:
    // 0x1739fc: 0x0  nop
    ctx->pc = 0x1739fcu;
    // NOP
    // 0x173a00: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173a04: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x173A04u;
    {
        const bool branch_taken_0x173a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A04u;
        // 0x173a08: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a04) {
            ctx->pc = 0x17393Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17393c;
        }
    }
    ctx->pc = 0x173A0Cu;
    // 0x173a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x173A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A1Cu;
        // 0x173a20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A24u;
}
