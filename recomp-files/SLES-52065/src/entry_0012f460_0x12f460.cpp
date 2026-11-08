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

// Function: entry_0012f460
// Address: 0x12f460 - 0x12f4b8
void entry_0012f460_0x12f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f460_0x12f460");
#endif

    switch (ctx->pc) {
        case 0x12f474u: goto label_12f474;
        case 0x12f48cu: goto label_12f48c;
        default: break;
    }

    ctx->pc = 0x12f460u;

label_12f460:
    // 0x12f460: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f464:
    // 0x12f464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f468:
    // 0x12f468: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12f468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12f46c:
    // 0x12f46c: 0x320f809  jalr        $t9
label_12f470:
    if (ctx->pc == 0x12F470u) {
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F46Cu;
        // 0x12f470: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F474u;
        goto label_12f474;
    }
    ctx->pc = 0x12F46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F474u);
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F46Cu;
        // 0x12f470: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F46Cu, 0x12F474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F474u;
label_12f474:
    // 0x12f474: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f478:
    // 0x12f478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f47c:
    // 0x12f47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f480:
    // 0x12f480: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12f480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12f484:
    // 0x12f484: 0x320f809  jalr        $t9
label_12f488:
    if (ctx->pc == 0x12F488u) {
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F484u;
        // 0x12f488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F48Cu;
        goto label_12f48c;
    }
    ctx->pc = 0x12F484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F48Cu);
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F484u;
        // 0x12f488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F484u, 0x12F48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F48Cu;
label_12f48c:
    // 0x12f48c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f490:
    // 0x12f490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12f490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f494:
    // 0x12f494: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
label_12f498:
    if (ctx->pc == 0x12F498u) {
        ctx->pc = 0x12F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F494u;
        // 0x12f498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F49Cu;
        goto label_12f49c;
    }
    ctx->pc = 0x12F494u;
    {
        const bool branch_taken_0x12f494 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F494u;
        // 0x12f498: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f494) {
            ctx->pc = 0x12F5C8u;
            return;
        }
    }
    ctx->pc = 0x12F49Cu;
label_12f49c:
    // 0x12f49c: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
label_12f4a0:
    if (ctx->pc == 0x12F4A0u) {
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4A4u;
        goto label_12f4a4;
    }
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F538u;
            return;
        }
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4a8:
    // 0x12f4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4ac:
    // 0x12f4ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12f4b0:
    // 0x12f4b0: 0x10000015  b           . + 4 + (0x15 << 2)
label_12f4b4:
    if (ctx->pc == 0x12F4B4u) {
        ctx->pc = 0x12F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4B0u;
        // 0x12f4b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4B8u;
        goto label_fallthrough_0x12f4b0;
    }
    ctx->pc = 0x12F4B0u;
    {
        const bool branch_taken_0x12f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4B0u;
        // 0x12f4b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4b0) {
            ctx->pc = 0x12F508u;
            return;
        }
    }
label_fallthrough_0x12f4b0:
    ctx->pc = 0x12F4B8u;
}
