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

// Function: entry_0016c198
// Address: 0x16c198 - 0x16c214
void entry_0016c198_0x16c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c198_0x16c198");
#endif

    switch (ctx->pc) {
        case 0x16c1ccu: goto label_16c1cc;
        default: break;
    }

    ctx->pc = 0x16c198u;

    // 0x16c198: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x16c19c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x16C19Cu;
    {
        const bool branch_taken_0x16c19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c19c) {
            ctx->pc = 0x16C358u;
            return;
        }
    }
    ctx->pc = 0x16C1A4u;
    // 0x16c1a4: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16c1a8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x16C1A8u;
    {
        const bool branch_taken_0x16c1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a8) {
            ctx->pc = 0x16C340u;
            return;
        }
    }
    ctx->pc = 0x16C1B0u;
    // 0x16c1b0: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16c1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1b8: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16c1bc: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16c1c0: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x16c1c4: 0xc055038  jal         func_1540E0
    ctx->pc = 0x16C1C4u;
    SET_GPR_U32(ctx, 31, 0x16C1CCu);
    ctx->pc = 0x16C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1C4u;
    // 0x16c1c8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16C1C4u, 0x16C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1CCu;
label_16c1cc:
    // 0x16c1cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16c1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c1d0: 0x0  nop
    ctx->pc = 0x16c1d0u;
    // NOP
    // 0x16c1d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c1d8: 0x0  nop
    ctx->pc = 0x16c1d8u;
    // NOP
    // 0x16c1dc: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x16C1DCu;
    {
        const bool branch_taken_0x16c1dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1DCu;
        // 0x16c1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1dc) {
            ctx->pc = 0x16C338u;
            return;
        }
    }
    ctx->pc = 0x16C1E4u;
    // 0x16c1e4: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c1e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x16c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c1ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16c1f0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16c1f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16c1f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16c1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c1fc: 0x0  nop
    ctx->pc = 0x16c1fcu;
    // NOP
    // 0x16c200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c204: 0x0  nop
    ctx->pc = 0x16c204u;
    // NOP
    // 0x16c208: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16C208u;
    {
        const bool branch_taken_0x16c208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C208u;
        // 0x16c20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c208) {
            ctx->pc = 0x16C214u;
            return;
        }
    }
    ctx->pc = 0x16C210u;
    // 0x16c210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16c214u;
}
