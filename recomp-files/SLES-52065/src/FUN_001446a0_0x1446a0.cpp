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

// Function: FUN_001446a0
// Address: 0x1446a0 - 0x144874
void FUN_001446a0_0x1446a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001446a0_0x1446a0");
#endif

    switch (ctx->pc) {
        case 0x1446a0u: goto label_1446a0;
        case 0x1446a4u: goto label_1446a4;
        case 0x1446a8u: goto label_1446a8;
        case 0x1446acu: goto label_1446ac;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b4u: goto label_1446b4;
        case 0x1446b8u: goto label_1446b8;
        case 0x1446bcu: goto label_1446bc;
        case 0x1446c0u: goto label_1446c0;
        case 0x1446c4u: goto label_1446c4;
        case 0x1446c8u: goto label_1446c8;
        case 0x1446ccu: goto label_1446cc;
        case 0x1446d0u: goto label_1446d0;
        case 0x1446d4u: goto label_1446d4;
        case 0x1446d8u: goto label_1446d8;
        case 0x1446dcu: goto label_1446dc;
        case 0x1446e0u: goto label_1446e0;
        case 0x1446e4u: goto label_1446e4;
        case 0x1446e8u: goto label_1446e8;
        case 0x1446ecu: goto label_1446ec;
        case 0x1446f0u: goto label_1446f0;
        case 0x1446f4u: goto label_1446f4;
        case 0x1446f8u: goto label_1446f8;
        case 0x1446fcu: goto label_1446fc;
        case 0x144700u: goto label_144700;
        case 0x144704u: goto label_144704;
        case 0x144708u: goto label_144708;
        case 0x14470cu: goto label_14470c;
        case 0x144710u: goto label_144710;
        case 0x144714u: goto label_144714;
        case 0x144718u: goto label_144718;
        case 0x14471cu: goto label_14471c;
        case 0x144720u: goto label_144720;
        case 0x144724u: goto label_144724;
        case 0x144728u: goto label_144728;
        case 0x14472cu: goto label_14472c;
        case 0x144730u: goto label_144730;
        case 0x144734u: goto label_144734;
        case 0x144738u: goto label_144738;
        case 0x14473cu: goto label_14473c;
        case 0x144740u: goto label_144740;
        case 0x144744u: goto label_144744;
        case 0x144748u: goto label_144748;
        case 0x14474cu: goto label_14474c;
        case 0x144750u: goto label_144750;
        case 0x144754u: goto label_144754;
        case 0x144758u: goto label_144758;
        case 0x14475cu: goto label_14475c;
        case 0x144760u: goto label_144760;
        case 0x144764u: goto label_144764;
        case 0x144768u: goto label_144768;
        case 0x14476cu: goto label_14476c;
        case 0x144770u: goto label_144770;
        case 0x144774u: goto label_144774;
        case 0x144778u: goto label_144778;
        case 0x14477cu: goto label_14477c;
        case 0x144780u: goto label_144780;
        case 0x144784u: goto label_144784;
        case 0x144788u: goto label_144788;
        case 0x14478cu: goto label_14478c;
        case 0x144790u: goto label_144790;
        case 0x144794u: goto label_144794;
        case 0x144798u: goto label_144798;
        case 0x14479cu: goto label_14479c;
        case 0x1447a0u: goto label_1447a0;
        case 0x1447a4u: goto label_1447a4;
        case 0x1447a8u: goto label_1447a8;
        case 0x1447acu: goto label_1447ac;
        case 0x1447b0u: goto label_1447b0;
        case 0x1447b4u: goto label_1447b4;
        case 0x1447b8u: goto label_1447b8;
        case 0x1447bcu: goto label_1447bc;
        case 0x1447c0u: goto label_1447c0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447c8u: goto label_1447c8;
        case 0x1447ccu: goto label_1447cc;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447d4u: goto label_1447d4;
        case 0x1447d8u: goto label_1447d8;
        case 0x1447dcu: goto label_1447dc;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e4u: goto label_1447e4;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447ecu: goto label_1447ec;
        case 0x1447f0u: goto label_1447f0;
        case 0x1447f4u: goto label_1447f4;
        case 0x1447f8u: goto label_1447f8;
        case 0x1447fcu: goto label_1447fc;
        case 0x144800u: goto label_144800;
        case 0x144804u: goto label_144804;
        case 0x144808u: goto label_144808;
        case 0x14480cu: goto label_14480c;
        case 0x144810u: goto label_144810;
        case 0x144814u: goto label_144814;
        case 0x144818u: goto label_144818;
        case 0x14481cu: goto label_14481c;
        case 0x144820u: goto label_144820;
        case 0x144824u: goto label_144824;
        case 0x144828u: goto label_144828;
        case 0x14482cu: goto label_14482c;
        case 0x144830u: goto label_144830;
        case 0x144834u: goto label_144834;
        case 0x144838u: goto label_144838;
        case 0x14483cu: goto label_14483c;
        case 0x144840u: goto label_144840;
        case 0x144844u: goto label_144844;
        case 0x144848u: goto label_144848;
        case 0x14484cu: goto label_14484c;
        case 0x144850u: goto label_144850;
        case 0x144854u: goto label_144854;
        case 0x144858u: goto label_144858;
        case 0x14485cu: goto label_14485c;
        case 0x144860u: goto label_144860;
        case 0x144864u: goto label_144864;
        case 0x144868u: goto label_144868;
        case 0x14486cu: goto label_14486c;
        case 0x144870u: goto label_144870;
        default: break;
    }

    ctx->pc = 0x1446a0u;

label_1446a0:
    // 0x1446a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1446a4:
    // 0x1446a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1446a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1446a8:
    // 0x1446a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1446a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1446ac:
    // 0x1446ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1446acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1446b0:
    // 0x1446b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1446b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1446b4:
    // 0x1446b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1446b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1446b8:
    // 0x1446b8: 0x90840055  lbu         $a0, 0x55($a0)
    ctx->pc = 0x1446b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_1446bc:
    // 0x1446bc: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
label_1446c0:
    if (ctx->pc == 0x1446C0u) {
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446BCu;
        // 0x1446c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446C4u;
        goto label_1446c4;
    }
    ctx->pc = 0x1446BCu;
    {
        const bool branch_taken_0x1446bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446BCu;
        // 0x1446c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446bc) {
            ctx->pc = 0x144860u;
            goto label_144860;
        }
    }
    ctx->pc = 0x1446C4u;
label_1446c4:
    // 0x1446c4: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x1446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_1446c8:
    // 0x1446c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1446cc:
    if (ctx->pc == 0x1446CCu) {
        ctx->pc = 0x1446D0u;
        goto label_1446d0;
    }
    ctx->pc = 0x1446C8u;
    {
        const bool branch_taken_0x1446c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1446c8) {
            ctx->pc = 0x1446E8u;
            goto label_1446e8;
        }
    }
    ctx->pc = 0x1446D0u;
label_1446d0:
    // 0x1446d0: 0xc0512c8  jal         func_144B20
label_1446d4:
    if (ctx->pc == 0x1446D4u) {
        ctx->pc = 0x1446D8u;
        goto label_1446d8;
    }
    ctx->pc = 0x1446D0u;
    SET_GPR_U32(ctx, 31, 0x1446D8u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x1446D0u, 0x1446D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446D8u;
label_1446d8:
    // 0x1446d8: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x1446d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_1446dc:
    // 0x1446dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1446dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1446e0:
    // 0x1446e0: 0xc051324  jal         func_144C90
label_1446e4:
    if (ctx->pc == 0x1446E4u) {
        ctx->pc = 0x1446E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446E0u;
        // 0x1446e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446E8u;
        goto label_1446e8;
    }
    ctx->pc = 0x1446E0u;
    SET_GPR_U32(ctx, 31, 0x1446E8u);
    ctx->pc = 0x1446E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446E0u;
    // 0x1446e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x1446E0u, 0x1446E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446E8u;
label_1446e8:
    // 0x1446e8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_1446ec:
    // 0x1446ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1446f0:
    if (ctx->pc == 0x1446F0u) {
        ctx->pc = 0x1446F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446ECu;
        // 0x1446f0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446F4u;
        goto label_1446f4;
    }
    ctx->pc = 0x1446ECu;
    {
        const bool branch_taken_0x1446ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446ECu;
        // 0x1446f0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446ec) {
            ctx->pc = 0x144718u;
            goto label_144718;
        }
    }
    ctx->pc = 0x1446F4u;
label_1446f4:
    // 0x1446f4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1446f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1446f8:
    // 0x1446f8: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x1446f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1446fc:
    // 0x1446fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1446fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_144700:
    // 0x144700: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x144700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_144704:
    // 0x144704: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_144708:
    // 0x144708: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x144708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14470c:
    // 0x14470c: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x14470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144710:
    // 0x144710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_144714:
    // 0x144714: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x144714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_144718:
    // 0x144718: 0xc050714  jal         func_141C50
label_14471c:
    if (ctx->pc == 0x14471Cu) {
        ctx->pc = 0x144720u;
        goto label_144720;
    }
    ctx->pc = 0x144718u;
    SET_GPR_U32(ctx, 31, 0x144720u);
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x144718u, 0x144720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144720u;
label_144720:
    // 0x144720: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_144724:
    // 0x144724: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x144724u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_144728:
    // 0x144728: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x144728u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_14472c:
    // 0x14472c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x14472cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_144730:
    // 0x144730: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x144730u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_144734:
    // 0x144734: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x144734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144738:
    // 0x144738: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x144738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14473c:
    // 0x14473c: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x14473cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144740:
    // 0x144740: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x144740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_144744:
    // 0x144744: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x144744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144748:
    // 0x144748: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x144748u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14474c:
    // 0x14474c: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x14474cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144750:
    // 0x144750: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x144750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_144754:
    // 0x144754: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x144754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144758:
    // 0x144758: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x144758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14475c:
    // 0x14475c: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x14475cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144760:
    // 0x144760: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x144760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_144764:
    // 0x144764: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x144764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144768:
    // 0x144768: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x144768u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14476c:
    // 0x14476c: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x14476cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_144770:
    // 0x144770: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x144770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_144774:
    // 0x144774: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x144774u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_144778:
    // 0x144778: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x144778u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_14477c:
    // 0x14477c: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x14477cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_144780:
    // 0x144780: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x144780u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_144784:
    // 0x144784: 0xc04c554  jal         func_131550
label_144788:
    if (ctx->pc == 0x144788u) {
        ctx->pc = 0x144788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144784u;
        // 0x144788: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14478Cu;
        goto label_14478c;
    }
    ctx->pc = 0x144784u;
    SET_GPR_U32(ctx, 31, 0x14478Cu);
    ctx->pc = 0x144788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144784u;
    // 0x144788: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x144784u, 0x14478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14478Cu;
label_14478c:
    // 0x14478c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144790:
    // 0x144790: 0xc04c550  jal         func_131540
label_144794:
    if (ctx->pc == 0x144794u) {
        ctx->pc = 0x144794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144790u;
        // 0x144794: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144798u;
        goto label_144798;
    }
    ctx->pc = 0x144790u;
    SET_GPR_U32(ctx, 31, 0x144798u);
    ctx->pc = 0x144794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144790u;
    // 0x144794: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x144790u, 0x144798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144798u;
label_144798:
    // 0x144798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x144798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_14479c:
    // 0x14479c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_1447a0:
    // 0x1447a0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1447a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1447a4:
    // 0x1447a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1447a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1447a8:
    // 0x1447a8: 0xc04c554  jal         func_131550
label_1447ac:
    if (ctx->pc == 0x1447ACu) {
        ctx->pc = 0x1447ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447A8u;
        // 0x1447ac: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447B0u;
        goto label_1447b0;
    }
    ctx->pc = 0x1447A8u;
    SET_GPR_U32(ctx, 31, 0x1447B0u);
    ctx->pc = 0x1447ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447A8u;
    // 0x1447ac: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1447A8u, 0x1447B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447B0u;
label_1447b0:
    // 0x1447b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1447b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1447b4:
    // 0x1447b4: 0xc04c54c  jal         func_131530
label_1447b8:
    if (ctx->pc == 0x1447B8u) {
        ctx->pc = 0x1447B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447B4u;
        // 0x1447b8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447BCu;
        goto label_1447bc;
    }
    ctx->pc = 0x1447B4u;
    SET_GPR_U32(ctx, 31, 0x1447BCu);
    ctx->pc = 0x1447B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447B4u;
    // 0x1447b8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1447B4u, 0x1447BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447BCu;
label_1447bc:
    // 0x1447bc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1447bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1447c0:
    // 0x1447c0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1447c4:
    // 0x1447c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1447c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1447c8:
    // 0x1447c8: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x1447c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_1447cc:
    // 0x1447cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1447ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1447d0:
    // 0x1447d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1447d4:
    if (ctx->pc == 0x1447D4u) {
        ctx->pc = 0x1447D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447D0u;
        // 0x1447d4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1447D8u;
        goto label_1447d8;
    }
    ctx->pc = 0x1447D0u;
    {
        const bool branch_taken_0x1447d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447D0u;
        // 0x1447d4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447d0) {
            ctx->pc = 0x14482Cu;
            goto label_14482c;
        }
    }
    ctx->pc = 0x1447D8u;
label_1447d8:
    // 0x1447d8: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x1447d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_1447dc:
    // 0x1447dc: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x1447dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_1447e0:
    // 0x1447e0: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x1447e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_1447e4:
    // 0x1447e4: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x1447e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_1447e8:
    // 0x1447e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1447e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1447ec:
    // 0x1447ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1447f0:
    // 0x1447f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1447f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1447f4:
    // 0x1447f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1447f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1447f8:
    // 0x1447f8: 0x320f809  jalr        $t9
label_1447fc:
    if (ctx->pc == 0x1447FCu) {
        ctx->pc = 0x1447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F8u;
        // 0x1447fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144800u;
        goto label_144800;
    }
    ctx->pc = 0x1447F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144800u);
        ctx->pc = 0x1447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F8u;
        // 0x1447fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447F8u, 0x144800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144800u;
label_144800:
    // 0x144800: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x144800u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_144804:
    // 0x144804: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x144804u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_144808:
    // 0x144808: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x144808u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14480c:
    // 0x14480c: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14480cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_144810:
    // 0x144810: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144814:
    // 0x144814: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144818:
    // 0x144818: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x144818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_14481c:
    // 0x14481c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_144820:
    // 0x144820: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_144824:
    // 0x144824: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x144824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_144828:
    // 0x144828: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x144828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_14482c:
    // 0x14482c: 0x0  nop
    ctx->pc = 0x14482cu;
    // NOP
label_144830:
    // 0x144830: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_144834:
    // 0x144834: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_144838:
    // 0x144838: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
label_14483c:
    if (ctx->pc == 0x14483Cu) {
        ctx->pc = 0x144840u;
        goto label_144840;
    }
    ctx->pc = 0x144838u;
    {
        const bool branch_taken_0x144838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x144838) {
            ctx->pc = 0x1447D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1447d8;
        }
    }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_144844:
    // 0x144844: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_144848:
    if (ctx->pc == 0x144848u) {
        ctx->pc = 0x14484Cu;
        goto label_14484c;
    }
    ctx->pc = 0x144844u;
    {
        const bool branch_taken_0x144844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144844) {
            ctx->pc = 0x144860u;
            goto label_144860;
        }
    }
    ctx->pc = 0x14484Cu;
label_14484c:
    // 0x14484c: 0xc0512c8  jal         func_144B20
label_144850:
    if (ctx->pc == 0x144850u) {
        ctx->pc = 0x144854u;
        goto label_144854;
    }
    ctx->pc = 0x14484Cu;
    SET_GPR_U32(ctx, 31, 0x144854u);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x14484Cu, 0x144854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144854u;
label_144854:
    // 0x144854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144858:
    // 0x144858: 0xc051334  jal         func_144CD0
label_14485c:
    if (ctx->pc == 0x14485Cu) {
        ctx->pc = 0x14485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144858u;
        // 0x14485c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144860u;
        goto label_144860;
    }
    ctx->pc = 0x144858u;
    SET_GPR_U32(ctx, 31, 0x144860u);
    ctx->pc = 0x14485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144858u;
    // 0x14485c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CD0u, 0x144858u, 0x144860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144860u;
label_144860:
    // 0x144860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144864:
    // 0x144864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144868:
    // 0x144868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14486c:
    // 0x14486c: 0x3e00008  jr          $ra
label_144870:
    if (ctx->pc == 0x144870u) {
        ctx->pc = 0x144870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14486Cu;
        // 0x144870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144874u;
        goto label_fallthrough_0x14486c;
    }
    ctx->pc = 0x14486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14486Cu;
        // 0x144870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14486Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14486c:
    ctx->pc = 0x144874u;
}
