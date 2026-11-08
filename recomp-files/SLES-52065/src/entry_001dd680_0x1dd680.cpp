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

// Function: entry_001dd680
// Address: 0x1dd680 - 0x1dd6c8
void entry_001dd680_0x1dd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd680_0x1dd680");
#endif

    ctx->pc = 0x1dd680u;

    // 0x1dd680: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1dd684: 0x25497330  addiu       $t1, $t2, 0x7330
    ctx->pc = 0x1dd684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 29488));
    // 0x1dd688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd68c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd690: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd694: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1dd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1dd698: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dd69c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1dd6a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD6A0u;
    {
        const bool branch_taken_0x1dd6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A0u;
        // 0x1dd6a4: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a0) {
            ctx->pc = 0x1DD6C8u;
            return;
        }
    }
    ctx->pc = 0x1DD6A8u;
    // 0x1dd6a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd6ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD6ACu;
    {
        const bool branch_taken_0x1dd6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ACu;
        // 0x1dd6b0: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ac) {
            ctx->pc = 0x1DD6C8u;
            return;
        }
    }
    ctx->pc = 0x1DD6B4u;
    // 0x1dd6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd6b8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1dd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1dd6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6BCu;
        // 0x1dd6c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6C4u;
    // 0x1dd6c4: 0x0  nop
    ctx->pc = 0x1dd6c4u;
    // NOP
    ctx->pc = 0x1dd6c8u;
}
