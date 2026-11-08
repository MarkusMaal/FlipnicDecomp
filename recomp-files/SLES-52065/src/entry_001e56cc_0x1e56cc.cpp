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

// Function: entry_001e56cc
// Address: 0x1e56cc - 0x1e56dc
void entry_001e56cc_0x1e56cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56cc_0x1e56cc");
#endif

    ctx->pc = 0x1e56ccu;

    // 0x1e56cc: 0x0  nop
    ctx->pc = 0x1e56ccu;
    // NOP
    // 0x1e56d0: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1e56d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e56d4: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E56D4u;
    SET_GPR_U32(ctx, 31, 0x1E56DCu);
    ctx->pc = 0x1E56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E56D4u;
    // 0x1e56d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E56D4u, 0x1E56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E56DCu;
}
