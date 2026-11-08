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

// Function: entry_00160b28
// Address: 0x160b28 - 0x160b4c
void entry_00160b28_0x160b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b28_0x160b28");
#endif

    switch (ctx->pc) {
        case 0x160b30u: goto label_160b30;
        default: break;
    }

    ctx->pc = 0x160b28u;

    // 0x160b28: 0xc040168  jal         func_1005A0
    ctx->pc = 0x160B28u;
    SET_GPR_U32(ctx, 31, 0x160B30u);
    ctx->pc = 0x160B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B28u;
    // 0x160b2c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x160B28u, 0x160B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B30u;
label_160b30:
    // 0x160b30: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b34: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x160b34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x160b38: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x160B38u;
    {
        const bool branch_taken_0x160b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B38u;
        // 0x160b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b38) {
            ctx->pc = 0x160BA8u;
            return;
        }
    }
    ctx->pc = 0x160B40u;
    // 0x160b40: 0x2a810009  slti        $at, $s4, 0x9
    ctx->pc = 0x160b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x160b44: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x160B44u;
    {
        const bool branch_taken_0x160b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B44u;
        // 0x160b48: 0x2685fff8  addiu       $a1, $s4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b44) {
            ctx->pc = 0x160B7Cu;
            return;
        }
    }
    ctx->pc = 0x160B4Cu;
}
