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

// Function: entry_0016a20c
// Address: 0x16a20c - 0x16a228
void entry_0016a20c_0x16a20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a20c_0x16a20c");
#endif

    switch (ctx->pc) {
        case 0x16a224u: goto label_16a224;
        default: break;
    }

    ctx->pc = 0x16a20cu;

    // 0x16a20c: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x16a20cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16a210: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A210u;
    {
        const bool branch_taken_0x16a210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A210u;
        // 0x16a214: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a210) {
            ctx->pc = 0x16A228u;
            return;
        }
    }
    ctx->pc = 0x16A218u;
    // 0x16a218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a21c: 0xc042118  jal         func_108460
    ctx->pc = 0x16A21Cu;
    SET_GPR_U32(ctx, 31, 0x16A224u);
    ctx->pc = 0x16A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A21Cu;
    // 0x16a220: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16A21Cu, 0x16A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A224u;
label_16a224:
    // 0x16a224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16a228u;
}
