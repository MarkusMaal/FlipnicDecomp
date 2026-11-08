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

// Function: entry_001c662c
// Address: 0x1c662c - 0x1c6648
void entry_001c662c_0x1c662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c662c_0x1c662c");
#endif

    switch (ctx->pc) {
        case 0x1c6634u: goto label_1c6634;
        default: break;
    }

    ctx->pc = 0x1c662cu;

    // 0x1c662c: 0xc060014  jal         func_180050
    ctx->pc = 0x1C662Cu;
    SET_GPR_U32(ctx, 31, 0x1C6634u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1C662Cu, 0x1C6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6634u;
label_1c6634:
    // 0x1c6634: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c6634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c6638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c663c: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x1c663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
    // 0x1c6640: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C6640u;
    SET_GPR_U32(ctx, 31, 0x1C6648u);
    ctx->pc = 0x1C6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6640u;
    // 0x1c6644: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C6640u, 0x1C6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6648u;
}
