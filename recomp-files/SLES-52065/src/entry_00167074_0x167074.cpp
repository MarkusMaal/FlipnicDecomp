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

// Function: entry_00167074
// Address: 0x167074 - 0x1670d4
void entry_00167074_0x167074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167074_0x167074");
#endif

    switch (ctx->pc) {
        case 0x16708cu: goto label_16708c;
        default: break;
    }

    ctx->pc = 0x167074u;

    // 0x167074: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x167074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16707c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167080: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x167084: 0xc054f9c  jal         func_153E70
    ctx->pc = 0x167084u;
    SET_GPR_U32(ctx, 31, 0x16708Cu);
    ctx->pc = 0x167088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167084u;
    // 0x167088: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E70u, 0x167084u, 0x16708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16708Cu;
label_16708c:
    // 0x16708c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16708cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167090: 0x0  nop
    ctx->pc = 0x167090u;
    // NOP
    // 0x167094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167098: 0x0  nop
    ctx->pc = 0x167098u;
    // NOP
    // 0x16709c: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x16709Cu;
    {
        const bool branch_taken_0x16709c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16709Cu;
        // 0x1670a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16709c) {
            ctx->pc = 0x16718Cu;
            return;
        }
    }
    ctx->pc = 0x1670A4u;
    // 0x1670a4: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1670a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x1670a8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1670ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1670b0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1670b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1670b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1670b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1670b8: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1670b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1670bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1670bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1670c0: 0x0  nop
    ctx->pc = 0x1670c0u;
    // NOP
    // 0x1670c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1670C4u;
    {
        const bool branch_taken_0x1670c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670C4u;
        // 0x1670c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670c4) {
            ctx->pc = 0x1670D4u;
            return;
        }
    }
    ctx->pc = 0x1670CCu;
    // 0x1670cc: 0xc042118  jal         func_108460
    ctx->pc = 0x1670CCu;
    SET_GPR_U32(ctx, 31, 0x1670D4u);
    ctx->pc = 0x1670D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670CCu;
    // 0x1670d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1670CCu, 0x1670D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670D4u;
}
