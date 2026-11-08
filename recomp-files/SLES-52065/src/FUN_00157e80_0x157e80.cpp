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

// Function: FUN_00157e80
// Address: 0x157e80 - 0x157f14
void FUN_00157e80_0x157e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157e80_0x157e80");
#endif

    switch (ctx->pc) {
        case 0x157ee8u: goto label_157ee8;
        default: break;
    }

    ctx->pc = 0x157e80u;

    // 0x157e80: 0x9083006b  lbu         $v1, 0x6B($a0)
    ctx->pc = 0x157e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x157e84: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x157e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157e88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157E88u;
    {
        const bool branch_taken_0x157e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E88u;
        // 0x157e8c: 0xc4820000  lwc1        $f2, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e88) {
            ctx->pc = 0x157EA0u;
            goto label_157ea0;
        }
    }
    ctx->pc = 0x157E90u;
    // 0x157e90: 0xc48101b0  lwc1        $f1, 0x1B0($a0)
    ctx->pc = 0x157e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e94: 0xc48001b8  lwc1        $f0, 0x1B8($a0)
    ctx->pc = 0x157e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e98: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x157e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x157e9c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x157e9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_157ea0:
    // 0x157ea0: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x157ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ea4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x157ea8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x157ea8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x157eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157eb0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x157eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x157eb4: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x157eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x157eb8: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x157eb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x157ebc: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x157ebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x157ec0: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x157ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x157ec4: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x157ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x157ec8: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x157ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x157ecc: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x157eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x157ed0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x157ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x157ed4: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x157ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x157ed8: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x157ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x157edc: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x157edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x157ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157EE0u;
    {
        const bool branch_taken_0x157ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE0u;
        // 0x157ee4: 0xe4c00048  swc1        $f0, 0x48($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee0) {
            ctx->pc = 0x157F00u;
            goto label_157f00;
        }
    }
    ctx->pc = 0x157EE8u;
label_157ee8:
    // 0x157ee8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x157eec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157eecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157ef0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x157ef0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x157ef4: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x157ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157ef8: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x157ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157efc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_157f00:
    // 0x157f00: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x157f00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x157f04: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x157F04u;
    {
        const bool branch_taken_0x157f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F04u;
        // 0x157f08: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f04) {
            ctx->pc = 0x157EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157ee8;
        }
    }
    ctx->pc = 0x157F0Cu;
    // 0x157f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x157F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157F14u;
}
