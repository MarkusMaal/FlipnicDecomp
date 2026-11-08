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

// Function: entry_00134aac
// Address: 0x134aac - 0x134ab8
void entry_00134aac_0x134aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134aac_0x134aac");
#endif

    switch (ctx->pc) {
        case 0x134ab4u: goto label_134ab4;
        default: break;
    }

    ctx->pc = 0x134aacu;

    // 0x134aac: 0xc080702  jal         func_201C08
    ctx->pc = 0x134AACu;
    SET_GPR_U32(ctx, 31, 0x134AB4u);
    ctx->pc = 0x134AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AACu;
    // 0x134ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134AACu, 0x134AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AB4u;
label_134ab4:
    // 0x134ab4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->pc = 0x134ab8u;
}
