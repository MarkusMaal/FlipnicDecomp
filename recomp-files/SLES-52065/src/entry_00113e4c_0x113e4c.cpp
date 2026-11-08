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

// Function: entry_00113e4c
// Address: 0x113e4c - 0x113e60
void entry_00113e4c_0x113e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e4c_0x113e4c");
#endif

    ctx->pc = 0x113e4cu;

    // 0x113e4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x113e4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x113e50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E50u;
    {
        const bool branch_taken_0x113e50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x113E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E50u;
        // 0x113e54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e50) {
            ctx->pc = 0x113E64u;
            return;
        }
    }
    ctx->pc = 0x113E58u;
    // 0x113e58: 0xc0401a4  jal         func_100690
    ctx->pc = 0x113E58u;
    SET_GPR_U32(ctx, 31, 0x113E60u);
    ctx->pc = 0x113E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E58u;
    // 0x113e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x113E58u, 0x113E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E60u;
}
