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

// Function: entry_0010eb48
// Address: 0x10eb48 - 0x10eb5c
void entry_0010eb48_0x10eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eb48_0x10eb48");
#endif

    ctx->pc = 0x10eb48u;

    // 0x10eb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10eb4c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB4Cu;
    {
        const bool branch_taken_0x10eb4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x10eb4c) {
            ctx->pc = 0x10EB5Cu;
            return;
        }
    }
    ctx->pc = 0x10EB54u;
    // 0x10eb54: 0xc043adc  jal         func_10EB70
    ctx->pc = 0x10EB54u;
    SET_GPR_U32(ctx, 31, 0x10EB5Cu);
    ctx->pc = 0x10EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB70u, 0x10EB54u, 0x10EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB5Cu;
}
