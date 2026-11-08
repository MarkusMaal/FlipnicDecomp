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

// Function: entry_001fb7ac
// Address: 0x1fb7ac - 0x1fb7bc
void entry_001fb7ac_0x1fb7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7ac_0x1fb7ac");
#endif

    switch (ctx->pc) {
        case 0x1fb7b4u: goto label_1fb7b4;
        default: break;
    }

    ctx->pc = 0x1fb7acu;

    // 0x1fb7ac: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FB7ACu;
    SET_GPR_U32(ctx, 31, 0x1FB7B4u);
    ctx->pc = 0x1FB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7ACu;
    // 0x1fb7b0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FB7ACu, 0x1FB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7B4u;
label_1fb7b4:
    // 0x1fb7b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FB7B4u;
    {
        const bool branch_taken_0x1fb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B4u;
        // 0x1fb7b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b4) {
            ctx->pc = 0x1FB7F0u;
            return;
        }
    }
    ctx->pc = 0x1FB7BCu;
}
