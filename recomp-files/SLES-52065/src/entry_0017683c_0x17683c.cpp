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

// Function: entry_0017683c
// Address: 0x17683c - 0x1769c4
void entry_0017683c_0x17683c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017683c_0x17683c");
#endif

    switch (ctx->pc) {
        case 0x17684cu: goto label_17684c;
        case 0x176870u: goto label_176870;
        case 0x17687cu: goto label_17687c;
        case 0x17689cu: goto label_17689c;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768e4u: goto label_1768e4;
        case 0x176924u: goto label_176924;
        case 0x176950u: goto label_176950;
        default: break;
    }

    ctx->pc = 0x17683cu;

    // 0x17683c: 0x0  nop
    ctx->pc = 0x17683cu;
    // NOP
    // 0x176840: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x176844: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176844u;
    SET_GPR_U32(ctx, 31, 0x17684Cu);
    ctx->pc = 0x176848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176844u;
    // 0x176848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176844u, 0x17684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17684Cu;
label_17684c:
    // 0x17684c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176850: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x176854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176858: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17685c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176860: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x176864: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176868: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x176868u;
    SET_GPR_U32(ctx, 31, 0x176870u);
    ctx->pc = 0x17686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176868u;
    // 0x17686c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x176868u, 0x176870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176870u;
label_176870:
    // 0x176870: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176874: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x176874u;
    SET_GPR_U32(ctx, 31, 0x17687Cu);
    ctx->pc = 0x176878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176874u;
    // 0x176878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176874u, 0x17687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17687Cu;
label_17687c:
    // 0x17687c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176880: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x176884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176888: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
    // 0x17688c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176890: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176894: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176894u;
    // 0x176898: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176894u, 0x17689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0xc045b00  jal         func_116C00
    ctx->pc = 0x17689Cu;
    SET_GPR_U32(ctx, 31, 0x1768A4u);
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17689Cu, 0x1768A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768A4u;
label_1768a4:
    // 0x1768a4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1768a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1768ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1768b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1768b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1768b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1768b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1768bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1768c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1768c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1768c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1768c8: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x1768cc: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    // 0x1768d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1768d4: 0x0  nop
    ctx->pc = 0x1768d4u;
    // NOP
    // 0x1768d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1768d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1768dc: 0xc05c550  jal         func_171540
    ctx->pc = 0x1768DCu;
    SET_GPR_U32(ctx, 31, 0x1768E4u);
    ctx->pc = 0x1768E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768DCu;
    // 0x1768e0: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1768DCu, 0x1768E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E4u;
label_1768e4:
    // 0x1768e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1768e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1768ec: 0x24637680  addiu       $v1, $v1, 0x7680
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30336));
    // 0x1768f0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1768f4: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
    // 0x1768f8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1768f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1768fc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1768fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x367680u));
    // 0x176900: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x176900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x367690u));
    // 0x176904: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x176904u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3676A0u));
    // 0x176908: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x176908u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x3676B0u));
    // 0x17690c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176910: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176914: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x176914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176918: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x17691c: 0xc045b00  jal         func_116C00
    ctx->pc = 0x17691Cu;
    SET_GPR_U32(ctx, 31, 0x176924u);
    ctx->pc = 0x176920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17691Cu;
    // 0x176920: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17691Cu, 0x176924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176924u;
label_176924:
    // 0x176924: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x176928: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17692c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x176930: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x176934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176938: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x17693c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x176940: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
    // 0x176944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x176948: 0xc05c550  jal         func_171540
    ctx->pc = 0x176948u;
    SET_GPR_U32(ctx, 31, 0x176950u);
    ctx->pc = 0x17694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176948u;
    // 0x17694c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x176948u, 0x176950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176950u;
label_176950:
    // 0x176950: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176954: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x176958: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17695c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x176960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176964: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x176968: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17696c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x176970: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176970u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176974: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x176974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176978: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x176978u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17697c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x17697cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x176980: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x176980u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x176984: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x176984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176988: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17698c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17698cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x176990: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x176994: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x176994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x176998: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x17699c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1769a0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1769a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1769a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1769a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1769a8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1769a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1769ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1769acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1769b0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1769b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1769b4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1769b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1769b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1769bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1769c0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1769c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1769c4u;
}
