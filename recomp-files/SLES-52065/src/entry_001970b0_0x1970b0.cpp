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

// Function: entry_001970b0
// Address: 0x1970b0 - 0x197138
void entry_001970b0_0x1970b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001970b0_0x1970b0");
#endif

    switch (ctx->pc) {
        case 0x1970d0u: goto label_1970d0;
        case 0x1970d8u: goto label_1970d8;
        case 0x1970f0u: goto label_1970f0;
        case 0x197114u: goto label_197114;
        case 0x19712cu: goto label_19712c;
        default: break;
    }

    ctx->pc = 0x1970b0u;

label_1970b0:
    // 0x1970b0: 0xaeb006e0  sw          $s0, 0x6E0($s5)
    ctx->pc = 0x1970b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1760), GPR_U32(ctx, 16));
label_1970b4:
    // 0x1970b4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1970b8:
    // 0x1970b8: 0x26b106e0  addiu       $s1, $s5, 0x6E0
    ctx->pc = 0x1970b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1760));
label_1970bc:
    // 0x1970bc: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1970c0:
    // 0x1970c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1970c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1970c4:
    // 0x1970c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1970c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1970c8:
    // 0x1970c8: 0xc064f7c  jal         func_193DF0
label_1970cc:
    if (ctx->pc == 0x1970CCu) {
        ctx->pc = 0x1970CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970C8u;
        // 0x1970cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970D0u;
        goto label_1970d0;
    }
    ctx->pc = 0x1970C8u;
    SET_GPR_U32(ctx, 31, 0x1970D0u);
    ctx->pc = 0x1970CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970C8u;
    // 0x1970cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1970C8u, 0x1970D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970D0u;
label_1970d0:
    // 0x1970d0: 0xc04bf44  jal         func_12FD10
label_1970d4:
    if (ctx->pc == 0x1970D4u) {
        ctx->pc = 0x1970D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970D0u;
        // 0x1970d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970D8u;
        goto label_1970d8;
    }
    ctx->pc = 0x1970D0u;
    SET_GPR_U32(ctx, 31, 0x1970D8u);
    ctx->pc = 0x1970D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970D0u;
    // 0x1970d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1970D0u, 0x1970D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970D8u;
label_1970d8:
    // 0x1970d8: 0xaea206e4  sw          $v0, 0x6E4($s5)
    ctx->pc = 0x1970d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1764), GPR_U32(ctx, 2));
label_1970dc:
    // 0x1970dc: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x1970dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_1970e0:
    // 0x1970e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1970e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1970e4:
    // 0x1970e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1970e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1970e8:
    // 0x1970e8: 0x320f809  jalr        $t9
label_1970ec:
    if (ctx->pc == 0x1970ECu) {
        ctx->pc = 0x1970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970E8u;
        // 0x1970ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970F0u;
        goto label_1970f0;
    }
    ctx->pc = 0x1970E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1970F0u);
        ctx->pc = 0x1970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970E8u;
        // 0x1970ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970E8u, 0x1970F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1970F0u;
label_1970f0:
    // 0x1970f0: 0xaea006dc  sw          $zero, 0x6DC($s5)
    ctx->pc = 0x1970f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 0));
label_1970f4:
    // 0x1970f4: 0x8ea206dc  lw          $v0, 0x6DC($s5)
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1756)));
label_1970f8:
    // 0x1970f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1970fc:
    if (ctx->pc == 0x1970FCu) {
        ctx->pc = 0x197100u;
        goto label_197100;
    }
    ctx->pc = 0x1970F8u;
    {
        const bool branch_taken_0x1970f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1970f8) {
            ctx->pc = 0x19713Cu;
            return;
        }
    }
    ctx->pc = 0x197100u;
label_197100:
    // 0x197100: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197104:
    // 0x197104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197108:
    // 0x197108: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19710c:
    // 0x19710c: 0x320f809  jalr        $t9
label_197110:
    if (ctx->pc == 0x197110u) {
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19710Cu;
        // 0x197110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197114u;
        goto label_197114;
    }
    ctx->pc = 0x19710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197114u);
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19710Cu;
        // 0x197110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19710Cu, 0x197114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197114u;
label_197114:
    // 0x197114: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197118:
    // 0x197118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19711c:
    // 0x19711c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197120:
    // 0x197120: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197124:
    // 0x197124: 0x320f809  jalr        $t9
label_197128:
    if (ctx->pc == 0x197128u) {
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197124u;
        // 0x197128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19712Cu;
        goto label_19712c;
    }
    ctx->pc = 0x197124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19712Cu);
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197124u;
        // 0x197128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197124u, 0x19712Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19712Cu;
label_19712c:
    // 0x19712c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197130:
    // 0x197130: 0x10000002  b           . + 4 + (0x2 << 2)
label_197134:
    if (ctx->pc == 0x197134u) {
        ctx->pc = 0x197134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197130u;
        // 0x197134: 0xaea206dc  sw          $v0, 0x6DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197138u;
        goto label_fallthrough_0x197130;
    }
    ctx->pc = 0x197130u;
    {
        const bool branch_taken_0x197130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197130u;
        // 0x197134: 0xaea206dc  sw          $v0, 0x6DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197130) {
            ctx->pc = 0x19713Cu;
            return;
        }
    }
label_fallthrough_0x197130:
    ctx->pc = 0x197138u;
}
