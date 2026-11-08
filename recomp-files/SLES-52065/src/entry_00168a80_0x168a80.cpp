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

// Function: entry_00168a80
// Address: 0x168a80 - 0x168aac
void entry_00168a80_0x168a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168a80_0x168a80");
#endif

    switch (ctx->pc) {
        case 0x168aa4u: goto label_168aa4;
        default: break;
    }

    ctx->pc = 0x168a80u;

    // 0x168a80: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x168a84: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168A84u;
    {
        const bool branch_taken_0x168a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x168A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A84u;
        // 0x168a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a84) {
            ctx->pc = 0x168AACu;
            return;
        }
    }
    ctx->pc = 0x168A8Cu;
    // 0x168a8c: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x168a8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x168a90: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x168a90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x168a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168a98: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x168a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x168a9c: 0xc055c40  jal         func_157100
    ctx->pc = 0x168A9Cu;
    SET_GPR_U32(ctx, 31, 0x168AA4u);
    ctx->pc = 0x168AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A9Cu;
    // 0x168aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x168A9Cu, 0x168AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AA4u;
label_168aa4:
    // 0x168aa4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x168AA4u;
    {
        const bool branch_taken_0x168aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AA4u;
        // 0x168aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168aa4) {
            ctx->pc = 0x168AACu;
            return;
        }
    }
    ctx->pc = 0x168AACu;
}
