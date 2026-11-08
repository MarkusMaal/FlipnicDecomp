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

// Function: entry_0017ea60
// Address: 0x17ea60 - 0x17ea9c
void entry_0017ea60_0x17ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea60_0x17ea60");
#endif

    switch (ctx->pc) {
        case 0x17ea84u: goto label_17ea84;
        case 0x17ea90u: goto label_17ea90;
        default: break;
    }

    ctx->pc = 0x17ea60u;

    // 0x17ea60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ea64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ea68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ea6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ea70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ea74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ea74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea78: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17ea7c: 0xc05faf4  jal         func_17EBD0
    ctx->pc = 0x17EA7Cu;
    SET_GPR_U32(ctx, 31, 0x17EA84u);
    ctx->pc = 0x17EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA7Cu;
    // 0x17ea80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBD0u, 0x17EA7Cu, 0x17EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA84u;
label_17ea84:
    // 0x17ea84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea88: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17EA88u;
    SET_GPR_U32(ctx, 31, 0x17EA90u);
    ctx->pc = 0x17EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA88u;
    // 0x17ea8c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17EA88u, 0x17EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA90u;
label_17ea90:
    // 0x17ea90: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x17ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
    // 0x17ea94: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17EA94u;
    {
        const bool branch_taken_0x17ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA94u;
        // 0x17ea98: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea94) {
            ctx->pc = 0x17EB30u;
            return;
        }
    }
    ctx->pc = 0x17EA9Cu;
}
