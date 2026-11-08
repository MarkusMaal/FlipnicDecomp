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

// Function: entry_001a9c6c
// Address: 0x1a9c6c - 0x1a9cac
void entry_001a9c6c_0x1a9c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9c6c_0x1a9c6c");
#endif

    switch (ctx->pc) {
        case 0x1a9c78u: goto label_1a9c78;
        case 0x1a9ca4u: goto label_1a9ca4;
        default: break;
    }

    ctx->pc = 0x1a9c6cu;

    // 0x1a9c6c: 0x0  nop
    ctx->pc = 0x1a9c6cu;
    // NOP
    // 0x1a9c70: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1A9C70u;
    SET_GPR_U32(ctx, 31, 0x1A9C78u);
    ctx->pc = 0x1A9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C70u;
    // 0x1a9c74: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A9C70u, 0x1A9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C78u;
label_1a9c78:
    // 0x1a9c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9c7c: 0x1444011b  bne         $v0, $a0, . + 4 + (0x11B << 2)
    ctx->pc = 0x1A9C7Cu;
    {
        const bool branch_taken_0x1a9c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a9c7c) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9C84u;
    // 0x1a9c84: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a9c88: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
    // 0x1a9c8c: 0x10600117  beqz        $v1, . + 4 + (0x117 << 2)
    ctx->pc = 0x1A9C8Cu;
    {
        const bool branch_taken_0x1a9c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c8c) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9C94u;
    // 0x1a9c94: 0xaea406c4  sw          $a0, 0x6C4($s5)
    ctx->pc = 0x1a9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 4));
    // 0x1a9c98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9c9c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9CA4u);
    ctx->pc = 0x1A9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9C9Cu;
    // 0x1a9ca0: 0xaea006c8  sw          $zero, 0x6C8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9C9Cu, 0x1A9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9CA4u;
label_1a9ca4:
    // 0x1a9ca4: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1A9CA4u;
    {
        const bool branch_taken_0x1a9ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CA4u;
        // 0x1a9ca8: 0x92a306cc  lbu         $v1, 0x6CC($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ca4) {
            ctx->pc = 0x1AA0F0u;
            return;
        }
    }
    ctx->pc = 0x1A9CACu;
}
