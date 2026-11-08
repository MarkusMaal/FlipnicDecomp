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

// Function: entry_001046f0
// Address: 0x1046f0 - 0x104720
void entry_001046f0_0x1046f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001046f0_0x1046f0");
#endif

    switch (ctx->pc) {
        case 0x1046f8u: goto label_1046f8;
        case 0x104708u: goto label_104708;
        default: break;
    }

    ctx->pc = 0x1046f0u;

    // 0x1046f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1046F0u;
    SET_GPR_U32(ctx, 31, 0x1046F8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1046F0u, 0x1046F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046F8u;
label_1046f8:
    // 0x1046f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1046F8u;
    {
        const bool branch_taken_0x1046f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046F8u;
        // 0x1046fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046f8) {
            ctx->pc = 0x104720u;
            return;
        }
    }
    ctx->pc = 0x104700u;
    // 0x104700: 0xc056360  jal         func_158D80
    ctx->pc = 0x104700u;
    SET_GPR_U32(ctx, 31, 0x104708u);
    ctx->pc = 0x104704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104700u;
    // 0x104704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104700u, 0x104708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104708u;
label_104708:
    // 0x104708: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10470c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104710: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x104710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x104714: 0x24429b90  addiu       $v0, $v0, -0x6470
    ctx->pc = 0x104714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941584));
    // 0x104718: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10471c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104720u;
}
