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

// Function: entry_0015fb5c
// Address: 0x15fb5c - 0x15fb90
void entry_0015fb5c_0x15fb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb5c_0x15fb5c");
#endif

    ctx->pc = 0x15fb5cu;

    // 0x15fb5c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x15fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x15fb60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fb64: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x15fb68: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15FB68u;
    {
        const bool branch_taken_0x15fb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB68u;
        // 0x15fb6c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb68) {
            ctx->pc = 0x15FB90u;
            return;
        }
    }
    ctx->pc = 0x15FB70u;
    // 0x15fb70: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FB70u;
    {
        const bool branch_taken_0x15fb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fb70) {
            ctx->pc = 0x15FB90u;
            return;
        }
    }
    ctx->pc = 0x15FB78u;
    // 0x15fb78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fb7c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FB7Cu;
    {
        const bool branch_taken_0x15fb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fb7c) {
            ctx->pc = 0x15FB90u;
            return;
        }
    }
    ctx->pc = 0x15FB84u;
    // 0x15fb84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb88: 0xc05c01c  jal         func_170070
    ctx->pc = 0x15FB88u;
    SET_GPR_U32(ctx, 31, 0x15FB90u);
    ctx->pc = 0x15FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB88u;
    // 0x15fb8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170070u, 0x15FB88u, 0x15FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB90u;
}
