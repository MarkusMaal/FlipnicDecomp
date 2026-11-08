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

// Function: entry_0013c548
// Address: 0x13c548 - 0x13c568
void entry_0013c548_0x13c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c548_0x13c548");
#endif

    switch (ctx->pc) {
        case 0x13c554u: goto label_13c554;
        default: break;
    }

    ctx->pc = 0x13c548u;

    // 0x13c548: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c54c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13C54Cu;
    SET_GPR_U32(ctx, 31, 0x13C554u);
    ctx->pc = 0x13C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C54Cu;
    // 0x13c550: 0x24a5eff8  addiu       $a1, $a1, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13C54Cu, 0x13C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C554u;
label_13c554:
    // 0x13c554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C554u;
    {
        const bool branch_taken_0x13c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c554) {
            ctx->pc = 0x13C568u;
            return;
        }
    }
    ctx->pc = 0x13C55Cu;
    // 0x13c55c: 0x82630189  lb          $v1, 0x189($s3)
    ctx->pc = 0x13c55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 393)));
    // 0x13c560: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13c564: 0xa2630189  sb          $v1, 0x189($s3)
    ctx->pc = 0x13c564u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13c568u;
}
