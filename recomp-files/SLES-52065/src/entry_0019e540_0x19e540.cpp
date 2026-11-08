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

// Function: entry_0019e540
// Address: 0x19e540 - 0x19e564
void entry_0019e540_0x19e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e540_0x19e540");
#endif

    switch (ctx->pc) {
        case 0x19e550u: goto label_19e550;
        case 0x19e558u: goto label_19e558;
        default: break;
    }

    ctx->pc = 0x19e540u;

    // 0x19e540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19e544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e548: 0xc063e20  jal         func_18F880
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E548u;
    // 0x19e54c: 0x34450002  ori         $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F880u, 0x19E548u, 0x19E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19E550u;
    SET_GPR_U32(ctx, 31, 0x19E558u);
    ctx->pc = 0x19E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E550u;
    // 0x19e554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E550u, 0x19E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E558u;
label_19e558:
    // 0x19e558: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x19E558u;
    {
        const bool branch_taken_0x19e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e558) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E560u;
    // 0x19e560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19e564u;
}
