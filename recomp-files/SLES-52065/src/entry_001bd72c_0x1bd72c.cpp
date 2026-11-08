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

// Function: entry_001bd72c
// Address: 0x1bd72c - 0x1bd768
void entry_001bd72c_0x1bd72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd72c_0x1bd72c");
#endif

    ctx->pc = 0x1bd72cu;

    // 0x1bd72c: 0x0  nop
    ctx->pc = 0x1bd72cu;
    // NOP
    // 0x1bd730: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd734: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1bd734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd738: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bd73c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd740: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bd744: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1bd744u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd748: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1BD748u;
    {
        const bool branch_taken_0x1bd748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd748) {
            ctx->pc = 0x1BD6FCu;
            return;
        }
    }
    ctx->pc = 0x1BD750u;
    // 0x1bd750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bd750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd760: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD760u;
        // 0x1bd764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD768u;
}
