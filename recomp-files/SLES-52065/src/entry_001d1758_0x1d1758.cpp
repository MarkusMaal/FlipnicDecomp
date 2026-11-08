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

// Function: entry_001d1758
// Address: 0x1d1758 - 0x1d1774
void entry_001d1758_0x1d1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1758_0x1d1758");
#endif

    switch (ctx->pc) {
        case 0x1d1760u: goto label_1d1760;
        default: break;
    }

    ctx->pc = 0x1d1758u;

    // 0x1d1758: 0xc060014  jal         func_180050
    ctx->pc = 0x1D1758u;
    SET_GPR_U32(ctx, 31, 0x1D1760u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1D1758u, 0x1D1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1760u;
label_1d1760:
    // 0x1d1760: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1768: 0x24a59a60  addiu       $a1, $a1, -0x65A0
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941280));
    // 0x1d176c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D176Cu;
    SET_GPR_U32(ctx, 31, 0x1D1774u);
    ctx->pc = 0x1D1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D176Cu;
    // 0x1d1770: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D176Cu, 0x1D1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1774u;
}
