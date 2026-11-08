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

// Function: entry_00169f80
// Address: 0x169f80 - 0x16a000
void entry_00169f80_0x169f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169f80_0x169f80");
#endif

    switch (ctx->pc) {
        case 0x169f98u: goto label_169f98;
        case 0x169fb4u: goto label_169fb4;
        case 0x169fd8u: goto label_169fd8;
        case 0x169ff0u: goto label_169ff0;
        case 0x169ffcu: goto label_169ffc;
        default: break;
    }

    ctx->pc = 0x169f80u;

label_169f80:
    // 0x169f80: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169f84:
    // 0x169f84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169f88:
    // 0x169f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169f8c:
    // 0x169f8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_169f90:
    // 0x169f90: 0x320f809  jalr        $t9
label_169f94:
    if (ctx->pc == 0x169F94u) {
        ctx->pc = 0x169F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F90u;
        // 0x169f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F98u;
        goto label_169f98;
    }
    ctx->pc = 0x169F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169F98u);
        ctx->pc = 0x169F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F90u;
        // 0x169f94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F90u, 0x169F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169F98u;
label_169f98:
    // 0x169f98: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_169f9c:
    if (ctx->pc == 0x169F9Cu) {
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FA0u;
        goto label_169fa0;
    }
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f98) {
            ctx->pc = 0x16A000u;
            return;
        }
    }
    ctx->pc = 0x169FA0u;
label_169fa0:
    // 0x169fa0: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fa4:
    // 0x169fa4: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fa8:
    // 0x169fa8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169fac:
    // 0x169fac: 0x320f809  jalr        $t9
label_169fb0:
    if (ctx->pc == 0x169FB0u) {
        ctx->pc = 0x169FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FACu;
        // 0x169fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FB4u;
        goto label_169fb4;
    }
    ctx->pc = 0x169FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169FB4u);
        ctx->pc = 0x169FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FACu;
        // 0x169fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FACu, 0x169FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169FB4u;
label_169fb4:
    // 0x169fb4: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fb8:
    // 0x169fb8: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169fbc:
    // 0x169fbc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169fc0:
    // 0x169fc0: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169fc4:
    // 0x169fc4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169fc8:
    // 0x169fc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169fcc:
    // 0x169fcc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fd0:
    // 0x169fd0: 0xc056194  jal         func_158650
label_169fd4:
    if (ctx->pc == 0x169FD4u) {
        ctx->pc = 0x169FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FD0u;
        // 0x169fd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FD8u;
        goto label_169fd8;
    }
    ctx->pc = 0x169FD0u;
    SET_GPR_U32(ctx, 31, 0x169FD8u);
    ctx->pc = 0x169FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FD0u;
    // 0x169fd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169FD0u, 0x169FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FD8u;
label_169fd8:
    // 0x169fd8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169fdc:
    // 0x169fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169fe0:
    // 0x169fe0: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169fe4:
    // 0x169fe4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169fe8:
    // 0x169fe8: 0x320f809  jalr        $t9
label_169fec:
    if (ctx->pc == 0x169FECu) {
        ctx->pc = 0x169FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FE8u;
        // 0x169fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FF0u;
        goto label_169ff0;
    }
    ctx->pc = 0x169FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169FF0u);
        ctx->pc = 0x169FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FE8u;
        // 0x169fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FE8u, 0x169FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169FF0u;
label_169ff0:
    // 0x169ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ff4:
    // 0x169ff4: 0xc042118  jal         func_108460
label_169ff8:
    if (ctx->pc == 0x169FF8u) {
        ctx->pc = 0x169FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF4u;
        // 0x169ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FFCu;
        goto label_169ffc;
    }
    ctx->pc = 0x169FF4u;
    SET_GPR_U32(ctx, 31, 0x169FFCu);
    ctx->pc = 0x169FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FF4u;
    // 0x169ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169FF4u, 0x169FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FFCu;
label_169ffc:
    // 0x169ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x16a000u;
}
