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

// Function: entry_001b43bc
// Address: 0x1b43bc - 0x1b43e0
void entry_001b43bc_0x1b43bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b43bc_0x1b43bc");
#endif

    ctx->pc = 0x1b43bcu;

    // 0x1b43bc: 0x0  nop
    ctx->pc = 0x1b43bcu;
    // NOP
    // 0x1b43c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b43c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b43c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b43c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b43cc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1b43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1b43d0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B43D0u;
    {
        const bool branch_taken_0x1b43d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D0u;
        // 0x1b43d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d0) {
            ctx->pc = 0x1B43E0u;
            return;
        }
    }
    ctx->pc = 0x1B43D8u;
    // 0x1b43d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B43D8u;
    SET_GPR_U32(ctx, 31, 0x1B43E0u);
    ctx->pc = 0x1B43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D8u;
    // 0x1b43dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B43D8u, 0x1B43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43E0u;
}
