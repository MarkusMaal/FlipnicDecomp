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

// Function: entry_00107d90
// Address: 0x107d90 - 0x107da4
void entry_00107d90_0x107d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d90_0x107d90");
#endif

    switch (ctx->pc) {
        case 0x107da0u: goto label_107da0;
        default: break;
    }

    ctx->pc = 0x107d90u;

    // 0x107d90: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x107d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x107d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d98: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x107D98u;
    SET_GPR_U32(ctx, 31, 0x107DA0u);
    ctx->pc = 0x107D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D98u;
    // 0x107d9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x107D98u, 0x107DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DA0u;
label_107da0:
    // 0x107da0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x107da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x107da4u;
}
