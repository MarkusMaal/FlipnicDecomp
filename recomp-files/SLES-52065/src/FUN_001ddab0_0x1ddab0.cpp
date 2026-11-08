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

// Function: FUN_001ddab0
// Address: 0x1ddab0 - 0x1ddaf4
void FUN_001ddab0_0x1ddab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ddab0_0x1ddab0");
#endif

    ctx->pc = 0x1ddab0u;

    // 0x1ddab0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ddab4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1ddab8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddabc: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1ddabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1ddac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ddac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ddac4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddac8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ddac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ddacc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddad0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x1ddad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1ddad4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ddad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddad8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddadc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1ddadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddae0: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x1ddae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1ddae4: 0xe46c0010  swc1        $f12, 0x10($v1)
    ctx->pc = 0x1ddae4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1ddae8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ddae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ddaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAECu;
        // 0x1ddaf0: 0xe4cd000c  swc1        $f13, 0xC($a2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDAF4u;
}
