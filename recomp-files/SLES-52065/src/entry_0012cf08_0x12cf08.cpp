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

// Function: entry_0012cf08
// Address: 0x12cf08 - 0x12cf58
void entry_0012cf08_0x12cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf08_0x12cf08");
#endif

    switch (ctx->pc) {
        case 0x12cf20u: goto label_12cf20;
        case 0x12cf2cu: goto label_12cf2c;
        default: break;
    }

    ctx->pc = 0x12cf08u;

    // 0x12cf08: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cf0c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12cf10: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12cf14: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cf18: 0xc081798  jal         func_205E60
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF18u;
    // 0x12cf1c: 0x24842f60  addiu       $a0, $a0, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x12CF18u, 0x12CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12cf24: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12CF24u;
    SET_GPR_U32(ctx, 31, 0x12CF2Cu);
    ctx->pc = 0x12CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF24u;
    // 0x12cf28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12CF24u, 0x12CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF2Cu;
label_12cf2c:
    // 0x12cf2c: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x12cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x12cf30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cf34: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12CF34u;
    {
        const bool branch_taken_0x12cf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF34u;
        // 0x12cf38: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf34) {
            ctx->pc = 0x12CF8Cu;
            return;
        }
    }
    ctx->pc = 0x12CF3Cu;
    // 0x12cf3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cf40: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CF40u;
    {
        const bool branch_taken_0x12cf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF40u;
        // 0x12cf44: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf40) {
            ctx->pc = 0x12CF60u;
            return;
        }
    }
    ctx->pc = 0x12CF48u;
    // 0x12cf48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CF48u;
    {
        const bool branch_taken_0x12cf48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf48) {
            ctx->pc = 0x12CF58u;
            return;
        }
    }
    ctx->pc = 0x12CF50u;
    // 0x12cf50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12CF50u;
    {
        const bool branch_taken_0x12cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF50u;
        // 0x12cf54: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf50) {
            ctx->pc = 0x12CFA0u;
            return;
        }
    }
    ctx->pc = 0x12CF58u;
}
