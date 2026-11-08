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

// Function: entry_001319c0
// Address: 0x1319c0 - 0x1319d0
void entry_001319c0_0x1319c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001319c0_0x1319c0");
#endif

    ctx->pc = 0x1319c0u;

    // 0x1319c0: 0x807d3ac  j           func_1F4EB0
    ctx->pc = 0x1319C0u;
    ctx->pc = 0x1319C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319C0u;
    // 0x1319c4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    FUN_001f4eb0_0x1f4eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1319C8u;
    // 0x1319c8: 0x0  nop
    ctx->pc = 0x1319c8u;
    // NOP
    // 0x1319cc: 0x0  nop
    ctx->pc = 0x1319ccu;
    // NOP
    ctx->pc = 0x1319d0u;
}
