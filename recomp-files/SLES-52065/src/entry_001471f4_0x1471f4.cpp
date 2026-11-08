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

// Function: entry_001471f4
// Address: 0x1471f4 - 0x14722c
void entry_001471f4_0x1471f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471f4_0x1471f4");
#endif

    switch (ctx->pc) {
        case 0x147210u: goto label_147210;
        default: break;
    }

    ctx->pc = 0x1471f4u;

label_1471f4:
    // 0x1471f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1471f8: 0x2f19021  addu        $s2, $s7, $s1
    ctx->pc = 0x1471f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x1471fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1471fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147200: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x147204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x147208: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x147208u;
    SET_GPR_U32(ctx, 31, 0x147210u);
    ctx->pc = 0x14720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147208u;
    // 0x14720c: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x147208u, 0x147210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147210u;
label_147210:
    // 0x147210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147214: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x147214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x147218: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x147218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x14721c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14721Cu;
    {
        const bool branch_taken_0x14721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14721Cu;
        // 0x147220: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14721c) {
            ctx->pc = 0x1471F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471f4;
        }
    }
    ctx->pc = 0x147224u;
    // 0x147224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147224) {
            ctx->pc = 0x1472A0u;
            return;
        }
    }
    ctx->pc = 0x14722Cu;
}
