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

// Function: entry_001fb7e4
// Address: 0x1fb7e4 - 0x1fb7ec
void entry_001fb7e4_0x1fb7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7e4_0x1fb7e4");
#endif

    ctx->pc = 0x1fb7e4u;

    // 0x1fb7e4: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FB7E4u;
    SET_GPR_U32(ctx, 31, 0x1FB7ECu);
    ctx->pc = 0x1FB7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7E4u;
    // 0x1fb7e8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FB7E4u, 0x1FB7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7ECu;
}
