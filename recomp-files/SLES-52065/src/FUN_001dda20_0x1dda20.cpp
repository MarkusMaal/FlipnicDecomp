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

// Function: FUN_001dda20
// Address: 0x1dda20 - 0x1dda64
void FUN_001dda20_0x1dda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dda20_0x1dda20");
#endif

    ctx->pc = 0x1dda20u;

    // 0x1dda20: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dda20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dda24: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dda24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dda28: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dda2c: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dda30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dda30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dda34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dda38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dda3c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1dda3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dda40: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dda44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1dda44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dda48: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dda4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dda50: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1dda50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1dda54: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x1dda54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1dda58: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1dda58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1dda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA5Cu;
        // 0x1dda60: 0xe4cd0000  swc1        $f13, 0x0($a2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDA64u;
}
