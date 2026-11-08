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

// Function: entry_0014714c
// Address: 0x14714c - 0x1471c8
void entry_0014714c_0x14714c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014714c_0x14714c");
#endif

    switch (ctx->pc) {
        case 0x147174u: goto label_147174;
        case 0x14718cu: goto label_14718c;
        case 0x1471a4u: goto label_1471a4;
        default: break;
    }

    ctx->pc = 0x14714cu;

label_14714c:
    // 0x14714c: 0x8e8502b4  lw          $a1, 0x2B4($s4)
    ctx->pc = 0x14714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
label_147150:
    // 0x147150: 0x10a001b7  beqz        $a1, . + 4 + (0x1B7 << 2)
label_147154:
    if (ctx->pc == 0x147154u) {
        ctx->pc = 0x147158u;
        goto label_147158;
    }
    ctx->pc = 0x147150u;
    {
        const bool branch_taken_0x147150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147150) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x147158u;
label_147158:
    // 0x147158: 0x8e8202b8  lw          $v0, 0x2B8($s4)
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_14715c:
    // 0x14715c: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
label_147160:
    if (ctx->pc == 0x147160u) {
        ctx->pc = 0x147164u;
        goto label_147164;
    }
    ctx->pc = 0x14715Cu;
    {
        const bool branch_taken_0x14715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14715c) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x147164u;
label_147164:
    // 0x147164: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147168:
    // 0x147168: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x147168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_14716c:
    // 0x14716c: 0x320f809  jalr        $t9
label_147170:
    if (ctx->pc == 0x147170u) {
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14716Cu;
        // 0x147170: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147174u;
        goto label_147174;
    }
    ctx->pc = 0x14716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147174u);
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14716Cu;
        // 0x147170: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14716Cu, 0x147174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x147174u;
label_147174:
    // 0x147174: 0x8e8502b8  lw          $a1, 0x2B8($s4)
    ctx->pc = 0x147174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_147178:
    // 0x147178: 0x8fb3013c  lw          $s3, 0x13C($sp)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_14717c:
    // 0x14717c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147180:
    // 0x147180: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_147184:
    // 0x147184: 0x320f809  jalr        $t9
label_147188:
    if (ctx->pc == 0x147188u) {
        ctx->pc = 0x147188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147184u;
        // 0x147188: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14718Cu;
        goto label_14718c;
    }
    ctx->pc = 0x147184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14718Cu);
        ctx->pc = 0x147188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147184u;
        // 0x147188: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147184u, 0x14718Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14718Cu;
label_14718c:
    // 0x14718c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147190:
    // 0x147190: 0x8fbe014c  lw          $fp, 0x14C($sp)
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_147194:
    // 0x147194: 0x8e9703c4  lw          $s7, 0x3C4($s4)
    ctx->pc = 0x147194u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
label_147198:
    // 0x147198: 0x8e9603c8  lw          $s6, 0x3C8($s4)
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 968)));
label_14719c:
    // 0x14719c: 0xc04c6f4  jal         func_131BD0
label_1471a0:
    if (ctx->pc == 0x1471A0u) {
        ctx->pc = 0x1471A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14719Cu;
        // 0x1471a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471A4u;
        goto label_1471a4;
    }
    ctx->pc = 0x14719Cu;
    SET_GPR_U32(ctx, 31, 0x1471A4u);
    ctx->pc = 0x1471A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14719Cu;
    // 0x1471a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x14719Cu, 0x1471A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471A4u;
label_1471a4:
    // 0x1471a4: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1471a8:
    // 0x1471a8: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1471ac:
    if (ctx->pc == 0x1471ACu) {
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471B0u;
        goto label_1471b0;
    }
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x14722Cu;
            return;
        }
    }
    ctx->pc = 0x1471B0u;
label_1471b0:
    // 0x1471b0: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1471b4:
    // 0x1471b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1471b8:
    if (ctx->pc == 0x1471B8u) {
        ctx->pc = 0x1471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471B4u;
        // 0x1471b8: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471BCu;
        goto label_1471bc;
    }
    ctx->pc = 0x1471B4u;
    {
        const bool branch_taken_0x1471b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471B4u;
        // 0x1471b8: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471b4) {
            ctx->pc = 0x1471C8u;
            return;
        }
    }
    ctx->pc = 0x1471BCu;
label_1471bc:
    // 0x1471bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1471c0:
    if (ctx->pc == 0x1471C0u) {
        ctx->pc = 0x1471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471BCu;
        // 0x1471c0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471C4u;
        goto label_1471c4;
    }
    ctx->pc = 0x1471BCu;
    {
        const bool branch_taken_0x1471bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471BCu;
        // 0x1471c0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471bc) {
            ctx->pc = 0x1471C8u;
            return;
        }
    }
    ctx->pc = 0x1471C4u;
label_1471c4:
    // 0x1471c4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1471c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1471c8u;
}
