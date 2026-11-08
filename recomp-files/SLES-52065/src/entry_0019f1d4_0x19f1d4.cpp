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

// Function: entry_0019f1d4
// Address: 0x19f1d4 - 0x19f1f4
void entry_0019f1d4_0x19f1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1d4_0x19f1d4");
#endif

    switch (ctx->pc) {
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1ecu: goto label_19f1ec;
        default: break;
    }

    ctx->pc = 0x19f1d4u;

    // 0x19f1d4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F1D4u;
    SET_GPR_U32(ctx, 31, 0x19F1DCu);
    ctx->pc = 0x19F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1D4u;
    // 0x19f1d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1D4u, 0x19F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1DCu;
label_19f1dc:
    // 0x19f1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f1e4: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19F1E4u;
    SET_GPR_U32(ctx, 31, 0x19F1ECu);
    ctx->pc = 0x19F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1E4u;
    // 0x19f1e8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19F1E4u, 0x19F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1ECu;
label_19f1ec:
    // 0x19f1ec: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x19F1ECu;
    {
        const bool branch_taken_0x19f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1ec) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F1F4u;
}
