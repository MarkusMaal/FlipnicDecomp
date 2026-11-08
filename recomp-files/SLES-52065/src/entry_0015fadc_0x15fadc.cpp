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

// Function: entry_0015fadc
// Address: 0x15fadc - 0x15faec
void entry_0015fadc_0x15fadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fadc_0x15fadc");
#endif

    ctx->pc = 0x15fadcu;

    // 0x15fadc: 0x0  nop
    ctx->pc = 0x15fadcu;
    // NOP
    // 0x15fae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae4: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x15FAE4u;
    SET_GPR_U32(ctx, 31, 0x15FAECu);
    ctx->pc = 0x15FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAE4u;
    // 0x15fae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E9A0u, 0x15FAE4u, 0x15FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAECu;
}
