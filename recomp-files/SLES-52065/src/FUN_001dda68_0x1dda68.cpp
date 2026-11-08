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

// Function: FUN_001dda68
// Address: 0x1dda68 - 0x1ddaac
void FUN_001dda68_0x1dda68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dda68_0x1dda68");
#endif

    ctx->pc = 0x1dda68u;

    // 0x1dda68: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dda68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dda6c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dda70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dda74: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dda78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dda78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dda7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dda80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dda84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dda88: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1dda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1dda8c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dda90: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dda94: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1dda94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda98: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x1dda98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1dda9c: 0xe46c000c  swc1        $f12, 0xC($v1)
    ctx->pc = 0x1dda9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ddaa0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ddaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ddaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAA4u;
        // 0x1ddaa8: 0xe4cd0008  swc1        $f13, 0x8($a2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDAACu;
}
