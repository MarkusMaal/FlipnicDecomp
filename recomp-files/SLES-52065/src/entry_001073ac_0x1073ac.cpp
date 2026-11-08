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

// Function: entry_001073ac
// Address: 0x1073ac - 0x1073d4
void entry_001073ac_0x1073ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001073ac_0x1073ac");
#endif

    ctx->pc = 0x1073acu;

    // 0x1073ac: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1073ACu;
    {
        const bool branch_taken_0x1073ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ACu;
        // 0x1073b0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073ac) {
            ctx->pc = 0x1073E8u;
            return;
        }
    }
    ctx->pc = 0x1073B4u;
    // 0x1073b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1073b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1073b8: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x1073b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x1073bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1073c0: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x1073c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1073c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1073C4u;
    {
        const bool branch_taken_0x1073c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073c4) {
            ctx->pc = 0x1073D4u;
            return;
        }
    }
    ctx->pc = 0x1073CCu;
    // 0x1073cc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1073CCu;
    SET_GPR_U32(ctx, 31, 0x1073D4u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1073CCu, 0x1073D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073D4u;
}
