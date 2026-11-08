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

// Function: entry_00204128
// Address: 0x204128 - 0x204150
void entry_00204128_0x204128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204128_0x204128");
#endif

    switch (ctx->pc) {
        case 0x20413cu: goto label_20413c;
        default: break;
    }

    ctx->pc = 0x204128u;

    // 0x204128: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x204128u;
    {
        const bool branch_taken_0x204128 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x20412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204128u;
        // 0x20412c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204128) {
            ctx->pc = 0x204158u;
            return;
        }
    }
    ctx->pc = 0x204130u;
    // 0x204130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204134: 0xc07fda0  jal         func_1FF680
    ctx->pc = 0x204134u;
    SET_GPR_U32(ctx, 31, 0x20413Cu);
    ctx->pc = 0x204138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204134u;
    // 0x204138: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF680u, 0x204134u, 0x20413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20413Cu;
label_20413c:
    // 0x20413c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20413Cu;
    {
        const bool branch_taken_0x20413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20413Cu;
        // 0x204140: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20413c) {
            ctx->pc = 0x204150u;
            return;
        }
    }
    ctx->pc = 0x204144u;
    // 0x204144: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x204144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x204148: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x204148u;
    {
        const bool branch_taken_0x204148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204148u;
        // 0x20414c: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204148) {
            ctx->pc = 0x204374u;
            return;
        }
    }
    ctx->pc = 0x204150u;
}
