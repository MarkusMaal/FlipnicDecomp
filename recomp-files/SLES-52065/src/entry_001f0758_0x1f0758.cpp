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

// Function: entry_001f0758
// Address: 0x1f0758 - 0x1f0764
void entry_001f0758_0x1f0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0758_0x1f0758");
#endif

    ctx->pc = 0x1f0758u;

    // 0x1f0758: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f075c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F075Cu;
    SET_GPR_U32(ctx, 31, 0x1F0764u);
    ctx->pc = 0x1F0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F075Cu;
    // 0x1f0760: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F075Cu, 0x1F0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0764u;
}
