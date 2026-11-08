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

// Function: entry_0012c5cc
// Address: 0x12c5cc - 0x12c604
void entry_0012c5cc_0x12c5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c5cc_0x12c5cc");
#endif

    switch (ctx->pc) {
        case 0x12c5d8u: goto label_12c5d8;
        case 0x12c5ecu: goto label_12c5ec;
        default: break;
    }

    ctx->pc = 0x12c5ccu;

    // 0x12c5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5d0: 0xc07d806  jal         func_1F6018
    ctx->pc = 0x12C5D0u;
    SET_GPR_U32(ctx, 31, 0x12C5D8u);
    ctx->pc = 0x12C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5D0u;
    // 0x12c5d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6018u, 0x12C5D0u, 0x12C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5D8u;
label_12c5d8:
    // 0x12c5d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12c5dc: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12C5DCu;
    {
        const bool branch_taken_0x12c5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5DCu;
        // 0x12c5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5dc) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C5E4u;
    // 0x12c5e4: 0xc07da3a  jal         func_1F68E8
    ctx->pc = 0x12C5E4u;
    SET_GPR_U32(ctx, 31, 0x12C5ECu);
    ctx->pc = 0x12C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5E4u;
    // 0x12c5e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F68E8u, 0x12C5E4u, 0x12C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5ECu;
label_12c5ec:
    // 0x12c5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c5f0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5F0u;
    {
        const bool branch_taken_0x12c5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c5f0) {
            ctx->pc = 0x12C604u;
            return;
        }
    }
    ctx->pc = 0x12C5F8u;
    // 0x12c5f8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x12c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x12c5fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12C5FCu;
    {
        const bool branch_taken_0x12c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5FCu;
        // 0x12c600: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5fc) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C604u;
}
