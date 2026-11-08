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

// Function: FUN_00158750
// Address: 0x158750 - 0x15878c
void FUN_00158750_0x158750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158750_0x158750");
#endif

    ctx->pc = 0x158750u;

    // 0x158750: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x158750u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158754: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158758: 0xa48301e8  sh          $v1, 0x1E8($a0)
    ctx->pc = 0x158758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 3));
    // 0x15875c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15875cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158760: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x158760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x158764: 0xa48301ea  sh          $v1, 0x1EA($a0)
    ctx->pc = 0x158764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 490), (uint16_t)GPR_U32(ctx, 3));
    // 0x158768: 0xac850340  sw          $a1, 0x340($a0)
    ctx->pc = 0x158768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 5));
    // 0x15876c: 0xe4800344  swc1        $f0, 0x344($a0)
    ctx->pc = 0x15876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 836), bits); }
    // 0x158770: 0xe4800348  swc1        $f0, 0x348($a0)
    ctx->pc = 0x158770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 840), bits); }
    // 0x158774: 0xe480034c  swc1        $f0, 0x34C($a0)
    ctx->pc = 0x158774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 844), bits); }
    // 0x158778: 0xac800350  sw          $zero, 0x350($a0)
    ctx->pc = 0x158778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 848), GPR_U32(ctx, 0));
    // 0x15877c: 0xac800354  sw          $zero, 0x354($a0)
    ctx->pc = 0x15877cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 852), GPR_U32(ctx, 0));
    // 0x158780: 0xac8003c0  sw          $zero, 0x3C0($a0)
    ctx->pc = 0x158780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 960), GPR_U32(ctx, 0));
    // 0x158784: 0x3e00008  jr          $ra
    ctx->pc = 0x158784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158784u;
        // 0x158788: 0xa48003c6  sh          $zero, 0x3C6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 966), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15878Cu;
}
