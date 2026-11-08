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

// Function: entry_001eaaf8
// Address: 0x1eaaf8 - 0x1eab14
void entry_001eaaf8_0x1eaaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaaf8_0x1eaaf8");
#endif

    switch (ctx->pc) {
        case 0x1eab04u: goto label_1eab04;
        default: break;
    }

    ctx->pc = 0x1eaaf8u;

    // 0x1eaaf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eaafc: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAAFCu;
    SET_GPR_U32(ctx, 31, 0x1EAB04u);
    ctx->pc = 0x1EAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAFCu;
    // 0x1eab00: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAAFCu, 0x1EAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB04u;
label_1eab04:
    // 0x1eab04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1eab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eab08: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1eab0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eab10: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1eab10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1eab14u;
}
