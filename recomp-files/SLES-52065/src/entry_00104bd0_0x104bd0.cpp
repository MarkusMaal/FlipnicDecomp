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

// Function: entry_00104bd0
// Address: 0x104bd0 - 0x104c0c
void entry_00104bd0_0x104bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104bd0_0x104bd0");
#endif

    switch (ctx->pc) {
        case 0x104bd8u: goto label_104bd8;
        case 0x104be8u: goto label_104be8;
        default: break;
    }

    ctx->pc = 0x104bd0u;

    // 0x104bd0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104BD0u;
    SET_GPR_U32(ctx, 31, 0x104BD8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104BD0u, 0x104BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BD8u;
label_104bd8:
    // 0x104bd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104BD8u;
    {
        const bool branch_taken_0x104bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd8) {
            ctx->pc = 0x104C0Cu;
            return;
        }
    }
    ctx->pc = 0x104BE0u;
    // 0x104be0: 0xc041860  jal         func_106180
    ctx->pc = 0x104BE0u;
    SET_GPR_U32(ctx, 31, 0x104BE8u);
    ctx->pc = 0x104BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BE0u;
    // 0x104be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x104BE0u, 0x104BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE8u;
label_104be8:
    // 0x104be8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104bec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104bf0: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x104bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x104bf4: 0x24639890  addiu       $v1, $v1, -0x6770
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940816));
    // 0x104bf8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104bfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c00: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c04: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x104c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x104c08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104c0cu;
}
