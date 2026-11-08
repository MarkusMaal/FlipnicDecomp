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

// Function: entry_001d81a4
// Address: 0x1d81a4 - 0x1d81e4
void entry_001d81a4_0x1d81a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d81a4_0x1d81a4");
#endif

    ctx->pc = 0x1d81a4u;

    // 0x1d81a4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d81a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d81ac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d81b0: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x1d81b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d81b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d81bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d81c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d81c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d81c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d81cc: 0xac8502e0  sw          $a1, 0x2E0($a0)
    ctx->pc = 0x1d81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 5));
    // 0x1d81d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d81d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d81d8: 0xac4302e4  sw          $v1, 0x2E4($v0)
    ctx->pc = 0x1d81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 3));
    // 0x1d81dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81DCu;
        // 0x1d81e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81E4u;
}
