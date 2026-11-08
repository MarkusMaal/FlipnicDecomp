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

// Function: entry_0019918c
// Address: 0x19918c - 0x1991a4
void entry_0019918c_0x19918c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019918c_0x19918c");
#endif

    switch (ctx->pc) {
        case 0x19919cu: goto label_19919c;
        default: break;
    }

    ctx->pc = 0x19918cu;

    // 0x19918c: 0x0  nop
    ctx->pc = 0x19918cu;
    // NOP
    // 0x199190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199194: 0xc063e08  jal         func_18F820
    ctx->pc = 0x199194u;
    SET_GPR_U32(ctx, 31, 0x19919Cu);
    ctx->pc = 0x199198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199194u;
    // 0x199198: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199194u, 0x19919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19919Cu;
label_19919c:
    // 0x19919c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x19919Cu;
    {
        const bool branch_taken_0x19919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19919c) {
            ctx->pc = 0x199350u;
            return;
        }
    }
    ctx->pc = 0x1991A4u;
}
