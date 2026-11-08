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

// Function: entry_00107e3c
// Address: 0x107e3c - 0x107e54
void entry_00107e3c_0x107e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e3c_0x107e3c");
#endif

    switch (ctx->pc) {
        case 0x107e4cu: goto label_107e4c;
        default: break;
    }

    ctx->pc = 0x107e3cu;

    // 0x107e3c: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x107e3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x107e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e44: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x107E44u;
    SET_GPR_U32(ctx, 31, 0x107E4Cu);
    ctx->pc = 0x107E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E44u;
    // 0x107e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x107E44u, 0x107E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E4Cu;
label_107e4c:
    // 0x107e4c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x107e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x107e50: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x107e54u;
}
