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

// Function: entry_00169e98
// Address: 0x169e98 - 0x169f24
void entry_00169e98_0x169e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169e98_0x169e98");
#endif

    switch (ctx->pc) {
        case 0x169eacu: goto label_169eac;
        case 0x169ed0u: goto label_169ed0;
        case 0x169ee4u: goto label_169ee4;
        case 0x169efcu: goto label_169efc;
        case 0x169f08u: goto label_169f08;
        case 0x169f20u: goto label_169f20;
        default: break;
    }

    ctx->pc = 0x169e98u;

label_169e98:
    // 0x169e98: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169e9c:
    // 0x169e9c: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ea0:
    // 0x169ea0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_169ea4:
    // 0x169ea4: 0x320f809  jalr        $t9
label_169ea8:
    if (ctx->pc == 0x169EA8u) {
        ctx->pc = 0x169EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EA4u;
        // 0x169ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EACu;
        goto label_169eac;
    }
    ctx->pc = 0x169EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EACu);
        ctx->pc = 0x169EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EA4u;
        // 0x169ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EA4u, 0x169EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169EACu;
label_169eac:
    // 0x169eac: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169eb0:
    // 0x169eb0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_169eb4:
    // 0x169eb4: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x169eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169eb8:
    // 0x169eb8: 0x4b002107  vsubw.x     $vf4, $vf4, $vf0w
    ctx->pc = 0x169eb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_169ebc:
    // 0x169ebc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x169ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_169ec0:
    // 0x169ec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169ec4:
    // 0x169ec4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ec8:
    // 0x169ec8: 0xc056194  jal         func_158650
label_169ecc:
    if (ctx->pc == 0x169ECCu) {
        ctx->pc = 0x169ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC8u;
        // 0x169ecc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169ED0u;
        goto label_169ed0;
    }
    ctx->pc = 0x169EC8u;
    SET_GPR_U32(ctx, 31, 0x169ED0u);
    ctx->pc = 0x169ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EC8u;
    // 0x169ecc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169EC8u, 0x169ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169ED0u;
label_169ed0:
    // 0x169ed0: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ed4:
    // 0x169ed4: 0xc60d0200  lwc1        $f13, 0x200($s0)
    ctx->pc = 0x169ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_169ed8:
    // 0x169ed8: 0xc4ac01c0  lwc1        $f12, 0x1C0($a1)
    ctx->pc = 0x169ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_169edc:
    // 0x169edc: 0xc054f5c  jal         func_153D70
label_169ee0:
    if (ctx->pc == 0x169EE0u) {
        ctx->pc = 0x169EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EDCu;
        // 0x169ee0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EE4u;
        goto label_169ee4;
    }
    ctx->pc = 0x169EDCu;
    SET_GPR_U32(ctx, 31, 0x169EE4u);
    ctx->pc = 0x169EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EDCu;
    // 0x169ee0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x169EDCu, 0x169EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EE4u;
label_169ee4:
    // 0x169ee4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ee8:
    // 0x169ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169eec:
    // 0x169eec: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_169ef0:
    // 0x169ef0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x169ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_169ef4:
    // 0x169ef4: 0x320f809  jalr        $t9
label_169ef8:
    if (ctx->pc == 0x169EF8u) {
        ctx->pc = 0x169EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF4u;
        // 0x169ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169EFCu;
        goto label_169efc;
    }
    ctx->pc = 0x169EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169EFCu);
        ctx->pc = 0x169EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EF4u;
        // 0x169ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EF4u, 0x169EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169EFCu;
label_169efc:
    // 0x169efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169f00:
    // 0x169f00: 0xc042118  jal         func_108460
label_169f04:
    if (ctx->pc == 0x169F04u) {
        ctx->pc = 0x169F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F00u;
        // 0x169f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F08u;
        goto label_169f08;
    }
    ctx->pc = 0x169F00u;
    SET_GPR_U32(ctx, 31, 0x169F08u);
    ctx->pc = 0x169F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F00u;
    // 0x169f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x169F00u, 0x169F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F08u;
label_169f08:
    // 0x169f08: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x169f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_169f0c:
    // 0x169f0c: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_169f10:
    // 0x169f10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_169f14:
    if (ctx->pc == 0x169F14u) {
        ctx->pc = 0x169F18u;
        goto label_169f18;
    }
    ctx->pc = 0x169F10u;
    {
        const bool branch_taken_0x169f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f10) {
            ctx->pc = 0x169F24u;
            return;
        }
    }
    ctx->pc = 0x169F18u;
label_169f18:
    // 0x169f18: 0xc04be08  jal         func_12F820
label_169f1c:
    if (ctx->pc == 0x169F1Cu) {
        ctx->pc = 0x169F20u;
        goto label_169f20;
    }
    ctx->pc = 0x169F18u;
    SET_GPR_U32(ctx, 31, 0x169F20u);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x169F18u, 0x169F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F20u;
label_169f20:
    // 0x169f20: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x169f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x169f24u;
}
