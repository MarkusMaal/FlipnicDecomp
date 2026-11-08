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

// Function: entry_001b8ae4
// Address: 0x1b8ae4 - 0x1b8af8
void entry_001b8ae4_0x1b8ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8ae4_0x1b8ae4");
#endif

    ctx->pc = 0x1b8ae4u;

    // 0x1b8ae4: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x1b8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1b8ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8AE8u;
    {
        const bool branch_taken_0x1b8ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ae8) {
            ctx->pc = 0x1B8AF8u;
            return;
        }
    }
    ctx->pc = 0x1B8AF0u;
    // 0x1b8af0: 0xc06eb10  jal         func_1BAC40
    ctx->pc = 0x1B8AF0u;
    SET_GPR_U32(ctx, 31, 0x1B8AF8u);
    ctx->pc = 0x1B8AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AF0u;
    // 0x1b8af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC40u, 0x1B8AF0u, 0x1B8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AF8u;
}
