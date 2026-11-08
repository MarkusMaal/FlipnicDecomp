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

// Function: entry_0018d20c
// Address: 0x18d20c - 0x18d220
void entry_0018d20c_0x18d20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d20c_0x18d20c");
#endif

    switch (ctx->pc) {
        case 0x18d218u: goto label_18d218;
        default: break;
    }

    ctx->pc = 0x18d20cu;

    // 0x18d20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d210: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D210u;
    SET_GPR_U32(ctx, 31, 0x18D218u);
    ctx->pc = 0x18D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D210u;
    // 0x18d214: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D210u, 0x18D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D218u;
label_18d218:
    // 0x18d218: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18D218u;
    {
        const bool branch_taken_0x18d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d218) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D220u;
}
