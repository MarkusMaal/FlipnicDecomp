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

// Function: entry_001caf58
// Address: 0x1caf58 - 0x1caf80
void entry_001caf58_0x1caf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf58_0x1caf58");
#endif

    switch (ctx->pc) {
        case 0x1caf78u: goto label_1caf78;
        default: break;
    }

    ctx->pc = 0x1caf58u;

    // 0x1caf58: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1caf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf64: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caf6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf70: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF70u;
    SET_GPR_U32(ctx, 31, 0x1CAF78u);
    ctx->pc = 0x1CAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF70u;
    // 0x1caf74: 0x260a006c  addiu       $t2, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF70u, 0x1CAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF78u;
label_1caf78:
    // 0x1caf78: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CAF78u;
    {
        const bool branch_taken_0x1caf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf78) {
            ctx->pc = 0x1CAFECu;
            return;
        }
    }
    ctx->pc = 0x1CAF80u;
}
