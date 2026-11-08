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

// Function: entry_00118e44
// Address: 0x118e44 - 0x118e4c
void entry_00118e44_0x118e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e44_0x118e44");
#endif

    ctx->pc = 0x118e44u;

    // 0x118e44: 0xc0546a0  jal         func_151A80
    ctx->pc = 0x118E44u;
    SET_GPR_U32(ctx, 31, 0x118E4Cu);
    ctx->pc = 0x118E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E44u;
    // 0x118e48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A80u, 0x118E44u, 0x118E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E4Cu;
}
