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

// Function: FUN_00158790
// Address: 0x158790 - 0x1587d0
void FUN_00158790_0x158790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158790_0x158790");
#endif

    ctx->pc = 0x158790u;

    // 0x158790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x158790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158794: 0xa48001e8  sh          $zero, 0x1E8($a0)
    ctx->pc = 0x158794u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x158798: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x158798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15879c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15879cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1587a0: 0xa48301ea  sh          $v1, 0x1EA($a0)
    ctx->pc = 0x1587a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 490), (uint16_t)GPR_U32(ctx, 3));
    // 0x1587a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1587a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1587a8: 0xac830340  sw          $v1, 0x340($a0)
    ctx->pc = 0x1587a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 3));
    // 0x1587ac: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1587acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1587b0: 0xac830344  sw          $v1, 0x344($a0)
    ctx->pc = 0x1587b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
    // 0x1587b4: 0xe4800348  swc1        $f0, 0x348($a0)
    ctx->pc = 0x1587b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 840), bits); }
    // 0x1587b8: 0xe480034c  swc1        $f0, 0x34C($a0)
    ctx->pc = 0x1587b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 844), bits); }
    // 0x1587bc: 0xac800350  sw          $zero, 0x350($a0)
    ctx->pc = 0x1587bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 848), GPR_U32(ctx, 0));
    // 0x1587c0: 0xac800354  sw          $zero, 0x354($a0)
    ctx->pc = 0x1587c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 852), GPR_U32(ctx, 0));
    // 0x1587c4: 0xac8003c0  sw          $zero, 0x3C0($a0)
    ctx->pc = 0x1587c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 960), GPR_U32(ctx, 0));
    // 0x1587c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1587C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C8u;
        // 0x1587cc: 0xa48003c6  sh          $zero, 0x3C6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 966), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1587D0u;
}
