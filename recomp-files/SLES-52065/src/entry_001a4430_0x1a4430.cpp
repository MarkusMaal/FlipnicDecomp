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

// Function: entry_001a4430
// Address: 0x1a4430 - 0x1a4474
void entry_001a4430_0x1a4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4430_0x1a4430");
#endif

    switch (ctx->pc) {
        case 0x1a4464u: goto label_1a4464;
        case 0x1a446cu: goto label_1a446c;
        default: break;
    }

    ctx->pc = 0x1a4430u;

    // 0x1a4430: 0x1260010e  beqz        $s3, . + 4 + (0x10E << 2)
    ctx->pc = 0x1A4430u;
    {
        const bool branch_taken_0x1a4430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4430) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A4438u;
    // 0x1a4438: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x1a4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1a443c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A443Cu;
    {
        const bool branch_taken_0x1a443c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a443c) {
            ctx->pc = 0x1A4474u;
            return;
        }
    }
    ctx->pc = 0x1A4444u;
    // 0x1a4444: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a4448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a444c: 0xae230674  sw          $v1, 0x674($s1)
    ctx->pc = 0x1a444cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 3));
    // 0x1a4450: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a4450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x1a4454: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a4458: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a4458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a445c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A445Cu;
    SET_GPR_U32(ctx, 31, 0x1A4464u);
    ctx->pc = 0x1A4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A445Cu;
    // 0x1a4460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A445Cu, 0x1A4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4464u;
label_1a4464:
    // 0x1a4464: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A4464u;
    SET_GPR_U32(ctx, 31, 0x1A446Cu);
    ctx->pc = 0x1A4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4464u;
    // 0x1a4468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4464u, 0x1A446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A446Cu;
label_1a446c:
    // 0x1a446c: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1A446Cu;
    {
        const bool branch_taken_0x1a446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a446c) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A4474u;
}
