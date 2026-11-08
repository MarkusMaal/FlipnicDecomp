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

// Function: entry_001bd1d0
// Address: 0x1bd1d0 - 0x1bd1ec
void entry_001bd1d0_0x1bd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd1d0_0x1bd1d0");
#endif

    ctx->pc = 0x1bd1d0u;

    // 0x1bd1d0: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd1d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bd1d8: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x1bd1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1bd1dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD1DCu;
    {
        const bool branch_taken_0x1bd1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1dc) {
            ctx->pc = 0x1BD1ECu;
            return;
        }
    }
    ctx->pc = 0x1BD1E4u;
    // 0x1bd1e4: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1BD1E4u;
    SET_GPR_U32(ctx, 31, 0x1BD1ECu);
    ctx->pc = 0x1BD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1E4u;
    // 0x1bd1e8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1BD1E4u, 0x1BD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1ECu;
}
