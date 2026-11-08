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

// Function: entry_0019f24c
// Address: 0x19f24c - 0x19f26c
void entry_0019f24c_0x19f24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f24c_0x19f24c");
#endif

    switch (ctx->pc) {
        case 0x19f260u: goto label_19f260;
        default: break;
    }

    ctx->pc = 0x19f24cu;

    // 0x19f24c: 0x146201dd  bne         $v1, $v0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x19F24Cu;
    {
        const bool branch_taken_0x19f24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f24c) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F254u;
    // 0x19f254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f258: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F258u;
    SET_GPR_U32(ctx, 31, 0x19F260u);
    ctx->pc = 0x19F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F258u;
    // 0x19f25c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F258u, 0x19F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F260u;
label_19f260:
    // 0x19f260: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x19F260u;
    {
        const bool branch_taken_0x19f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f260) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F268u;
    // 0x19f268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f26cu;
}
