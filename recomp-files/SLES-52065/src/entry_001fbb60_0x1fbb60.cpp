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

// Function: entry_001fbb60
// Address: 0x1fbb60 - 0x1fbb6c
void entry_001fbb60_0x1fbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb60_0x1fbb60");
#endif

    switch (ctx->pc) {
        case 0x1fbb68u: goto label_1fbb68;
        default: break;
    }

    ctx->pc = 0x1fbb60u;

    // 0x1fbb60: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FBB60u;
    SET_GPR_U32(ctx, 31, 0x1FBB68u);
    ctx->pc = 0x1FBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB60u;
    // 0x1fbb64: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FBB60u, 0x1FBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB68u;
label_1fbb68:
    // 0x1fbb68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1fbb6cu;
}
