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

// Function: entry_001a88f4
// Address: 0x1a88f4 - 0x1a8914
void entry_001a88f4_0x1a88f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88f4_0x1a88f4");
#endif

    switch (ctx->pc) {
        case 0x1a88fcu: goto label_1a88fc;
        case 0x1a890cu: goto label_1a890c;
        default: break;
    }

    ctx->pc = 0x1a88f4u;

    // 0x1a88f4: 0xc05ee1c  jal         func_17B870
    ctx->pc = 0x1A88F4u;
    SET_GPR_U32(ctx, 31, 0x1A88FCu);
    ctx->pc = 0x1A88F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88F4u;
    // 0x1a88f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1A88F4u, 0x1A88FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88FCu;
label_1a88fc:
    // 0x1a88fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8904: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1A8904u;
    SET_GPR_U32(ctx, 31, 0x1A890Cu);
    ctx->pc = 0x1A8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8904u;
    // 0x1a8908: 0x12280a  movz        $a1, $zero, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1A8904u, 0x1A890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A890Cu;
label_1a890c:
    // 0x1a890c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1A890Cu;
    {
        const bool branch_taken_0x1a890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a890c) {
            ctx->pc = 0x1A8AACu;
            return;
        }
    }
    ctx->pc = 0x1A8914u;
}
