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

// Function: entry_001a11d4
// Address: 0x1a11d4 - 0x1a1214
void entry_001a11d4_0x1a11d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a11d4_0x1a11d4");
#endif

    switch (ctx->pc) {
        case 0x1a11e8u: goto label_1a11e8;
        default: break;
    }

    ctx->pc = 0x1a11d4u;

    // 0x1a11d4: 0x0  nop
    ctx->pc = 0x1a11d4u;
    // NOP
    // 0x1a11d8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a11dc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a11e0: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11E0u;
    // 0x1a11e4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A11E0u, 0x1A11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1a11ec: 0xac8209dc  sw          $v0, 0x9DC($a0)
    ctx->pc = 0x1a11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2524), GPR_U32(ctx, 2));
    // 0x1a11f0: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a11f4: 0x8c8309dc  lw          $v1, 0x9DC($a0)
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2524)));
    // 0x1a11f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a11fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1204: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a1208: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a120c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A120Cu;
    {
        const bool branch_taken_0x1a120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A120Cu;
        // 0x1a1210: 0xac8209e0  sw          $v0, 0x9E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a120c) {
            ctx->pc = 0x1A1238u;
            return;
        }
    }
    ctx->pc = 0x1A1214u;
}
