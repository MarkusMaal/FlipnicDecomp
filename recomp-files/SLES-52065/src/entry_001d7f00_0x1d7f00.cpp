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

// Function: entry_001d7f00
// Address: 0x1d7f00 - 0x1d7f34
void entry_001d7f00_0x1d7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f00_0x1d7f00");
#endif

    ctx->pc = 0x1d7f00u;

    // 0x1d7f00: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d7f04: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f08: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7f0c: 0x8c640550  lw          $a0, 0x550($v1)
    ctx->pc = 0x1d7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
    // 0x1d7f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7f28: 0xac4502d4  sw          $a1, 0x2D4($v0)
    ctx->pc = 0x1d7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 5));
    // 0x1d7f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F2Cu;
        // 0x1d7f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F34u;
}
