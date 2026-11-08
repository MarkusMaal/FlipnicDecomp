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

// Function: entry_0019278c
// Address: 0x19278c - 0x1927d8
void entry_0019278c_0x19278c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019278c_0x19278c");
#endif

    switch (ctx->pc) {
        case 0x192798u: goto label_192798;
        case 0x1927acu: goto label_1927ac;
        default: break;
    }

    ctx->pc = 0x19278cu;

    // 0x19278c: 0x0  nop
    ctx->pc = 0x19278cu;
    // NOP
    // 0x192790: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x192790u;
    SET_GPR_U32(ctx, 31, 0x192798u);
    ctx->pc = 0x192794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192790u;
    // 0x192794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x192790u, 0x192798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192798u;
label_192798:
    // 0x192798: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x19279c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927a0: 0x2484d6d0  addiu       $a0, $a0, -0x2930
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956752));
    // 0x1927a4: 0xc064048  jal         func_190120
    ctx->pc = 0x1927A4u;
    SET_GPR_U32(ctx, 31, 0x1927ACu);
    ctx->pc = 0x1927A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927A4u;
    // 0x1927a8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190120u, 0x1927A4u, 0x1927ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ACu;
label_1927ac:
    // 0x1927ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927b0: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1927B0u;
    {
        const bool branch_taken_0x1927b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927b0) {
            ctx->pc = 0x192898u;
            return;
        }
    }
    ctx->pc = 0x1927B8u;
    // 0x1927b8: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1927b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1927bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927c0: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x1927c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x1927c4: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x1927c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x1927c8: 0xae20033c  sw          $zero, 0x33C($s1)
    ctx->pc = 0x1927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
    // 0x1927cc: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1927ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x1927d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1927D0u;
    {
        const bool branch_taken_0x1927d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D0u;
        // 0x1927d4: 0xae200344  sw          $zero, 0x344($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927d0) {
            ctx->pc = 0x192804u;
            return;
        }
    }
    ctx->pc = 0x1927D8u;
}
