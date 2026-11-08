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

// Function: entry_00201138
// Address: 0x201138 - 0x20116c
void entry_00201138_0x201138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201138_0x201138");
#endif

    switch (ctx->pc) {
        case 0x201148u: goto label_201148;
        default: break;
    }

    ctx->pc = 0x201138u;

    // 0x201138: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x201138u;
    {
        const bool branch_taken_0x201138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201138u;
        // 0x20113c: 0x34620004  ori         $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201138) {
            ctx->pc = 0x20116Cu;
            return;
        }
    }
    ctx->pc = 0x201140u;
    // 0x201140: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x201140u;
    SET_GPR_U32(ctx, 31, 0x201148u);
    ctx->pc = 0x201144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201140u;
    // 0x201144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x201140u, 0x201148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201148u;
label_201148:
    // 0x201148: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x201148u;
    {
        const bool branch_taken_0x201148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201148u;
        // 0x20114c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201148) {
            ctx->pc = 0x201230u;
            return;
        }
    }
    ctx->pc = 0x201150u;
    // 0x201150: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x201150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x201154: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x201154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x201158: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x201158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x20115c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x201160: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x201160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x201164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x201164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201168: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x201168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x20116cu;
}
