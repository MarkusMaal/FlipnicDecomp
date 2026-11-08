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

// Function: entry_001d3808
// Address: 0x1d3808 - 0x1d3834
void entry_001d3808_0x1d3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3808_0x1d3808");
#endif

    switch (ctx->pc) {
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3828u: goto label_1d3828;
        default: break;
    }

    ctx->pc = 0x1d3808u;

    // 0x1d3808: 0xc076a94  jal         func_1DAA50
    ctx->pc = 0x1D3808u;
    SET_GPR_U32(ctx, 31, 0x1D3810u);
    ctx->pc = 0x1D380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3808u;
    // 0x1d380c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA50u, 0x1D3808u, 0x1D3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3810u;
label_1d3810:
    // 0x1d3810: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3818u;
    {
        const bool branch_taken_0x1d3818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3818u;
        // 0x1d381c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3818) {
            ctx->pc = 0x1D3834u;
            return;
        }
    }
    ctx->pc = 0x1D3820u;
    // 0x1d3820: 0xc077240  jal         func_1DC900
    ctx->pc = 0x1D3820u;
    SET_GPR_U32(ctx, 31, 0x1D3828u);
    ctx->pc = 0x1D3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3820u;
    // 0x1d3824: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC900u, 0x1D3820u, 0x1D3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3828u;
label_1d3828:
    // 0x1d3828: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d382c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d3830: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1d3830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x1d3834u;
}
