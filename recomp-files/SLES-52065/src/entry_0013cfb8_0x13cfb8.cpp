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

// Function: entry_0013cfb8
// Address: 0x13cfb8 - 0x13cfc4
void entry_0013cfb8_0x13cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cfb8_0x13cfb8");
#endif

    switch (ctx->pc) {
        case 0x13cfc0u: goto label_13cfc0;
        default: break;
    }

    ctx->pc = 0x13cfb8u;

    // 0x13cfb8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x13CFB8u;
    SET_GPR_U32(ctx, 31, 0x13CFC0u);
    ctx->pc = 0x13CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFB8u;
    // 0x13cfbc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x13CFB8u, 0x13CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFC0u;
label_13cfc0:
    // 0x13cfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13cfc4u;
}
