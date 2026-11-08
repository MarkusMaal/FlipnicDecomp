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

// Function: entry_001186ec
// Address: 0x1186ec - 0x118704
void entry_001186ec_0x1186ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186ec_0x1186ec");
#endif

    ctx->pc = 0x1186ecu;

    // 0x1186ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1186f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1186f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1186f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1186F4u;
    {
        const bool branch_taken_0x1186f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1186F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186F4u;
        // 0x1186f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186f4) {
            ctx->pc = 0x118708u;
            return;
        }
    }
    ctx->pc = 0x1186FCu;
    // 0x1186fc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186FCu;
    SET_GPR_U32(ctx, 31, 0x118704u);
    ctx->pc = 0x118700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186FCu;
    // 0x118700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186FCu, 0x118704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118704u;
}
