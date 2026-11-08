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

// Function: entry_00205c74
// Address: 0x205c74 - 0x205ca0
void entry_00205c74_0x205c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205c74_0x205c74");
#endif

    switch (ctx->pc) {
        case 0x205c98u: goto label_205c98;
        default: break;
    }

    ctx->pc = 0x205c74u;

    // 0x205c74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x205c78: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x205c7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205c80: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205C80u;
    {
        const bool branch_taken_0x205c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c80) {
            ctx->pc = 0x205CA0u;
            return;
        }
    }
    ctx->pc = 0x205C88u;
    // 0x205c88: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205C88u;
    {
        const bool branch_taken_0x205c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C88u;
        // 0x205c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c88) {
            ctx->pc = 0x205CA0u;
            return;
        }
    }
    ctx->pc = 0x205C90u;
    // 0x205c90: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x205C90u;
    SET_GPR_U32(ctx, 31, 0x205C98u);
    ctx->pc = 0x205C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C90u;
    // 0x205c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205C90u, 0x205C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C98u;
label_205c98:
    // 0x205c98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x205c9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x205ca0u;
}
