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

// Function: entry_001d80bc
// Address: 0x1d80bc - 0x1d80f0
void entry_001d80bc_0x1d80bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d80bc_0x1d80bc");
#endif

    ctx->pc = 0x1d80bcu;

    // 0x1d80bc: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1d80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d80c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d80c4: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x1d80c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d80c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d80cc: 0x8ca30550  lw          $v1, 0x550($a1)
    ctx->pc = 0x1d80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
    // 0x1d80d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d80d4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d80d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1d80d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d80dc: 0x30847f00  andi        $a0, $a0, 0x7F00
    ctx->pc = 0x1d80dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32512);
    // 0x1d80e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d80e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80E4u;
        // 0x1d80e8: 0xa4440304  sh          $a0, 0x304($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 772), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80ECu;
    // 0x1d80ec: 0x0  nop
    ctx->pc = 0x1d80ecu;
    // NOP
    ctx->pc = 0x1d80f0u;
}
