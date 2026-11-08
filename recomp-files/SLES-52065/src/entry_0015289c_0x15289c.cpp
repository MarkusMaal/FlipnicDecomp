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

// Function: entry_0015289c
// Address: 0x15289c - 0x1528cc
void entry_0015289c_0x15289c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015289c_0x15289c");
#endif

    switch (ctx->pc) {
        case 0x1528bcu: goto label_1528bc;
        default: break;
    }

    ctx->pc = 0x15289cu;

    // 0x15289c: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1528a0: 0x26c70020  addiu       $a3, $s6, 0x20
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x1528a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1528a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1528a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1528acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528b0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1528b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528b4: 0xc0553bc  jal         func_154EF0
    ctx->pc = 0x1528B4u;
    SET_GPR_U32(ctx, 31, 0x1528BCu);
    ctx->pc = 0x1528B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528B4u;
    // 0x1528b8: 0x26d60060  addiu       $s6, $s6, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154EF0u, 0x1528B4u, 0x1528BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528BCu;
label_1528bc:
    // 0x1528bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1528BCu;
    {
        const bool branch_taken_0x1528bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1528bc) {
            ctx->pc = 0x1528CCu;
            return;
        }
    }
    ctx->pc = 0x1528C4u;
    // 0x1528c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C4u;
        // 0x1528c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x1528E4u;
            return;
        }
    }
    ctx->pc = 0x1528CCu;
}
