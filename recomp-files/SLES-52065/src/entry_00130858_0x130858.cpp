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

// Function: entry_00130858
// Address: 0x130858 - 0x130884
void entry_00130858_0x130858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130858_0x130858");
#endif

    switch (ctx->pc) {
        case 0x130868u: goto label_130868;
        case 0x13087cu: goto label_13087c;
        default: break;
    }

    ctx->pc = 0x130858u;

    // 0x130858: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130858u;
        // 0x13085c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130858) {
            ctx->pc = 0x130930u;
            return;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130860u;
    SET_GPR_U32(ctx, 31, 0x130868u);
    ctx->pc = 0x130864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130860u;
    // 0x130864: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130860u, 0x130868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130868u;
label_130868:
    // 0x130868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x130868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13086c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13086Cu;
    {
        const bool branch_taken_0x13086c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13086Cu;
        // 0x130870: 0x26240128  addiu       $a0, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13086c) {
            ctx->pc = 0x130884u;
            return;
        }
    }
    ctx->pc = 0x130874u;
    // 0x130874: 0xc04f024  jal         func_13C090
    ctx->pc = 0x130874u;
    SET_GPR_U32(ctx, 31, 0x13087Cu);
    ctx->pc = 0x130878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130874u;
    // 0x130878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C090u, 0x130874u, 0x13087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13087Cu;
label_13087c:
    // 0x13087c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13087cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130880: 0x26240128  addiu       $a0, $s1, 0x128
    ctx->pc = 0x130880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    ctx->pc = 0x130884u;
}
