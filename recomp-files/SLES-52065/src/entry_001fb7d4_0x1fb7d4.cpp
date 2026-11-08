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

// Function: entry_001fb7d4
// Address: 0x1fb7d4 - 0x1fb7e4
void entry_001fb7d4_0x1fb7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7d4_0x1fb7d4");
#endif

    switch (ctx->pc) {
        case 0x1fb7dcu: goto label_1fb7dc;
        default: break;
    }

    ctx->pc = 0x1fb7d4u;

    // 0x1fb7d4: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FB7D4u;
    SET_GPR_U32(ctx, 31, 0x1FB7DCu);
    ctx->pc = 0x1FB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7D4u;
    // 0x1fb7d8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FB7D4u, 0x1FB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7DCu;
label_1fb7dc:
    // 0x1fb7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB7DCu;
    {
        const bool branch_taken_0x1fb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7DCu;
        // 0x1fb7e0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7dc) {
            ctx->pc = 0x1FB7ECu;
            return;
        }
    }
    ctx->pc = 0x1FB7E4u;
}
