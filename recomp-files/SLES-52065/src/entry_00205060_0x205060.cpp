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

// Function: entry_00205060
// Address: 0x205060 - 0x205098
void entry_00205060_0x205060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205060_0x205060");
#endif

    switch (ctx->pc) {
        case 0x205080u: goto label_205080;
        default: break;
    }

    ctx->pc = 0x205060u;

    // 0x205060: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x205060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205064: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x205064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20506c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20506cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205070: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x205070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205074: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x205074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205078: 0xc07f084  jal         func_1FC210
    ctx->pc = 0x205078u;
    SET_GPR_U32(ctx, 31, 0x205080u);
    ctx->pc = 0x20507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205078u;
    // 0x20507c: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC210u, 0x205078u, 0x205080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205080u;
label_205080:
    // 0x205080: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205084: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x205088: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205088u;
    {
        const bool branch_taken_0x205088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205088u;
        // 0x20508c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205088) {
            ctx->pc = 0x205098u;
            return;
        }
    }
    ctx->pc = 0x205090u;
    // 0x205090: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205090u;
    {
        const bool branch_taken_0x205090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x205094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205090u;
        // 0x205094: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205090) {
            ctx->pc = 0x2050A4u;
            return;
        }
    }
    ctx->pc = 0x205098u;
}
