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

// Function: entry_001025c4
// Address: 0x1025c4 - 0x1025f0
void entry_001025c4_0x1025c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001025c4_0x1025c4");
#endif

    switch (ctx->pc) {
        case 0x1025dcu: goto label_1025dc;
        default: break;
    }

    ctx->pc = 0x1025c4u;

    // 0x1025c4: 0x0  nop
    ctx->pc = 0x1025c4u;
    // NOP
    // 0x1025c8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1025cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1025ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1025d0: 0x24a5e040  addiu       $a1, $a1, -0x1FC0
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
    // 0x1025d4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1025D4u;
    SET_GPR_U32(ctx, 31, 0x1025DCu);
    ctx->pc = 0x1025D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025D4u;
    // 0x1025d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1025D4u, 0x1025DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025DCu;
label_1025dc:
    // 0x1025dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1025dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025e0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E0u;
        // 0x1025e4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1025F0u;
            return;
        }
    }
    ctx->pc = 0x1025E8u;
    // 0x1025e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1025E8u;
    {
        const bool branch_taken_0x1025e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E8u;
        // 0x1025ec: 0x8f9485f4  lw          $s4, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e8) {
            ctx->pc = 0x10260Cu;
            return;
        }
    }
    ctx->pc = 0x1025F0u;
}
