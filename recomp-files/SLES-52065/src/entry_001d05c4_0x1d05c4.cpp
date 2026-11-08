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

// Function: entry_001d05c4
// Address: 0x1d05c4 - 0x1d05f4
void entry_001d05c4_0x1d05c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d05c4_0x1d05c4");
#endif

    ctx->pc = 0x1d05c4u;

    // 0x1d05c4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D05C4u;
    {
        const bool branch_taken_0x1d05c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c4) {
            ctx->pc = 0x1D05F8u;
            return;
        }
    }
    ctx->pc = 0x1D05CCu;
    // 0x1d05cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d05d0: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x1d05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x1d05d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D05D4u;
    {
        const bool branch_taken_0x1d05d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D4u;
        // 0x1d05d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05d4) {
            ctx->pc = 0x1D05F4u;
            return;
        }
    }
    ctx->pc = 0x1D05DCu;
    // 0x1d05dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d05e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d05e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d05e4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1d05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1d05e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d05e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d05ec: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1D05ECu;
    SET_GPR_U32(ctx, 31, 0x1D05F4u);
    ctx->pc = 0x1D05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05ECu;
    // 0x1d05f0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1D05ECu, 0x1D05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D05F4u;
}
