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

// Function: entry_0017a6d0
// Address: 0x17a6d0 - 0x17a7ec
void entry_0017a6d0_0x17a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a6d0_0x17a6d0");
#endif

    switch (ctx->pc) {
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a71cu: goto label_17a71c;
        case 0x17a728u: goto label_17a728;
        case 0x17a73cu: goto label_17a73c;
        case 0x17a748u: goto label_17a748;
        case 0x17a768u: goto label_17a768;
        default: break;
    }

    ctx->pc = 0x17a6d0u;

label_17a6d0:
    // 0x17a6d0: 0x8f848628  lw          $a0, -0x79D8($gp)
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a6d4:
    // 0x17a6d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a6d8:
    // 0x17a6d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a6dc:
    // 0x17a6dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a6e0:
    // 0x17a6e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_17a6e4:
    // 0x17a6e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17a6e8:
    // 0x17a6e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a6ec:
    // 0x17a6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a6f0:
    // 0x17a6f0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x17a6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a6f4:
    // 0x17a6f4: 0xc04c6d8  jal         func_131B60
label_17a6f8:
    if (ctx->pc == 0x17A6F8u) {
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6FCu;
        goto label_17a6fc;
    }
    ctx->pc = 0x17A6F4u;
    SET_GPR_U32(ctx, 31, 0x17A6FCu);
    ctx->pc = 0x17A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6F4u;
    // 0x17a6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x17A6F4u, 0x17A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6FCu;
label_17a6fc:
    // 0x17a6fc: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a700:
    // 0x17a700: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a704:
    // 0x17a704: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a708:
    // 0x17a708: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a70c:
    // 0x17a70c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a710:
    // 0x17a710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17a714:
    // 0x17a714: 0xc07d38e  jal         func_1F4E38
label_17a718:
    if (ctx->pc == 0x17A718u) {
        ctx->pc = 0x17A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A714u;
        // 0x17a718: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A71Cu;
        goto label_17a71c;
    }
    ctx->pc = 0x17A714u;
    SET_GPR_U32(ctx, 31, 0x17A71Cu);
    ctx->pc = 0x17A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A714u;
    // 0x17a718: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A714u, 0x17A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A71Cu;
label_17a71c:
    // 0x17a71c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a720:
    // 0x17a720: 0xc05c550  jal         func_171540
label_17a724:
    if (ctx->pc == 0x17A724u) {
        ctx->pc = 0x17A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A720u;
        // 0x17a724: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A728u;
        goto label_17a728;
    }
    ctx->pc = 0x17A720u;
    SET_GPR_U32(ctx, 31, 0x17A728u);
    ctx->pc = 0x17A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A720u;
    // 0x17a724: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17A720u, 0x17A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A728u;
label_17a728:
    // 0x17a728: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a72c:
    // 0x17a72c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a730:
    // 0x17a730: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_17a734:
    // 0x17a734: 0x320f809  jalr        $t9
label_17a738:
    if (ctx->pc == 0x17A738u) {
        ctx->pc = 0x17A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A734u;
        // 0x17a738: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A73Cu;
        goto label_17a73c;
    }
    ctx->pc = 0x17A734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A73Cu);
        ctx->pc = 0x17A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A734u;
        // 0x17a738: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A734u, 0x17A73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A73Cu;
label_17a73c:
    // 0x17a73c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17a740:
    // 0x17a740: 0xc04c6dc  jal         func_131B70
label_17a744:
    if (ctx->pc == 0x17A744u) {
        ctx->pc = 0x17A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A740u;
        // 0x17a744: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A748u;
        goto label_17a748;
    }
    ctx->pc = 0x17A740u;
    SET_GPR_U32(ctx, 31, 0x17A748u);
    ctx->pc = 0x17A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A740u;
    // 0x17a744: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x17A740u, 0x17A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A748u;
label_17a748:
    // 0x17a748: 0x8f928630  lw          $s2, -0x79D0($gp)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a74c:
    // 0x17a74c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a750:
    // 0x17a750: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a754:
    // 0x17a754: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a758:
    // 0x17a758: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a75c:
    // 0x17a75c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17a760:
    // 0x17a760: 0xc07d38e  jal         func_1F4E38
label_17a764:
    if (ctx->pc == 0x17A764u) {
        ctx->pc = 0x17A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A760u;
        // 0x17a764: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A768u;
        goto label_17a768;
    }
    ctx->pc = 0x17A760u;
    SET_GPR_U32(ctx, 31, 0x17A768u);
    ctx->pc = 0x17A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A760u;
    // 0x17a764: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A760u, 0x17A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A768u;
label_17a768:
    // 0x17a768: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a76c:
    // 0x17a76c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17a76cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17a770:
    // 0x17a770: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x17a770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_17a774:
    // 0x17a774: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x17a774u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_17a778:
    // 0x17a778: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x17a778u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_17a77c:
    // 0x17a77c: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x17a77cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_17a780:
    // 0x17a780: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17a780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a784:
    // 0x17a784: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17a784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a788:
    // 0x17a788: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17a788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a78c:
    // 0x17a78c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17a78cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17a790:
    // 0x17a790: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17a790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_17a794:
    // 0x17a794: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x17a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a798:
    // 0x17a798: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a79c:
    // 0x17a79c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x17a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a7a0:
    // 0x17a7a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a7a4:
    // 0x17a7a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a7a8:
    // 0x17a7a8: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a7ac:
    // 0x17a7ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a7b0:
    // 0x17a7b0: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x17a7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_17a7b4:
    // 0x17a7b4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x17a7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_17a7b8:
    // 0x17a7b8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17a7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_17a7bc:
    // 0x17a7bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a7c0:
    // 0x17a7c0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_17a7c4:
    // 0x17a7c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a7c8:
    // 0x17a7c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17a7cc:
    if (ctx->pc == 0x17A7CCu) {
        ctx->pc = 0x17A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7C8u;
        // 0x17a7cc: 0xac6000a4  sw          $zero, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7D0u;
        goto label_17a7d0;
    }
    ctx->pc = 0x17A7C8u;
    {
        const bool branch_taken_0x17a7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7C8u;
        // 0x17a7cc: 0xac6000a4  sw          $zero, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7c8) {
            ctx->pc = 0x17A7ECu;
            return;
        }
    }
    ctx->pc = 0x17A7D0u;
label_17a7d0:
    // 0x17a7d0: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_17a7d4:
    // 0x17a7d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a7d8:
    // 0x17a7d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a7dc:
    // 0x17a7dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a7e0:
    // 0x17a7e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a7e4:
    // 0x17a7e4: 0xc0465f0  jal         func_1197C0
label_17a7e8:
    if (ctx->pc == 0x17A7E8u) {
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7ECu;
        goto label_fallthrough_0x17a7e4;
    }
    ctx->pc = 0x17A7E4u;
    SET_GPR_U32(ctx, 31, 0x17A7ECu);
    ctx->pc = 0x17A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7E4u;
    // 0x17a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17A7E4u, 0x17A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x17a7e4:
    ctx->pc = 0x17A7ECu;
}
