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

// Function: FUN_001503c0
// Address: 0x1503c0 - 0x150434
void FUN_001503c0_0x1503c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001503c0_0x1503c0");
#endif

    switch (ctx->pc) {
        case 0x150428u: goto label_150428;
        default: break;
    }

    ctx->pc = 0x1503c0u;

    // 0x1503c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1503c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1503c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1503c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1503c8: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1503c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1503cc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1503CCu;
    {
        const bool branch_taken_0x1503cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1503cc) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1503D4u;
    // 0x1503d4: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1503d8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1503e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1503e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1503e8: 0x0  nop
    ctx->pc = 0x1503e8u;
    // NOP
    // 0x1503ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1503ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1503f0: 0x0  nop
    ctx->pc = 0x1503f0u;
    // NOP
    // 0x1503f4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1503F4u;
    {
        const bool branch_taken_0x1503f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1503f4) {
            ctx->pc = 0x150428u;
            goto label_150428;
        }
    }
    ctx->pc = 0x1503FCu;
    // 0x1503fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1503fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150400: 0x0  nop
    ctx->pc = 0x150400u;
    // NOP
    // 0x150404: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x150404u;
    {
        const bool branch_taken_0x150404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150404) {
            ctx->pc = 0x15041Cu;
            goto label_15041c;
        }
    }
    ctx->pc = 0x15040Cu;
    // 0x15040c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x15040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150410: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x150410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x150414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150414u;
    {
        const bool branch_taken_0x150414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150414u;
        // 0x150418: 0xe4800050  swc1        $f0, 0x50($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150414) {
            ctx->pc = 0x150420u;
            goto label_150420;
        }
    }
    ctx->pc = 0x15041Cu;
label_15041c:
    // 0x15041c: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x15041cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_150420:
    // 0x150420: 0xc053ed4  jal         func_14FB50
    ctx->pc = 0x150420u;
    SET_GPR_U32(ctx, 31, 0x150428u);
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x150420u, 0x150428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150428u;
label_150428:
    // 0x150428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15042c: 0x3e00008  jr          $ra
    ctx->pc = 0x15042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15042Cu;
        // 0x150430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150434u;
}
