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

// Function: entry_00169880
// Address: 0x169880 - 0x169898
void entry_00169880_0x169880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169880_0x169880");
#endif

    ctx->pc = 0x169880u;

    // 0x169880: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x169880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x169884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x169884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x169888: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169888u;
    {
        const bool branch_taken_0x169888 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169888u;
        // 0x16988c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169888) {
            ctx->pc = 0x16989Cu;
            return;
        }
    }
    ctx->pc = 0x169890u;
    // 0x169890: 0xc0401a4  jal         func_100690
    ctx->pc = 0x169890u;
    SET_GPR_U32(ctx, 31, 0x169898u);
    ctx->pc = 0x169894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169890u;
    // 0x169894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x169890u, 0x169898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169898u;
}
