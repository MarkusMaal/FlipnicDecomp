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

// Function: entry_001ecfd4
// Address: 0x1ecfd4 - 0x1ecff8
void entry_001ecfd4_0x1ecfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecfd4_0x1ecfd4");
#endif

    switch (ctx->pc) {
        case 0x1ecfe4u: goto label_1ecfe4;
        default: break;
    }

    ctx->pc = 0x1ecfd4u;

    // 0x1ecfd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1ecfd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1ecfd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1ecfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1ecfdc: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1ECFDCu;
    SET_GPR_U32(ctx, 31, 0x1ECFE4u);
    ctx->pc = 0x1ECFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFDCu;
    // 0x1ecfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECFDCu, 0x1ECFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFE4u;
label_1ecfe4:
    // 0x1ecfe4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ECFE4u;
    {
        const bool branch_taken_0x1ecfe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFE4u;
        // 0x1ecfe8: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfe4) {
            ctx->pc = 0x1ED024u;
            return;
        }
    }
    ctx->pc = 0x1ECFECu;
    // 0x1ecfec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECFECu;
    {
        const bool branch_taken_0x1ecfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecfec) {
            ctx->pc = 0x1ED00Cu;
            return;
        }
    }
    ctx->pc = 0x1ECFF4u;
    // 0x1ecff4: 0x0  nop
    ctx->pc = 0x1ecff4u;
    // NOP
    ctx->pc = 0x1ecff8u;
}
