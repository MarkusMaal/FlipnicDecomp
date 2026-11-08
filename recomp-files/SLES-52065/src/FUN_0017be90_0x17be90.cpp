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

// Function: FUN_0017be90
// Address: 0x17be90 - 0x17bf18
void FUN_0017be90_0x17be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017be90_0x17be90");
#endif

    switch (ctx->pc) {
        case 0x17bea4u: goto label_17bea4;
        case 0x17bf08u: goto label_17bf08;
        default: break;
    }

    ctx->pc = 0x17be90u;

    // 0x17be90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17be9c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x17BE9Cu;
    SET_GPR_U32(ctx, 31, 0x17BEA4u);
    ctx->pc = 0x17BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE9Cu;
    // 0x17bea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17BE9Cu, 0x17BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEA4u;
label_17bea4:
    // 0x17bea4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17bea8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17beac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17beb0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17beb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17beb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17beb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bec4: 0xc4c10074  lwc1        $f1, 0x74($a2)
    ctx->pc = 0x17bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bec8: 0xc4c00070  lwc1        $f0, 0x70($a2)
    ctx->pc = 0x17bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17becc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17beccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17bed0: 0x80c6006c  lb          $a2, 0x6C($a2)
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x17bed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17bed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17bed8: 0xa206021e  sb          $a2, 0x21E($s0)
    ctx->pc = 0x17bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 6));
    // 0x17bedc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x17bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x17bee0: 0xe6010214  swc1        $f1, 0x214($s0)
    ctx->pc = 0x17bee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x17bee4: 0xa203021d  sb          $v1, 0x21D($s0)
    ctx->pc = 0x17bee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 541), (uint8_t)GPR_U32(ctx, 3));
    // 0x17bee8: 0xa2020079  sb          $v0, 0x79($s0)
    ctx->pc = 0x17bee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x17beec: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x17beecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x17bef0: 0xa200021f  sb          $zero, 0x21F($s0)
    ctx->pc = 0x17bef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bef4: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x17bef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x17bef8: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x17bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x17befc: 0xa200021c  sb          $zero, 0x21C($s0)
    ctx->pc = 0x17befcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 0));
    // 0x17bf00: 0xc05efc8  jal         func_17BF20
    ctx->pc = 0x17BF00u;
    SET_GPR_U32(ctx, 31, 0x17BF08u);
    ctx->pc = 0x17BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF00u;
    // 0x17bf04: 0xa200021f  sb          $zero, 0x21F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF20u, 0x17BF00u, 0x17BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF08u;
label_17bf08:
    // 0x17bf08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF10u;
        // 0x17bf14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF18u;
}
