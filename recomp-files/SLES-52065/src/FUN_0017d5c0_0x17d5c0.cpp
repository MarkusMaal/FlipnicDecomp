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

// Function: FUN_0017d5c0
// Address: 0x17d5c0 - 0x17d62c
void FUN_0017d5c0_0x17d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d5c0_0x17d5c0");
#endif

    ctx->pc = 0x17d5c0u;

    // 0x17d5c0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x17d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d5c4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x17d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d5cc: 0x0  nop
    ctx->pc = 0x17d5ccu;
    // NOP
    // 0x17d5d0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x17D5D0u;
    {
        const bool branch_taken_0x17d5d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5D0u;
        // 0x17d5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5d0) {
            ctx->pc = 0x17D624u;
            goto label_17d624;
        }
    }
    ctx->pc = 0x17D5D8u;
    // 0x17d5d8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x17d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d5dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d5e0: 0x0  nop
    ctx->pc = 0x17d5e0u;
    // NOP
    // 0x17d5e4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x17D5E4u;
    {
        const bool branch_taken_0x17d5e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d5e4) {
            ctx->pc = 0x17D620u;
            goto label_17d620;
        }
    }
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x17d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d5f0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x17d5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d5f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17d5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d5f8: 0x0  nop
    ctx->pc = 0x17d5f8u;
    // NOP
    // 0x17d5fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x17D5FCu;
    {
        const bool branch_taken_0x17d5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d5fc) {
            ctx->pc = 0x17D620u;
            goto label_17d620;
        }
    }
    ctx->pc = 0x17D604u;
    // 0x17d604: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x17d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d608: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d60c: 0x0  nop
    ctx->pc = 0x17d60cu;
    // NOP
    // 0x17d610: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17D610u;
    {
        const bool branch_taken_0x17d610 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D610u;
        // 0x17d614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d610) {
            ctx->pc = 0x17D620u;
            goto label_17d620;
        }
    }
    ctx->pc = 0x17D618u;
    // 0x17d618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D618u;
    {
        const bool branch_taken_0x17d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d618) {
            ctx->pc = 0x17D624u;
            goto label_17d624;
        }
    }
    ctx->pc = 0x17D620u;
label_17d620:
    // 0x17d620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d624:
    // 0x17d624: 0x3e00008  jr          $ra
    ctx->pc = 0x17D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D62Cu;
}
