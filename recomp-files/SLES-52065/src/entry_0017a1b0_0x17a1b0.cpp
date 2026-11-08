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

// Function: entry_0017a1b0
// Address: 0x17a1b0 - 0x17a1f0
void entry_0017a1b0_0x17a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1b0_0x17a1b0");
#endif

    switch (ctx->pc) {
        case 0x17a1bcu: goto label_17a1bc;
        default: break;
    }

    ctx->pc = 0x17a1b0u;

    // 0x17a1b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a1b4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x17A1B4u;
    SET_GPR_U32(ctx, 31, 0x17A1BCu);
    ctx->pc = 0x17A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1B4u;
    // 0x17a1b8: 0xaf808630  sw          $zero, -0x79D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x17A1B4u, 0x17A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1BCu;
label_17a1bc:
    // 0x17a1bc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x17A1BCu;
    {
        const bool branch_taken_0x17a1bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1BCu;
        // 0x17a1c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1bc) {
            ctx->pc = 0x17A1F4u;
            return;
        }
    }
    ctx->pc = 0x17A1C4u;
    // 0x17a1c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1c8: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17a1cc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A1CCu;
    {
        const bool branch_taken_0x17a1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1CCu;
        // 0x17a1d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1cc) {
            ctx->pc = 0x17A1F0u;
            return;
        }
    }
    ctx->pc = 0x17A1D4u;
    // 0x17a1d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1d8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x17a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x17a1dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A1DCu;
    {
        const bool branch_taken_0x17a1dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1DCu;
        // 0x17a1e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1dc) {
            ctx->pc = 0x17A1F0u;
            return;
        }
    }
    ctx->pc = 0x17A1E4u;
    // 0x17a1e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a1e8: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17a1ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17a1f0u;
}
