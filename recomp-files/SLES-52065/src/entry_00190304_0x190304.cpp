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

// Function: entry_00190304
// Address: 0x190304 - 0x190330
void entry_00190304_0x190304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190304_0x190304");
#endif

    ctx->pc = 0x190304u;

    // 0x190304: 0x0  nop
    ctx->pc = 0x190304u;
    // NOP
    // 0x190308: 0xaf9086f4  sw          $s0, -0x790C($gp)
    ctx->pc = 0x190308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 16));
    // 0x19030c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190318: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x19031c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x190320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190324: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x190328: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x190328u;
    {
        const bool branch_taken_0x190328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190328u;
        // 0x19032c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190328) {
            ctx->pc = 0x190460u;
            return;
        }
    }
    ctx->pc = 0x190330u;
}
