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

// Function: entry_001e6144
// Address: 0x1e6144 - 0x1e6158
void entry_001e6144_0x1e6144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6144_0x1e6144");
#endif

    ctx->pc = 0x1e6144u;

    // 0x1e6144: 0x0  nop
    ctx->pc = 0x1e6144u;
    // NOP
    // 0x1e6148: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e614c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e6150: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E6150u;
    SET_GPR_U32(ctx, 31, 0x1E6158u);
    ctx->pc = 0x1E6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6150u;
    // 0x1e6154: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E6150u, 0x1E6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6158u;
}
