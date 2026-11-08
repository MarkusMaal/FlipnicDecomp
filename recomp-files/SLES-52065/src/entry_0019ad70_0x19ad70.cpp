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

// Function: entry_0019ad70
// Address: 0x19ad70 - 0x19ad90
void entry_0019ad70_0x19ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad70_0x19ad70");
#endif

    ctx->pc = 0x19ad70u;

    // 0x19ad70: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x19ad74: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19ad74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ad78: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AD78u;
    {
        const bool branch_taken_0x19ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD78u;
        // 0x19ad7c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad78) {
            ctx->pc = 0x19AD64u;
            return;
        }
    }
    ctx->pc = 0x19AD80u;
    // 0x19ad80: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x19ad84: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
    // 0x19ad88: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x19ad8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19ad90u;
}
