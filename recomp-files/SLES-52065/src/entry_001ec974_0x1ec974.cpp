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

// Function: entry_001ec974
// Address: 0x1ec974 - 0x1ec9a4
void entry_001ec974_0x1ec974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec974_0x1ec974");
#endif

    switch (ctx->pc) {
        case 0x1ec98cu: goto label_1ec98c;
        default: break;
    }

    ctx->pc = 0x1ec974u;

    // 0x1ec974: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec978: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1ec978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1ec97c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1ec97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ec980: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec984: 0xc07b1d2  jal         func_1EC748
    ctx->pc = 0x1EC984u;
    SET_GPR_U32(ctx, 31, 0x1EC98Cu);
    ctx->pc = 0x1EC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC984u;
    // 0x1ec988: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC748u, 0x1EC984u, 0x1EC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC98Cu;
label_1ec98c:
    // 0x1ec98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec990: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC990u;
    {
        const bool branch_taken_0x1ec990 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ec990) {
            ctx->pc = 0x1EC9A4u;
            return;
        }
    }
    ctx->pc = 0x1EC998u;
    // 0x1ec998: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1ec99c: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC99Cu;
    SET_GPR_U32(ctx, 31, 0x1EC9A4u);
    ctx->pc = 0x1EC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC99Cu;
    // 0x1ec9a0: 0x24844228  addiu       $a0, $a0, 0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC99Cu, 0x1EC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9A4u;
}
