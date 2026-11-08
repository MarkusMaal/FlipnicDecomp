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

// Function: entry_0017665c
// Address: 0x17665c - 0x1767e4
void entry_0017665c_0x17665c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017665c_0x17665c");
#endif

    switch (ctx->pc) {
        case 0x17666cu: goto label_17666c;
        case 0x176690u: goto label_176690;
        case 0x17669cu: goto label_17669c;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c4u: goto label_1766c4;
        case 0x176704u: goto label_176704;
        case 0x176744u: goto label_176744;
        case 0x176770u: goto label_176770;
        default: break;
    }

    ctx->pc = 0x17665cu;

    // 0x17665c: 0x0  nop
    ctx->pc = 0x17665cu;
    // NOP
    // 0x176660: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x176664: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176664u;
    SET_GPR_U32(ctx, 31, 0x17666Cu);
    ctx->pc = 0x176668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176664u;
    // 0x176668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176664u, 0x17666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17666Cu;
label_17666c:
    // 0x17666c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176670: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x176674: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176678: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17667c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17667cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176680: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x176684: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176688: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x176688u;
    SET_GPR_U32(ctx, 31, 0x176690u);
    ctx->pc = 0x17668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176688u;
    // 0x17668c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x176688u, 0x176690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176690u;
label_176690:
    // 0x176690: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176694: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x176694u;
    SET_GPR_U32(ctx, 31, 0x17669Cu);
    ctx->pc = 0x176698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176694u;
    // 0x176698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176694u, 0x17669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17669Cu;
label_17669c:
    // 0x17669c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1766a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1766a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1766a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1766a8: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
    // 0x1766ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1766b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1766b4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1766B4u;
    SET_GPR_U32(ctx, 31, 0x1766BCu);
    ctx->pc = 0x1766B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766B4u;
    // 0x1766b8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1766B4u, 0x1766BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766BCu;
label_1766bc:
    // 0x1766bc: 0xc045b00  jal         func_116C00
    ctx->pc = 0x1766BCu;
    SET_GPR_U32(ctx, 31, 0x1766C4u);
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x1766BCu, 0x1766C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C4u;
label_1766c4:
    // 0x1766c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1766c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1766cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1766ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1766d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1766d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1766d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1766d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1766d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1766dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1766e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1766e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1766e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1766e8: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x1766ec: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    // 0x1766f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1766f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1766f4: 0x0  nop
    ctx->pc = 0x1766f4u;
    // NOP
    // 0x1766f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1766f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1766fc: 0xc05c550  jal         func_171540
    ctx->pc = 0x1766FCu;
    SET_GPR_U32(ctx, 31, 0x176704u);
    ctx->pc = 0x176700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766FCu;
    // 0x176700: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1766FCu, 0x176704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176704u;
label_176704:
    // 0x176704: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x176708: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17670c: 0x24637680  addiu       $v1, $v1, 0x7680
    ctx->pc = 0x17670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30336));
    // 0x176710: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176714: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
    // 0x176718: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176718u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17671c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17671cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x367680u));
    // 0x176720: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x176720u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x367690u));
    // 0x176724: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x176724u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3676A0u));
    // 0x176728: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x176728u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x3676B0u));
    // 0x17672c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17672cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176730: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176734: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x176734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176738: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17673c: 0xc045b00  jal         func_116C00
    ctx->pc = 0x17673Cu;
    SET_GPR_U32(ctx, 31, 0x176744u);
    ctx->pc = 0x176740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17673Cu;
    // 0x176740: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17673Cu, 0x176744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176744u;
label_176744:
    // 0x176744: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x176744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x176748: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17674c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x176750: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x176754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176758: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x17675c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x176760: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    // 0x176764: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176768: 0xc05c550  jal         func_171540
    ctx->pc = 0x176768u;
    SET_GPR_U32(ctx, 31, 0x176770u);
    ctx->pc = 0x17676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176768u;
    // 0x17676c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x176768u, 0x176770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176770u;
label_176770:
    // 0x176770: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176774: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x176778: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17677c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x176780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176784: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176788: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17678c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x17678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x176790: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176790u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176794: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x176794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176798: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x176798u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17679c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x17679cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1767a0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1767a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1767a4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1767a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1767a8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1767a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1767ac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1767acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1767b0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1767b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1767b4: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1767b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1767b8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1767bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1767bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1767c0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1767c0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1767c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1767c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1767c8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1767c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1767cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1767ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1767d0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1767d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1767d4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1767d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1767d8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1767dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1767e0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1767e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1767e4u;
}
