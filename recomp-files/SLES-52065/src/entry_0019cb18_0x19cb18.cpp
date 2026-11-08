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

// Function: entry_0019cb18
// Address: 0x19cb18 - 0x19cb40
void entry_0019cb18_0x19cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb18_0x19cb18");
#endif

    switch (ctx->pc) {
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb34u: goto label_19cb34;
        default: break;
    }

    ctx->pc = 0x19cb18u;

    // 0x19cb18: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cb1c: 0xc064c20  jal         func_193080
    ctx->pc = 0x19CB1Cu;
    SET_GPR_U32(ctx, 31, 0x19CB24u);
    ctx->pc = 0x19CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB1Cu;
    // 0x19cb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19CB1Cu, 0x19CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB24u;
label_19cb24:
    // 0x19cb24: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb2c: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19CB2Cu;
    SET_GPR_U32(ctx, 31, 0x19CB34u);
    ctx->pc = 0x19CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB2Cu;
    // 0x19cb30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CB2Cu, 0x19CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CB34u;
label_19cb34:
    // 0x19cb34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cb38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19CB38u;
    {
        const bool branch_taken_0x19cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB38u;
        // 0x19cb3c: 0xae430674  sw          $v1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb38) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CB40u;
}
