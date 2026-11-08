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

// Function: entry_0019f610
// Address: 0x19f610 - 0x19f650
void entry_0019f610_0x19f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f610_0x19f610");
#endif

    switch (ctx->pc) {
        case 0x19f63cu: goto label_19f63c;
        case 0x19f648u: goto label_19f648;
        default: break;
    }

    ctx->pc = 0x19f610u;

    // 0x19f610: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x19F610u;
    {
        const bool branch_taken_0x19f610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f610) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F618u;
    // 0x19f618: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f62c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19f62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f630: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x19f630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x19f634: 0xc064f00  jal         func_193C00
    ctx->pc = 0x19F634u;
    SET_GPR_U32(ctx, 31, 0x19F63Cu);
    ctx->pc = 0x19F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F634u;
    // 0x19f638: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x19F634u, 0x19F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F63Cu;
label_19f63c:
    // 0x19f63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f640: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F640u;
    SET_GPR_U32(ctx, 31, 0x19F648u);
    ctx->pc = 0x19F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F640u;
    // 0x19f644: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F640u, 0x19F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F648u;
label_19f648:
    // 0x19f648: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x19F648u;
    {
        const bool branch_taken_0x19f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f648) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F650u;
}
