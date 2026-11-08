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

// Function: entry_001d7f38
// Address: 0x1d7f38 - 0x1d7f78
void entry_001d7f38_0x1d7f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f38_0x1d7f38");
#endif

    ctx->pc = 0x1d7f38u;

    // 0x1d7f38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f3c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f40: 0x8c45054c  lw          $a1, 0x54C($v0)
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7f44: 0x8c860550  lw          $a2, 0x550($a0)
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7f48: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1d7f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7f4c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1d7f4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d7f50: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d7f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d7f54: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d7f58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7f5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F6Cu;
        // 0x1d7f70: 0xac4402dc  sw          $a0, 0x2DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F74u;
    // 0x1d7f74: 0x0  nop
    ctx->pc = 0x1d7f74u;
    // NOP
    ctx->pc = 0x1d7f78u;
}
