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

// Function: entry_00112dd8
// Address: 0x112dd8 - 0x112de8
void entry_00112dd8_0x112dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112dd8_0x112dd8");
#endif

    switch (ctx->pc) {
        case 0x112de0u: goto label_112de0;
        default: break;
    }

    ctx->pc = 0x112dd8u;

    // 0x112dd8: 0xc042570  jal         func_1095C0
    ctx->pc = 0x112DD8u;
    SET_GPR_U32(ctx, 31, 0x112DE0u);
    ctx->pc = 0x112DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DD8u;
    // 0x112ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112DD8u, 0x112DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DE0u;
label_112de0:
    // 0x112de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112de4: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x112de4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x112de8u;
}
