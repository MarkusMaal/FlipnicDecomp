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

// Function: entry_00102750
// Address: 0x102750 - 0x102780
void entry_00102750_0x102750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102750_0x102750");
#endif

    switch (ctx->pc) {
        case 0x102764u: goto label_102764;
        default: break;
    }

    ctx->pc = 0x102750u;

    // 0x102750: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x102754: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x102758: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x10275c: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x10275Cu;
    SET_GPR_U32(ctx, 31, 0x102764u);
    ctx->pc = 0x102760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10275Cu;
    // 0x102760: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10275Cu, 0x102764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102764u;
label_102764:
    // 0x102764: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102768: 0x620001f  bltz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x102768u;
    {
        const bool branch_taken_0x102768 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x102768) {
            ctx->pc = 0x1027E8u;
            return;
        }
    }
    ctx->pc = 0x102770u;
    // 0x102770: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102770u;
    {
        const bool branch_taken_0x102770 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x102774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102770u;
        // 0x102774: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102770) {
            ctx->pc = 0x102780u;
            return;
        }
    }
    ctx->pc = 0x102778u;
    // 0x102778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x102778u;
    {
        const bool branch_taken_0x102778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102778u;
        // 0x10277c: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102778) {
            ctx->pc = 0x10279Cu;
            return;
        }
    }
    ctx->pc = 0x102780u;
}
