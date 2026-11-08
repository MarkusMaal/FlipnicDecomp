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

// Function: entry_00142824
// Address: 0x142824 - 0x142854
void entry_00142824_0x142824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142824_0x142824");
#endif

    ctx->pc = 0x142824u;

    // 0x142824: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x142828: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x142828u;
    {
        const bool branch_taken_0x142828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142828) {
            ctx->pc = 0x142854u;
            return;
        }
    }
    ctx->pc = 0x142830u;
    // 0x142830: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142838: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14283c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142840: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x142840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x142844: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142844u;
    {
        const bool branch_taken_0x142844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142844) {
            ctx->pc = 0x142854u;
            return;
        }
    }
    ctx->pc = 0x14284Cu;
    // 0x14284c: 0xc050d2c  jal         func_1434B0
    ctx->pc = 0x14284Cu;
    SET_GPR_U32(ctx, 31, 0x142854u);
    ctx->pc = 0x142850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14284Cu;
    // 0x142850: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B0u, 0x14284Cu, 0x142854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142854u;
}
