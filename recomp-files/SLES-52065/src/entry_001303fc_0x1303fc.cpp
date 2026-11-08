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

// Function: entry_001303fc
// Address: 0x1303fc - 0x130438
void entry_001303fc_0x1303fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001303fc_0x1303fc");
#endif

    switch (ctx->pc) {
        case 0x130410u: goto label_130410;
        case 0x130424u: goto label_130424;
        case 0x130430u: goto label_130430;
        default: break;
    }

    ctx->pc = 0x1303fcu;

    // 0x1303fc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130404: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130408: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130408u;
    SET_GPR_U32(ctx, 31, 0x130410u);
    ctx->pc = 0x13040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130408u;
    // 0x13040c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130408u, 0x130410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130410u;
label_130410:
    // 0x130410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130414: 0x1200006c  beqz        $s0, . + 4 + (0x6C << 2)
    ctx->pc = 0x130414u;
    {
        const bool branch_taken_0x130414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130414) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x13041Cu;
    // 0x13041c: 0xc04d988  jal         func_136620
    ctx->pc = 0x13041Cu;
    SET_GPR_U32(ctx, 31, 0x130424u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x13041Cu, 0x130424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130424u;
label_130424:
    // 0x130424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130428: 0xc04db3c  jal         func_136CF0
    ctx->pc = 0x130428u;
    SET_GPR_U32(ctx, 31, 0x130430u);
    ctx->pc = 0x13042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130428u;
    // 0x13042c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136CF0u, 0x130428u, 0x130430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130430u;
label_130430:
    // 0x130430: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x130430u;
    {
        const bool branch_taken_0x130430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130430u;
        // 0x130434: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130430) {
            ctx->pc = 0x1305CCu;
            return;
        }
    }
    ctx->pc = 0x130438u;
}
