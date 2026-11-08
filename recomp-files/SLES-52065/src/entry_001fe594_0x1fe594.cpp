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

// Function: entry_001fe594
// Address: 0x1fe594 - 0x1fe5c0
void entry_001fe594_0x1fe594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe594_0x1fe594");
#endif

    switch (ctx->pc) {
        case 0x1fe5acu: goto label_1fe5ac;
        default: break;
    }

    ctx->pc = 0x1fe594u;

    // 0x1fe594: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE594u;
    {
        const bool branch_taken_0x1fe594 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe594) {
            ctx->pc = 0x1FE598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE594u;
            // 0x1fe598: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE5CCu;
            return;
        }
    }
    ctx->pc = 0x1FE59Cu;
    // 0x1fe59c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fe5a4: 0xc07fda0  jal         func_1FF680
    ctx->pc = 0x1FE5A4u;
    SET_GPR_U32(ctx, 31, 0x1FE5ACu);
    ctx->pc = 0x1FE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5A4u;
    // 0x1fe5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF680u, 0x1FE5A4u, 0x1FE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5ACu;
label_1fe5ac:
    // 0x1fe5ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5B0u;
    {
        const bool branch_taken_0x1fe5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B0u;
        // 0x1fe5b4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b0) {
            ctx->pc = 0x1FE5C0u;
            return;
        }
    }
    ctx->pc = 0x1FE5B8u;
    // 0x1fe5b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE5B8u;
    {
        const bool branch_taken_0x1fe5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B8u;
        // 0x1fe5bc: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b8) {
            ctx->pc = 0x1FE5C4u;
            return;
        }
    }
    ctx->pc = 0x1FE5C0u;
}
