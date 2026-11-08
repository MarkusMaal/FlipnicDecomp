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

// Function: entry_001739fc
// Address: 0x1739fc - 0x173a24
void entry_001739fc_0x1739fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001739fc_0x1739fc");
#endif

    ctx->pc = 0x1739fcu;

    // 0x1739fc: 0x0  nop
    ctx->pc = 0x1739fcu;
    // NOP
    // 0x173a00: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173a04: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x173A04u;
    {
        const bool branch_taken_0x173a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A04u;
        // 0x173a08: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a04) {
            ctx->pc = 0x17393Cu;
            return;
        }
    }
    ctx->pc = 0x173A0Cu;
    // 0x173a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x173A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A1Cu;
        // 0x173a20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A24u;
}
