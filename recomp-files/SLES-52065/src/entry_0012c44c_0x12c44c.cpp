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

// Function: entry_0012c44c
// Address: 0x12c44c - 0x12c484
void entry_0012c44c_0x12c44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c44c_0x12c44c");
#endif

    switch (ctx->pc) {
        case 0x12c45cu: goto label_12c45c;
        case 0x12c478u: goto label_12c478;
        default: break;
    }

    ctx->pc = 0x12c44cu;

    // 0x12c44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c454: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C454u;
    SET_GPR_U32(ctx, 31, 0x12C45Cu);
    ctx->pc = 0x12C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C454u;
    // 0x12c458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C454u, 0x12C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C45Cu;
label_12c45c:
    // 0x12c45c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c460: 0x1260009d  beqz        $s3, . + 4 + (0x9D << 2)
    ctx->pc = 0x12C460u;
    {
        const bool branch_taken_0x12c460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C460u;
        // 0x12c464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c460) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C468u;
    // 0x12c468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c46c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c470: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C470u;
    SET_GPR_U32(ctx, 31, 0x12C478u);
    ctx->pc = 0x12C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C470u;
    // 0x12c474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C470u, 0x12C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C478u;
label_12c478:
    // 0x12c478: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C478u;
    {
        const bool branch_taken_0x12c478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12c478) {
            ctx->pc = 0x12C484u;
            return;
        }
    }
    ctx->pc = 0x12C480u;
    // 0x12c480: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12c484u;
}
