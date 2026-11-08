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

// Function: entry_001d52b0
// Address: 0x1d52b0 - 0x1d52cc
void entry_001d52b0_0x1d52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d52b0_0x1d52b0");
#endif

    switch (ctx->pc) {
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52c8u: goto label_1d52c8;
        default: break;
    }

    ctx->pc = 0x1d52b0u;

    // 0x1d52b0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D52B0u;
    SET_GPR_U32(ctx, 31, 0x1D52B8u);
    ctx->pc = 0x1D52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B0u;
    // 0x1d52b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D52B0u, 0x1D52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52bc: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1d52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d52c0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D52C0u;
    SET_GPR_U32(ctx, 31, 0x1D52C8u);
    ctx->pc = 0x1D52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C0u;
    // 0x1d52c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D52C0u, 0x1D52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C8u;
label_1d52c8:
    // 0x1d52c8: 0xae140200  sw          $s4, 0x200($s0)
    ctx->pc = 0x1d52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 20));
    ctx->pc = 0x1d52ccu;
}
