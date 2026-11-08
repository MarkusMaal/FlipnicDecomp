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

// Function: entry_00195580
// Address: 0x195580 - 0x1955b0
void entry_00195580_0x195580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195580_0x195580");
#endif

    switch (ctx->pc) {
        case 0x195588u: goto label_195588;
        case 0x195594u: goto label_195594;
        case 0x19559cu: goto label_19559c;
        case 0x1955a8u: goto label_1955a8;
        default: break;
    }

    ctx->pc = 0x195580u;

    // 0x195580: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195580u;
    SET_GPR_U32(ctx, 31, 0x195588u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195580u, 0x195588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195588u;
label_195588:
    // 0x195588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19558c: 0xc049f70  jal         func_127DC0
    ctx->pc = 0x19558Cu;
    SET_GPR_U32(ctx, 31, 0x195594u);
    ctx->pc = 0x195590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19558Cu;
    // 0x195590: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DC0u, 0x19558Cu, 0x195594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195594u;
label_195594:
    // 0x195594: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195594u;
    SET_GPR_U32(ctx, 31, 0x19559Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195594u, 0x19559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19559Cu;
label_19559c:
    // 0x19559c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955a0: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x1955A0u;
    SET_GPR_U32(ctx, 31, 0x1955A8u);
    ctx->pc = 0x1955A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955A0u;
    // 0x1955a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x1955A0u, 0x1955A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955A8u;
label_1955a8:
    // 0x1955a8: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x1955A8u;
    {
        const bool branch_taken_0x1955a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955a8) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1955B0u;
}
