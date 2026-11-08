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

// Function: entry_0017aba8
// Address: 0x17aba8 - 0x17abbc
void entry_0017aba8_0x17aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aba8_0x17aba8");
#endif

    ctx->pc = 0x17aba8u;

    // 0x17aba8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17aba8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17abac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABACu;
    {
        const bool branch_taken_0x17abac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABACu;
        // 0x17abb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abac) {
            ctx->pc = 0x17ABC0u;
            return;
        }
    }
    ctx->pc = 0x17ABB4u;
    // 0x17abb4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17ABB4u;
    SET_GPR_U32(ctx, 31, 0x17ABBCu);
    ctx->pc = 0x17ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABB4u;
    // 0x17abb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17ABB4u, 0x17ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABBCu;
}
