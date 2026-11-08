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

// Function: FUN_00174170
// Address: 0x174170 - 0x174788
void FUN_00174170_0x174170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174170_0x174170");
#endif

    switch (ctx->pc) {
        case 0x1741a4u: goto label_1741a4;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b8u: goto label_1741b8;
        case 0x1741c4u: goto label_1741c4;
        case 0x1741fcu: goto label_1741fc;
        case 0x174224u: goto label_174224;
        case 0x174230u: goto label_174230;
        case 0x174240u: goto label_174240;
        case 0x1742e8u: goto label_1742e8;
        case 0x174378u: goto label_174378;
        case 0x174380u: goto label_174380;
        case 0x1743bcu: goto label_1743bc;
        case 0x174490u: goto label_174490;
        case 0x1744ecu: goto label_1744ec;
        case 0x174508u: goto label_174508;
        case 0x174510u: goto label_174510;
        case 0x17451cu: goto label_17451c;
        case 0x17452cu: goto label_17452c;
        case 0x174640u: goto label_174640;
        case 0x1746b8u: goto label_1746b8;
        case 0x174730u: goto label_174730;
        default: break;
    }

    ctx->pc = 0x174170u;

    // 0x174170: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x174170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x174174: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x174178: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x174178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17417c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x174180: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17418c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17418cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x174190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174194: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x174194u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x174198: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x174198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17419c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x17419Cu;
    SET_GPR_U32(ctx, 31, 0x1741A4u);
    ctx->pc = 0x1741A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17419Cu;
    // 0x1741a0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x17419Cu, 0x1741A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741A4u;
label_1741a4:
    // 0x1741a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1741a8: 0xc05c550  jal         func_171540
    ctx->pc = 0x1741A8u;
    SET_GPR_U32(ctx, 31, 0x1741B0u);
    ctx->pc = 0x1741ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741A8u;
    // 0x1741ac: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1741A8u, 0x1741B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741B0u;
label_1741b0:
    // 0x1741b0: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1741B0u;
    SET_GPR_U32(ctx, 31, 0x1741B8u);
    ctx->pc = 0x1741B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741B0u;
    // 0x1741b4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1741B0u, 0x1741B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741B8u;
label_1741b8:
    // 0x1741b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1741bc: 0xc05c550  jal         func_171540
    ctx->pc = 0x1741BCu;
    SET_GPR_U32(ctx, 31, 0x1741C4u);
    ctx->pc = 0x1741C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741BCu;
    // 0x1741c0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1741BCu, 0x1741C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741C4u;
label_1741c4:
    // 0x1741c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1741c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1741c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1741c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1741cc: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1741CCu;
    {
        const bool branch_taken_0x1741cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1741D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741CCu;
        // 0x1741d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741cc) {
            ctx->pc = 0x1744DCu;
            goto label_1744dc;
        }
    }
    ctx->pc = 0x1741D4u;
    // 0x1741d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1741d8: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1741D8u;
    {
        const bool branch_taken_0x1741d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1741DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741D8u;
        // 0x1741dc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741d8) {
            ctx->pc = 0x17436Cu;
            goto label_17436c;
        }
    }
    ctx->pc = 0x1741E0u;
    // 0x1741e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1741E0u;
    {
        const bool branch_taken_0x1741e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1741E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741E0u;
        // 0x1741e4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741e0) {
            ctx->pc = 0x1741F0u;
            goto label_1741f0;
        }
    }
    ctx->pc = 0x1741E8u;
    // 0x1741e8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1741E8u;
    {
        const bool branch_taken_0x1741e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741e8) {
            ctx->pc = 0x1746A4u;
            goto label_1746a4;
        }
    }
    ctx->pc = 0x1741F0u;
label_1741f0:
    // 0x1741f0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1741f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1741f4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1741F4u;
    SET_GPR_U32(ctx, 31, 0x1741FCu);
    ctx->pc = 0x1741F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741F4u;
    // 0x1741f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1741F4u, 0x1741FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741FCu;
label_1741fc:
    // 0x1741fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1741fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174200: 0x3c03c0f0  lui         $v1, 0xC0F0
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49392 << 16));
    // 0x174204: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x174204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x174208: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17420c: 0x3c024070  lui         $v0, 0x4070
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16496 << 16));
    // 0x174210: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x174210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x174214: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x174214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174218: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x174218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x17421c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17421Cu;
    {
        const bool branch_taken_0x17421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17421Cu;
        // 0x174220: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17421c) {
            ctx->pc = 0x174354u;
            goto label_174354;
        }
    }
    ctx->pc = 0x174224u;
label_174224:
    // 0x174224: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174228: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x174228u;
    {
        const bool branch_taken_0x174228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174228u;
        // 0x17422c: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174228) {
            ctx->pc = 0x174334u;
            goto label_174334;
        }
    }
    ctx->pc = 0x174230u;
label_174230:
    // 0x174230: 0x3c02c0f0  lui         $v0, 0xC0F0
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49392 << 16));
    // 0x174234: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x174234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x174238: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x174238u;
    {
        const bool branch_taken_0x174238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174238u;
        // 0x17423c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174238) {
            ctx->pc = 0x174318u;
            goto label_174318;
        }
    }
    ctx->pc = 0x174240u;
label_174240:
    // 0x174240: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x174240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x174244: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x174244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x174248: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17424c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17424cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174250: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x174250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174254: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x174254u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x174258: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x174258u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17425c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x17425cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x174260: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174264: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x174264u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174268: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x174268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17426c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17426cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174270: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174270u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x174274: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174278: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x174278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17427c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174284: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174288: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x174288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17428c: 0x0  nop
    ctx->pc = 0x17428cu;
    // NOP
    // 0x174290: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x174290u;
    {
        const bool branch_taken_0x174290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174290u;
        // 0x174294: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174290) {
            ctx->pc = 0x1742E0u;
            goto label_1742e0;
        }
    }
    ctx->pc = 0x174298u;
    // 0x174298: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x174298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17429c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1742a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1742a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1742a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1742a8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742ac: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1742acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1742b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1742b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742b4: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1742b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1742b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1742bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742c0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1742c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1742c4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1742c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742c8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1742c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1742ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1742d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1742d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1742d4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1742d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1742d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1742D8u;
    {
        const bool branch_taken_0x1742d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742D8u;
        // 0x1742dc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742d8) {
            ctx->pc = 0x1742E8u;
            goto label_1742e8;
        }
    }
    ctx->pc = 0x1742E0u;
label_1742e0:
    // 0x1742e0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1742E0u;
    SET_GPR_U32(ctx, 31, 0x1742E8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1742E0u, 0x1742E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742E8u;
label_1742e8:
    // 0x1742e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1742ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1742ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1742f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1742f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1742f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1742f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1742fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1742fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174308: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x174308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x17430c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x17430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174310: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x174310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174314: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x174314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_174318:
    // 0x174318: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x174318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17431c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x17431Cu;
    {
        const bool branch_taken_0x17431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17431c) {
            ctx->pc = 0x174240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174240;
        }
    }
    ctx->pc = 0x174324u;
    // 0x174324: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x174328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17432c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17432cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174330: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x174330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_174334:
    // 0x174334: 0x0  nop
    ctx->pc = 0x174334u;
    // NOP
    // 0x174338: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x174338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17433c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x17433Cu;
    {
        const bool branch_taken_0x17433c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17433c) {
            ctx->pc = 0x174230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174230;
        }
    }
    ctx->pc = 0x174344u;
    // 0x174344: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x174344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174348: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17434c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x17434cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174350: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x174350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_174354:
    // 0x174354: 0x0  nop
    ctx->pc = 0x174354u;
    // NOP
    // 0x174358: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x174358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17435c: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x17435Cu;
    {
        const bool branch_taken_0x17435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17435Cu;
        // 0x174360: 0x3c02c0f0  lui         $v0, 0xC0F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17435c) {
            ctx->pc = 0x174224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174224;
        }
    }
    ctx->pc = 0x174364u;
    // 0x174364: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x174364u;
    {
        const bool branch_taken_0x174364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174364) {
            ctx->pc = 0x1746A4u;
            goto label_1746a4;
        }
    }
    ctx->pc = 0x17436Cu;
label_17436c:
    // 0x17436c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x174370: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x174370u;
    SET_GPR_U32(ctx, 31, 0x174378u);
    ctx->pc = 0x174374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174370u;
    // 0x174374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x174370u, 0x174378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174378u;
label_174378:
    // 0x174378: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x174378u;
    {
        const bool branch_taken_0x174378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174378u;
        // 0x17437c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174378) {
            ctx->pc = 0x1744C8u;
            goto label_1744c8;
        }
    }
    ctx->pc = 0x174380u;
label_174380:
    // 0x174380: 0x3c034134  lui         $v1, 0x4134
    ctx->pc = 0x174380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16692 << 16));
    // 0x174384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x174384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17438c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17438cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174390: 0x0  nop
    ctx->pc = 0x174390u;
    // NOP
    // 0x174394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174398: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x17439c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17439cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1743a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1743a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743a4: 0x0  nop
    ctx->pc = 0x1743a4u;
    // NOP
    // 0x1743a8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1743a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1743ac: 0x0  nop
    ctx->pc = 0x1743acu;
    // NOP
    // 0x1743b0: 0x0  nop
    ctx->pc = 0x1743b0u;
    // NOP
    // 0x1743b4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1743B4u;
    {
        const bool branch_taken_0x1743b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743b4) {
            ctx->pc = 0x1744B4u;
            goto label_1744b4;
        }
    }
    ctx->pc = 0x1743BCu;
label_1743bc:
    // 0x1743bc: 0x0  nop
    ctx->pc = 0x1743bcu;
    // NOP
    // 0x1743c0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1743c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1743c4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1743c8: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x1743c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x1743cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1743ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1743d0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1743d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1743d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1743d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1743d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1743d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1743dc: 0x0  nop
    ctx->pc = 0x1743dcu;
    // NOP
    // 0x1743e0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x1743e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1743e4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1743e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1743e8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1743e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1743ec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1743f0: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1743f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1743f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1743f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1743f8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1743f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1743fc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1743fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x174400: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x174400u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x174404: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174408: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x174408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17440c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17440cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174410: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x174410u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174414: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174414u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x174418: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17441c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174420: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x174420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174428: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17442c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x17442cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174430: 0x0  nop
    ctx->pc = 0x174430u;
    // NOP
    // 0x174434: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x174434u;
    {
        const bool branch_taken_0x174434 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174434u;
        // 0x174438: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174434) {
            ctx->pc = 0x174484u;
            goto label_174484;
        }
    }
    ctx->pc = 0x17443Cu;
    // 0x17443c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x17443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174444: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x174444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17444c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x17444cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174450: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x174450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x174454: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x174454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174458: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17445c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17445cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174460: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174464: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174468: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17446c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174470: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174474: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174478: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17447c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17447Cu;
    {
        const bool branch_taken_0x17447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17447Cu;
        // 0x174480: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17447c) {
            ctx->pc = 0x174490u;
            goto label_174490;
        }
    }
    ctx->pc = 0x174484u;
label_174484:
    // 0x174484: 0x0  nop
    ctx->pc = 0x174484u;
    // NOP
    // 0x174488: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174488u;
    SET_GPR_U32(ctx, 31, 0x174490u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174488u, 0x174490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174490u;
label_174490:
    // 0x174490: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174494: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17449c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1744a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1744a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1744a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1744a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1744a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1744ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1744b0: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1744b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1744b4:
    // 0x1744b4: 0x0  nop
    ctx->pc = 0x1744b4u;
    // NOP
    // 0x1744b8: 0x2e62000c  sltiu       $v0, $s3, 0xC
    ctx->pc = 0x1744b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1744bc: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1744BCu;
    {
        const bool branch_taken_0x1744bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1744bc) {
            ctx->pc = 0x1743BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1743bc;
        }
    }
    ctx->pc = 0x1744C4u;
    // 0x1744c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1744c8:
    // 0x1744c8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1744c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1744cc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1744CCu;
    {
        const bool branch_taken_0x1744cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1744D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744CCu;
        // 0x1744d0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744cc) {
            ctx->pc = 0x174380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174380;
        }
    }
    ctx->pc = 0x1744D4u;
    // 0x1744d4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1744D4u;
    {
        const bool branch_taken_0x1744d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744d4) {
            ctx->pc = 0x1746A4u;
            goto label_1746a4;
        }
    }
    ctx->pc = 0x1744DCu;
label_1744dc:
    // 0x1744dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1744e0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1744e4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1744E4u;
    SET_GPR_U32(ctx, 31, 0x1744ECu);
    ctx->pc = 0x1744E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744E4u;
    // 0x1744e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1744E4u, 0x1744ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744ECu;
label_1744ec:
    // 0x1744ec: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1744f0: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1744f4: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x1744f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1744f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1744fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x211A50u));
    // 0x174500: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x174500u;
    {
        const bool branch_taken_0x174500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174500u;
        // 0x174504: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174500) {
            ctx->pc = 0x174694u;
            goto label_174694;
        }
    }
    ctx->pc = 0x174508u;
label_174508:
    // 0x174508: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x174508u;
    SET_GPR_U32(ctx, 31, 0x174510u);
    ctx->pc = 0x17450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174508u;
    // 0x17450c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x174508u, 0x174510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174510u;
label_174510:
    // 0x174510: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x174510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x174514: 0xc05c550  jal         func_171540
    ctx->pc = 0x174514u;
    SET_GPR_U32(ctx, 31, 0x17451Cu);
    ctx->pc = 0x174518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174514u;
    // 0x174518: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x174514u, 0x17451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17451Cu;
label_17451c:
    // 0x17451c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x174520: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x174520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174524: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x174524u;
    {
        const bool branch_taken_0x174524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174524u;
        // 0x174528: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174524) {
            ctx->pc = 0x174664u;
            goto label_174664;
        }
    }
    ctx->pc = 0x17452Cu;
label_17452c:
    // 0x17452c: 0x0  nop
    ctx->pc = 0x17452cu;
    // NOP
    // 0x174530: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174534: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x174534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x174538: 0x244217f0  addiu       $v0, $v0, 0x17F0
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6128));
    // 0x17453c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174540: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x174544: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174548: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x174548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x17454c: 0x0  nop
    ctx->pc = 0x17454cu;
    // NOP
    // 0x174550: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x174550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x174554: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x174554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x174558: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x174558u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17455c: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x174560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174564: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x174568: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x174568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17456c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17456cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174570: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x174570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x174574: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174574u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174578: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x174578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17457c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x17457cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x174580: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x174580u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x174584: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x174584u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x174588: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x174588u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17458c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17458cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174590: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x174590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x174594: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x174594u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x174598: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x174598u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x17459c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1745a0: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1745a0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1745a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1745a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1745a8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1745a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1745ac: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1745acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1745b0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1745b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1745b4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1745b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745b8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1745b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745bc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1745bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1745c0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1745c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1745c4: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1745c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1745c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1745cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1745d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1745d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1745d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1745dc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1745dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1745e0: 0x0  nop
    ctx->pc = 0x1745e0u;
    // NOP
    // 0x1745e4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1745E4u;
    {
        const bool branch_taken_0x1745e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1745E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745E4u;
        // 0x1745e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745e4) {
            ctx->pc = 0x174634u;
            goto label_174634;
        }
    }
    ctx->pc = 0x1745ECu;
    // 0x1745ec: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1745ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1745f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1745f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1745f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1745f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1745f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1745fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1745fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174600: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x174600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x174604: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x174604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174608: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x174608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17460c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17460cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174610: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174614: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174618: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17461c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174624: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174628: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17462c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17462Cu;
    {
        const bool branch_taken_0x17462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17462Cu;
        // 0x174630: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17462c) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x174634u;
label_174634:
    // 0x174634: 0x0  nop
    ctx->pc = 0x174634u;
    // NOP
    // 0x174638: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174638u;
    SET_GPR_U32(ctx, 31, 0x174640u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174638u, 0x174640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174640u;
label_174640:
    // 0x174640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174644: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17464c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x174650: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x174650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x174654: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17465c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174660: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x174660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_174664:
    // 0x174664: 0x0  nop
    ctx->pc = 0x174664u;
    // NOP
    // 0x174668: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x174668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17466c: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x17466Cu;
    {
        const bool branch_taken_0x17466c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17466c) {
            ctx->pc = 0x17452Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17452c;
        }
    }
    ctx->pc = 0x174674u;
    // 0x174674: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x174674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174678: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x17467c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x17467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x174680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174688: 0x0  nop
    ctx->pc = 0x174688u;
    // NOP
    // 0x17468c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17468cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174690: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x174690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_174694:
    // 0x174694: 0x0  nop
    ctx->pc = 0x174694u;
    // NOP
    // 0x174698: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x174698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17469c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x17469Cu;
    {
        const bool branch_taken_0x17469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17469c) {
            ctx->pc = 0x174508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174508;
        }
    }
    ctx->pc = 0x1746A4u;
label_1746a4:
    // 0x1746a4: 0x0  nop
    ctx->pc = 0x1746a4u;
    // NOP
    // 0x1746a8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1746a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1746ac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1746acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1746b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1746B0u;
    {
        const bool branch_taken_0x1746b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746B0u;
        // 0x1746b4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746b0) {
            ctx->pc = 0x17474Cu;
            goto label_17474c;
        }
    }
    ctx->pc = 0x1746B8u;
label_1746b8:
    // 0x1746b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1746b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1746bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1746bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1746c0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1746c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1746c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1746c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1746c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1746cc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1746ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1746d0: 0x0  nop
    ctx->pc = 0x1746d0u;
    // NOP
    // 0x1746d4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1746D4u;
    {
        const bool branch_taken_0x1746d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1746D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746D4u;
        // 0x1746d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746d4) {
            ctx->pc = 0x174724u;
            goto label_174724;
        }
    }
    ctx->pc = 0x1746DCu;
    // 0x1746dc: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1746dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1746e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1746e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1746e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1746e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1746ec: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1746ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1746f0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1746f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1746f4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1746f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1746f8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1746f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1746fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1746fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174700: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174704: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x174704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x174708: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x174708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17470c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174710: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174714: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x174714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x174718: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x174718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x17471c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17471Cu;
    {
        const bool branch_taken_0x17471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17471Cu;
        // 0x174720: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17471c) {
            ctx->pc = 0x174730u;
            goto label_174730;
        }
    }
    ctx->pc = 0x174724u;
label_174724:
    // 0x174724: 0x0  nop
    ctx->pc = 0x174724u;
    // NOP
    // 0x174728: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174728u;
    SET_GPR_U32(ctx, 31, 0x174730u);
    ctx->pc = 0x17472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174728u;
    // 0x17472c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174728u, 0x174730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174730u;
label_174730:
    // 0x174730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174734: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x174734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x174738: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x174738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17473c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17473cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174740: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174748: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x174748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_17474c:
    // 0x17474c: 0x0  nop
    ctx->pc = 0x17474cu;
    // NOP
    // 0x174750: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x174750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x174754: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174758: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174758u;
    {
        const bool branch_taken_0x174758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174758) {
            ctx->pc = 0x1746B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1746b8;
        }
    }
    ctx->pc = 0x174760u;
    // 0x174760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x174760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174764: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x174764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174768: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x174768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17476c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17476cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x174770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174774: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x174774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17477c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17477cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174780: 0x3e00008  jr          $ra
    ctx->pc = 0x174780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174780u;
        // 0x174784: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174788u;
}
