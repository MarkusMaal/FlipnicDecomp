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

// Function: entry_001b07c8
// Address: 0x1b07c8 - 0x1b07f8
void entry_001b07c8_0x1b07c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b07c8_0x1b07c8");
#endif

    switch (ctx->pc) {
        case 0x1b07ecu: goto label_1b07ec;
        default: break;
    }

    ctx->pc = 0x1b07c8u;

    // 0x1b07c8: 0x928202ed  lbu         $v0, 0x2ED($s4)
    ctx->pc = 0x1b07c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 749)));
    // 0x1b07cc: 0x10400262  beqz        $v0, . + 4 + (0x262 << 2)
    ctx->pc = 0x1B07CCu;
    {
        const bool branch_taken_0x1b07cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07CCu;
        // 0x1b07d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07cc) {
            ctx->pc = 0x1B1158u;
            return;
        }
    }
    ctx->pc = 0x1B07D4u;
    // 0x1b07d4: 0x928202f0  lbu         $v0, 0x2F0($s4)
    ctx->pc = 0x1b07d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 752)));
    // 0x1b07d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B07D8u;
    {
        const bool branch_taken_0x1b07d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D8u;
        // 0x1b07dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07d8) {
            ctx->pc = 0x1B07F8u;
            return;
        }
    }
    ctx->pc = 0x1B07E0u;
    // 0x1b07e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b07e4: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B07E4u;
    SET_GPR_U32(ctx, 31, 0x1B07ECu);
    ctx->pc = 0x1B07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07E4u;
    // 0x1b07e8: 0x24a50c50  addiu       $a1, $a1, 0xC50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B07E4u, 0x1B07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B07ECu;
label_1b07ec:
    // 0x1b07ec: 0x241500a0  addiu       $s5, $zero, 0xA0
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b07f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B07F0u;
    {
        const bool branch_taken_0x1b07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07F0u;
        // 0x1b07f4: 0x24170180  addiu       $s7, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07f0) {
            ctx->pc = 0x1B0838u;
            return;
        }
    }
    ctx->pc = 0x1B07F8u;
}
