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

// Function: entry_0019554c
// Address: 0x19554c - 0x195580
void entry_0019554c_0x19554c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019554c_0x19554c");
#endif

    switch (ctx->pc) {
        case 0x195558u: goto label_195558;
        case 0x195564u: goto label_195564;
        case 0x19556cu: goto label_19556c;
        case 0x195578u: goto label_195578;
        default: break;
    }

    ctx->pc = 0x19554cu;

    // 0x19554c: 0x0  nop
    ctx->pc = 0x19554cu;
    // NOP
    // 0x195550: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195550u;
    SET_GPR_U32(ctx, 31, 0x195558u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195550u, 0x195558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195558u;
label_195558:
    // 0x195558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19555c: 0xc049f70  jal         func_127DC0
    ctx->pc = 0x19555Cu;
    SET_GPR_U32(ctx, 31, 0x195564u);
    ctx->pc = 0x195560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19555Cu;
    // 0x195560: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DC0u, 0x19555Cu, 0x195564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195564u;
label_195564:
    // 0x195564: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x195564u;
    SET_GPR_U32(ctx, 31, 0x19556Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195564u, 0x19556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19556Cu;
label_19556c:
    // 0x19556c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195570: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x195570u;
    SET_GPR_U32(ctx, 31, 0x195578u);
    ctx->pc = 0x195574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195570u;
    // 0x195574: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x195570u, 0x195578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195578u;
label_195578:
    // 0x195578: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x195578u;
    {
        const bool branch_taken_0x195578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195578) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195580u;
}
