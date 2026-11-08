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

// Function: entry_001faa24
// Address: 0x1faa24 - 0x1faa48
void entry_001faa24_0x1faa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa24_0x1faa24");
#endif

    switch (ctx->pc) {
        case 0x1faa44u: goto label_1faa44;
        default: break;
    }

    ctx->pc = 0x1faa24u;

    // 0x1faa24: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAA24u;
    {
        const bool branch_taken_0x1faa24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1faa24) {
            ctx->pc = 0x1FAA48u;
            return;
        }
    }
    ctx->pc = 0x1FAA2Cu;
    // 0x1faa2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1faa30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1faa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faa34: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA34u;
    {
        const bool branch_taken_0x1faa34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA34u;
        // 0x1faa38: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa34) {
            ctx->pc = 0x1FAA48u;
            return;
        }
    }
    ctx->pc = 0x1FAA3Cu;
    // 0x1faa3c: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA44u);
    ctx->pc = 0x1FAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA3Cu;
    // 0x1faa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FAA3Cu, 0x1FAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA44u;
label_1faa44:
    // 0x1faa44: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1faa44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x1faa48u;
}
