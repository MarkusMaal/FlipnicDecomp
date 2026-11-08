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

// Function: FUN_00167640
// Address: 0x167640 - 0x1676ac
void FUN_00167640_0x167640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167640_0x167640");
#endif

    switch (ctx->pc) {
        case 0x167654u: goto label_167654;
        default: break;
    }

    ctx->pc = 0x167640u;

    // 0x167640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16764c: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16764Cu;
    SET_GPR_U32(ctx, 31, 0x167654u);
    ctx->pc = 0x167650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16764Cu;
    // 0x167650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16764Cu, 0x167654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167654u;
label_167654:
    // 0x167654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16765c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x16765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167660: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x167660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x167664: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x167664u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x167668: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167668u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16766c: 0x0  nop
    ctx->pc = 0x16766cu;
    // NOP
    // 0x167670: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167670u;
    {
        const bool branch_taken_0x167670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167670u;
        // 0x167674: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167670) {
            ctx->pc = 0x16767Cu;
            goto label_16767c;
        }
    }
    ctx->pc = 0x167678u;
    // 0x167678: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x167678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_16767c:
    // 0x16767c: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x16767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167684: 0x0  nop
    ctx->pc = 0x167684u;
    // NOP
    // 0x167688: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x167688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16768c: 0x0  nop
    ctx->pc = 0x16768cu;
    // NOP
    // 0x167690: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167690u;
    {
        const bool branch_taken_0x167690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167690u;
        // 0x167694: 0x3c0341c0  lui         $v1, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167690) {
            ctx->pc = 0x16769Cu;
            goto label_16769c;
        }
    }
    ctx->pc = 0x167698u;
    // 0x167698: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x167698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
label_16769c:
    // 0x16769c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1676a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1676a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1676a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1676A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1676A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676A4u;
        // 0x1676a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1676A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1676ACu;
}
