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

// Function: FUN_001870b0
// Address: 0x1870b0 - 0x18713c
void FUN_001870b0_0x1870b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001870b0_0x1870b0");
#endif

    switch (ctx->pc) {
        case 0x1870e8u: goto label_1870e8;
        case 0x18710cu: goto label_18710c;
        case 0x187128u: goto label_187128;
        default: break;
    }

    ctx->pc = 0x1870b0u;

    // 0x1870b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1870b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1870b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1870b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1870b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1870bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1870bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1870c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1870c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1870c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1870c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1870c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1870cc: 0xf8dc0000  sqc2        $vf28, 0x0($a2)
    ctx->pc = 0x1870ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x1870d0: 0xf8dd0010  sqc2        $vf29, 0x10($a2)
    ctx->pc = 0x1870d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x1870d4: 0xf8de0020  sqc2        $vf30, 0x20($a2)
    ctx->pc = 0x1870d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x1870d8: 0xf8df0030  sqc2        $vf31, 0x30($a2)
    ctx->pc = 0x1870d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x1870dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1870e0: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1870E0u;
    SET_GPR_U32(ctx, 31, 0x1870E8u);
    ctx->pc = 0x1870E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870E0u;
    // 0x1870e4: 0x24a59470  addiu       $a1, $a1, -0x6B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1870E0u, 0x1870E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870E8u;
label_1870e8:
    // 0x1870e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1870ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1870ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1870f0: 0x0  nop
    ctx->pc = 0x1870f0u;
    // NOP
    // 0x1870f4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1870f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1870f8: 0x0  nop
    ctx->pc = 0x1870f8u;
    // NOP
    // 0x1870fc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1870FCu;
    {
        const bool branch_taken_0x1870fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870FCu;
        // 0x187100: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870fc) {
            ctx->pc = 0x187128u;
            goto label_187128;
        }
    }
    ctx->pc = 0x187104u;
    // 0x187104: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x187104u;
    SET_GPR_U32(ctx, 31, 0x18710Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x187104u, 0x18710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18710Cu;
label_18710c:
    // 0x18710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187114: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x187114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x187118: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x187118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18711c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x18711cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x187120: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x187120u;
    SET_GPR_U32(ctx, 31, 0x187128u);
    ctx->pc = 0x187124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187120u;
    // 0x187124: 0xe7b40098  swc1        $f20, 0x98($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x187120u, 0x187128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187128u;
label_187128:
    // 0x187128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18712c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x187130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187134: 0x3e00008  jr          $ra
    ctx->pc = 0x187134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187134u;
        // 0x187138: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18713Cu;
}
