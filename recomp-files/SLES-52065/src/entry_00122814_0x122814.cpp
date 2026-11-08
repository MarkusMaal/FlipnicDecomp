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

// Function: entry_00122814
// Address: 0x122814 - 0x122820
void entry_00122814_0x122814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122814_0x122814");
#endif

    switch (ctx->pc) {
        case 0x12281cu: goto label_12281c;
        default: break;
    }

    ctx->pc = 0x122814u;

    // 0x122814: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122814u;
    SET_GPR_U32(ctx, 31, 0x12281Cu);
    ctx->pc = 0x122818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122814u;
    // 0x122818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122814u, 0x12281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12281Cu;
label_12281c:
    // 0x12281c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x12281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x122820u;
}
