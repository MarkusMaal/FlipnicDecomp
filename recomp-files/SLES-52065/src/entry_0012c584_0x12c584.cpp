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

// Function: entry_0012c584
// Address: 0x12c584 - 0x12c5cc
void entry_0012c584_0x12c584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c584_0x12c584");
#endif

    switch (ctx->pc) {
        case 0x12c5b4u: goto label_12c5b4;
        default: break;
    }

    ctx->pc = 0x12c584u;

    // 0x12c584: 0xa2400072  sb          $zero, 0x72($s2)
    ctx->pc = 0x12c584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c58c: 0xa2420073  sb          $v0, 0x73($s2)
    ctx->pc = 0x12c58cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c594: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12c598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c59c: 0xa2420074  sb          $v0, 0x74($s2)
    ctx->pc = 0x12c59cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5a0: 0x26460072  addiu       $a2, $s2, 0x72
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 114));
    // 0x12c5a4: 0xa2420075  sb          $v0, 0x75($s2)
    ctx->pc = 0x12c5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5a8: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x12c5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c5ac: 0xc07d9aa  jal         func_1F66A8
    ctx->pc = 0x12C5ACu;
    SET_GPR_U32(ctx, 31, 0x12C5B4u);
    ctx->pc = 0x12C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5ACu;
    // 0x12c5b0: 0xa2420077  sb          $v0, 0x77($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 119), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F66A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F66A8u, 0x12C5ACu, 0x12C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5B4u;
label_12c5b4:
    // 0x12c5b4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x12C5B4u;
    {
        const bool branch_taken_0x12c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c5b4) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C5BCu;
    // 0x12c5bc: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c5bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c5c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x12C5C4u;
    {
        const bool branch_taken_0x12c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C4u;
        // 0x12c5c8: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5c4) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C5CCu;
}
