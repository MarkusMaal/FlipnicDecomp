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

// Function: entry_00120ae0
// Address: 0x120ae0 - 0x120af4
void entry_00120ae0_0x120ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ae0_0x120ae0");
#endif

    ctx->pc = 0x120ae0u;

    // 0x120ae0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x120ae4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120AE4u;
    {
        const bool branch_taken_0x120ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x120AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE4u;
        // 0x120ae8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae4) {
            ctx->pc = 0x120AF8u;
            return;
        }
    }
    ctx->pc = 0x120AECu;
    // 0x120aec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x120AECu;
    SET_GPR_U32(ctx, 31, 0x120AF4u);
    ctx->pc = 0x120AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AECu;
    // 0x120af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x120AECu, 0x120AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AF4u;
}
