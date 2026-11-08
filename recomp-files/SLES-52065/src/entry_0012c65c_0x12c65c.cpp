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

// Function: entry_0012c65c
// Address: 0x12c65c - 0x12c678
void entry_0012c65c_0x12c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c65c_0x12c65c");
#endif

    switch (ctx->pc) {
        case 0x12c664u: goto label_12c664;
        default: break;
    }

    ctx->pc = 0x12c65cu;

    // 0x12c65c: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C65Cu;
    SET_GPR_U32(ctx, 31, 0x12C664u);
    ctx->pc = 0x12C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C65Cu;
    // 0x12c660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C65Cu, 0x12C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C664u;
label_12c664:
    // 0x12c664: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12C664u;
    {
        const bool branch_taken_0x12c664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c664) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C66Cu;
    // 0x12c66c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c670: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12C670u;
    {
        const bool branch_taken_0x12c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C670u;
        // 0x12c674: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c670) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C678u;
}
