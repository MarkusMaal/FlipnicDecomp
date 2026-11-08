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

// Function: entry_001a9808
// Address: 0x1a9808 - 0x1a985c
void entry_001a9808_0x1a9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9808_0x1a9808");
#endif

    switch (ctx->pc) {
        case 0x1a9818u: goto label_1a9818;
        default: break;
    }

    ctx->pc = 0x1a9808u;

    // 0x1a9808: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1a980c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1a9810: 0xc06bd9c  jal         func_1AF670
    ctx->pc = 0x1A9810u;
    SET_GPR_U32(ctx, 31, 0x1A9818u);
    ctx->pc = 0x1A9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9810u;
    // 0x1a9814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1A9810u, 0x1A9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9818u;
label_1a9818:
    // 0x1a9818: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a981c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9820: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x1a9820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
    // 0x1a9824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a9824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9828: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1a9828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1a982c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a982cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9830: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x1a9830u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a9834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9838: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1a9838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a983c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1a983cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9840: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1a9840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9844: 0xa08528f5  sb          $a1, 0x28F5($a0)
    ctx->pc = 0x1a9844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10485), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a9848: 0xaea306c4  sw          $v1, 0x6C4($s5)
    ctx->pc = 0x1a9848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1732), GPR_U32(ctx, 3));
    // 0x1a984c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1a9850: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a9850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1a9854: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1A9854u;
    {
        const bool branch_taken_0x1a9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9854u;
        // 0x1a9858: 0xa2a006cd  sb          $zero, 0x6CD($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1741), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9854) {
            ctx->pc = 0x1A9974u;
            return;
        }
    }
    ctx->pc = 0x1A985Cu;
}
