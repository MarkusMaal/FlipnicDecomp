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

// Function: FUN_00145910
// Address: 0x145910 - 0x145950
void FUN_00145910_0x145910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145910_0x145910");
#endif

    ctx->pc = 0x145910u;

    // 0x145910: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145914: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145918: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x145918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14591c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x145920: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x145920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x145924: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x145924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x145928: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x145928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14592c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145930: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x145930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x145934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x145938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14593c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14593Cu;
    {
        const bool branch_taken_0x14593c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x145940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14593Cu;
        // 0x145940: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14593c) {
            ctx->pc = 0x145948u;
            goto label_145948;
        }
    }
    ctx->pc = 0x145944u;
    // 0x145944: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x145944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_145948:
    // 0x145948: 0x3e00008  jr          $ra
    ctx->pc = 0x145948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145950u;
}
