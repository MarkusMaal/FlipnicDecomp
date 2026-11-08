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

// Function: entry_0016d254
// Address: 0x16d254 - 0x16d2b8
void entry_0016d254_0x16d254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d254_0x16d254");
#endif

    switch (ctx->pc) {
        case 0x16d270u: goto label_16d270;
        default: break;
    }

    ctx->pc = 0x16d254u;

    // 0x16d254: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x16d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16d258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d25c: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x16d25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16d260: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16d260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x16d264: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x16d268: 0xc055038  jal         func_1540E0
    ctx->pc = 0x16D268u;
    SET_GPR_U32(ctx, 31, 0x16D270u);
    ctx->pc = 0x16D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D268u;
    // 0x16d26c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x16D268u, 0x16D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D270u;
label_16d270:
    // 0x16d270: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16d270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d274: 0x0  nop
    ctx->pc = 0x16d274u;
    // NOP
    // 0x16d278: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16d278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d27c: 0x0  nop
    ctx->pc = 0x16d27cu;
    // NOP
    // 0x16d280: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x16D280u;
    {
        const bool branch_taken_0x16d280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D280u;
        // 0x16d284: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d280) {
            ctx->pc = 0x16D3E0u;
            return;
        }
    }
    ctx->pc = 0x16D288u;
    // 0x16d288: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d28c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x16d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d290: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16d294: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16d294u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16d298: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16d29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d2a0: 0x0  nop
    ctx->pc = 0x16d2a0u;
    // NOP
    // 0x16d2a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d2a8: 0x0  nop
    ctx->pc = 0x16d2a8u;
    // NOP
    // 0x16d2ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16D2ACu;
    {
        const bool branch_taken_0x16d2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2ACu;
        // 0x16d2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2ac) {
            ctx->pc = 0x16D2B8u;
            return;
        }
    }
    ctx->pc = 0x16D2B4u;
    // 0x16d2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16d2b8u;
}
