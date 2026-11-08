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

// Function: entry_0010b3ec
// Address: 0x10b3ec - 0x10b4f4
void entry_0010b3ec_0x10b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b3ec_0x10b3ec");
#endif

    switch (ctx->pc) {
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b3fcu: goto label_10b3fc;
        case 0x10b408u: goto label_10b408;
        case 0x10b43cu: goto label_10b43c;
        case 0x10b450u: goto label_10b450;
        case 0x10b45cu: goto label_10b45c;
        case 0x10b470u: goto label_10b470;
        case 0x10b484u: goto label_10b484;
        case 0x10b498u: goto label_10b498;
        case 0x10b4ecu: goto label_10b4ec;
        default: break;
    }

    ctx->pc = 0x10b3ecu;

label_10b3ec:
    // 0x10b3ec: 0xc042b1c  jal         func_10AC70
label_10b3f0:
    if (ctx->pc == 0x10B3F0u) {
        ctx->pc = 0x10B3F4u;
        goto label_10b3f4;
    }
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x10AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC70u, 0x10B3ECu, 0x10B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0xc04318c  jal         func_10C630
label_10b3f8:
    if (ctx->pc == 0x10B3F8u) {
        ctx->pc = 0x10B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3F4u;
        // 0x10b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B3FCu;
        goto label_10b3fc;
    }
    ctx->pc = 0x10B3F4u;
    SET_GPR_U32(ctx, 31, 0x10B3FCu);
    ctx->pc = 0x10B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F4u;
    // 0x10b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C630u, 0x10B3F4u, 0x10B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3FCu;
label_10b3fc:
    // 0x10b3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b400:
    // 0x10b400: 0xc042118  jal         func_108460
label_10b404:
    if (ctx->pc == 0x10B404u) {
        ctx->pc = 0x10B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B400u;
        // 0x10b404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B408u;
        goto label_10b408;
    }
    ctx->pc = 0x10B400u;
    SET_GPR_U32(ctx, 31, 0x10B408u);
    ctx->pc = 0x10B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B400u;
    // 0x10b404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B400u, 0x10B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B408u;
label_10b408:
    // 0x10b408: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10b40c:
    // 0x10b40c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10b410:
    // 0x10b410: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
label_10b414:
    if (ctx->pc == 0x10B414u) {
        ctx->pc = 0x10B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B410u;
        // 0x10b414: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B418u;
        goto label_10b418;
    }
    ctx->pc = 0x10B410u;
    {
        const bool branch_taken_0x10b410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B410u;
        // 0x10b414: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b410) {
            ctx->pc = 0x10B4F4u;
            return;
        }
    }
    ctx->pc = 0x10B418u;
label_10b418:
    // 0x10b418: 0x8e05231c  lw          $a1, 0x231C($s0)
    ctx->pc = 0x10b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b41c:
    // 0x10b41c: 0x3c033d44  lui         $v1, 0x3D44
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15684 << 16));
label_10b420:
    // 0x10b420: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x10b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
label_10b424:
    // 0x10b424: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_10b428:
    // 0x10b428: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10b42c:
    // 0x10b42c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x10b42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b430:
    // 0x10b430: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10b430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10b434:
    // 0x10b434: 0xc043160  jal         func_10C580
label_10b438:
    if (ctx->pc == 0x10B438u) {
        ctx->pc = 0x10B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B434u;
        // 0x10b438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B43Cu;
        goto label_10b43c;
    }
    ctx->pc = 0x10B434u;
    SET_GPR_U32(ctx, 31, 0x10B43Cu);
    ctx->pc = 0x10B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B434u;
    // 0x10b438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10B434u, 0x10B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B43Cu;
label_10b43c:
    // 0x10b43c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b440:
    // 0x10b440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b444:
    // 0x10b444: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b448:
    // 0x10b448: 0x320f809  jalr        $t9
label_10b44c:
    if (ctx->pc == 0x10B44Cu) {
        ctx->pc = 0x10B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B448u;
        // 0x10b44c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B450u;
        goto label_10b450;
    }
    ctx->pc = 0x10B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B450u);
        ctx->pc = 0x10B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B448u;
        // 0x10b44c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B448u, 0x10B450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B450u;
label_10b450:
    // 0x10b450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b454:
    // 0x10b454: 0xc042118  jal         func_108460
label_10b458:
    if (ctx->pc == 0x10B458u) {
        ctx->pc = 0x10B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B454u;
        // 0x10b458: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B45Cu;
        goto label_10b45c;
    }
    ctx->pc = 0x10B454u;
    SET_GPR_U32(ctx, 31, 0x10B45Cu);
    ctx->pc = 0x10B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B454u;
    // 0x10b458: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B454u, 0x10B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B45Cu;
label_10b45c:
    // 0x10b45c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10b460:
    // 0x10b460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b464:
    // 0x10b464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b468:
    // 0x10b468: 0xc0425a4  jal         func_109690
label_10b46c:
    if (ctx->pc == 0x10B46Cu) {
        ctx->pc = 0x10B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B468u;
        // 0x10b46c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B470u;
        goto label_10b470;
    }
    ctx->pc = 0x10B468u;
    SET_GPR_U32(ctx, 31, 0x10B470u);
    ctx->pc = 0x10B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B468u;
    // 0x10b46c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10B468u, 0x10B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B470u;
label_10b470:
    // 0x10b470: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b474:
    // 0x10b474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b478:
    // 0x10b478: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_10b47c:
    // 0x10b47c: 0x320f809  jalr        $t9
label_10b480:
    if (ctx->pc == 0x10B480u) {
        ctx->pc = 0x10B484u;
        goto label_10b484;
    }
    ctx->pc = 0x10B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B47Cu, 0x10B484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B484u;
label_10b484:
    // 0x10b484: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x10b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b488:
    // 0x10b488: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b48c:
    // 0x10b48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10b48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10b490:
    // 0x10b490: 0xc04c72c  jal         func_131CB0
label_10b494:
    if (ctx->pc == 0x10B494u) {
        ctx->pc = 0x10B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B490u;
        // 0x10b494: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B498u;
        goto label_10b498;
    }
    ctx->pc = 0x10B490u;
    SET_GPR_U32(ctx, 31, 0x10B498u);
    ctx->pc = 0x10B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B490u;
    // 0x10b494: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B490u, 0x10B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B498u;
label_10b498:
    // 0x10b498: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b49c:
    // 0x10b49c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10b4a0:
    // 0x10b4a0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b4a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b4a4:
    // 0x10b4a4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b4a8:
    // 0x10b4a8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b4a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10b4ac:
    // 0x10b4ac: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b4acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10b4b0:
    // 0x10b4b0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b4b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10b4b4:
    // 0x10b4b4: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10b4b8:
    // 0x10b4b8: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10b4bc:
    // 0x10b4bc: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10b4c0:
    // 0x10b4c0: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10b4c4:
    // 0x10b4c4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x10b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10b4c8:
    // 0x10b4c8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b4c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10b4cc:
    // 0x10b4cc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_10b4d0:
    // 0x10b4d0: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b4d4:
    // 0x10b4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b4d8:
    // 0x10b4d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b4dc:
    // 0x10b4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b4e0:
    // 0x10b4e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b4e4:
    // 0x10b4e4: 0xc0465f0  jal         func_1197C0
label_10b4e8:
    if (ctx->pc == 0x10B4E8u) {
        ctx->pc = 0x10B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4E4u;
        // 0x10b4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B4ECu;
        goto label_10b4ec;
    }
    ctx->pc = 0x10B4E4u;
    SET_GPR_U32(ctx, 31, 0x10B4ECu);
    ctx->pc = 0x10B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4E4u;
    // 0x10b4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10B4E4u, 0x10B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_10b4f0:
    if (ctx->pc == 0x10B4F0u) {
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0xae0243dc  sw          $v0, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B4F4u;
        goto label_fallthrough_0x10b4ec;
    }
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0xae0243dc  sw          $v0, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
label_fallthrough_0x10b4ec:
    ctx->pc = 0x10B4F4u;
}
