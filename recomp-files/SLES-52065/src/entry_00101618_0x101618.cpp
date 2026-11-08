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

// Function: entry_00101618
// Address: 0x101618 - 0x10164c
void entry_00101618_0x101618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101618_0x101618");
#endif

    switch (ctx->pc) {
        case 0x10162cu: goto label_10162c;
        default: break;
    }

    ctx->pc = 0x101618u;

    // 0x101618: 0xaf828388  sw          $v0, -0x7C78($gp)
    ctx->pc = 0x101618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
    // 0x10161c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101620: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x101620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x101624: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x101624u;
    SET_GPR_U32(ctx, 31, 0x10162Cu);
    ctx->pc = 0x101628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101624u;
    // 0x101628: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x101624u, 0x10162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10162Cu;
label_10162c:
    // 0x10162c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10162Cu;
    {
        const bool branch_taken_0x10162c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10162Cu;
        // 0x101630: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10162c) {
            ctx->pc = 0x101650u;
            return;
        }
    }
    ctx->pc = 0x101634u;
    // 0x101634: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101634u;
    {
        const bool branch_taken_0x101634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101634) {
            ctx->pc = 0x10164Cu;
            return;
        }
    }
    ctx->pc = 0x10163Cu;
    // 0x10163c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x101640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101644: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x101644u;
    SET_GPR_U32(ctx, 31, 0x10164Cu);
    ctx->pc = 0x101648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101644u;
    // 0x101648: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x101644u, 0x10164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10164Cu;
}
