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

// Function: entry_0011aa90
// Address: 0x11aa90 - 0x11aab4
void entry_0011aa90_0x11aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa90_0x11aa90");
#endif

    switch (ctx->pc) {
        case 0x11aaa0u: goto label_11aaa0;
        case 0x11aab0u: goto label_11aab0;
        default: break;
    }

    ctx->pc = 0x11aa90u;

    // 0x11aa90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa98: 0xc080664  jal         func_201990
    ctx->pc = 0x11AA98u;
    SET_GPR_U32(ctx, 31, 0x11AAA0u);
    ctx->pc = 0x11AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA98u;
    // 0x11aa9c: 0x24a5e700  addiu       $a1, $a1, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AA98u, 0x11AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAA0u;
label_11aaa0:
    // 0x11aaa0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aaa4: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aaa8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AAA8u;
    SET_GPR_U32(ctx, 31, 0x11AAB0u);
    ctx->pc = 0x11AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAA8u;
    // 0x11aaac: 0x24a5e6f8  addiu       $a1, $a1, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AAA8u, 0x11AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAB0u;
label_11aab0:
    // 0x11aab0: 0x27908030  addiu       $s0, $gp, -0x7FD0
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934576));
    ctx->pc = 0x11aab4u;
}
