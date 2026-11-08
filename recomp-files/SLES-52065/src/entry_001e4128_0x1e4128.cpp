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

// Function: entry_001e4128
// Address: 0x1e4128 - 0x1e4150
void entry_001e4128_0x1e4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4128_0x1e4128");
#endif

    switch (ctx->pc) {
        case 0x1e4148u: goto label_1e4148;
        default: break;
    }

    ctx->pc = 0x1e4128u;

    // 0x1e4128: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4128u;
    {
        const bool branch_taken_0x1e4128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e4128) {
            ctx->pc = 0x1E4150u;
            return;
        }
    }
    ctx->pc = 0x1E4130u;
    // 0x1e4130: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e4134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e413c: 0x603026  xor         $a2, $v1, $zero
    ctx->pc = 0x1e413cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1e4140: 0xc07960c  jal         func_1E5830
    ctx->pc = 0x1E4140u;
    SET_GPR_U32(ctx, 31, 0x1E4148u);
    ctx->pc = 0x1E4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4140u;
    // 0x1e4144: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5830u, 0x1E4140u, 0x1E4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4148u;
label_1e4148:
    // 0x1e4148: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4148u;
    {
        const bool branch_taken_0x1e4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4148) {
            ctx->pc = 0x1E4164u;
            return;
        }
    }
    ctx->pc = 0x1E4150u;
}
