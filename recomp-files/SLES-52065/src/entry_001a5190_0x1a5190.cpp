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

// Function: entry_001a5190
// Address: 0x1a5190 - 0x1a5200
void entry_001a5190_0x1a5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5190_0x1a5190");
#endif

    switch (ctx->pc) {
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f8u: goto label_1a51f8;
        default: break;
    }

    ctx->pc = 0x1a5190u;

label_1a5190:
    // 0x1a5190: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1a5194:
    // 0x1a5194: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a5194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5198:
    // 0x1a5198: 0x8c630684  lw          $v1, 0x684($v1)
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
label_1a519c:
    // 0x1a519c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a519cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a51a0:
    // 0x1a51a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a51a4:
    // 0x1a51a4: 0x8c542cd8  lw          $s4, 0x2CD8($v0)
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a51a8:
    // 0x1a51a8: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a51ac:
    // 0x1a51ac: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a51acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a51b0:
    // 0x1a51b0: 0x320f809  jalr        $t9
label_1a51b4:
    if (ctx->pc == 0x1A51B4u) {
        ctx->pc = 0x1A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51B0u;
        // 0x1a51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51B8u;
        goto label_1a51b8;
    }
    ctx->pc = 0x1A51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A51B8u);
        ctx->pc = 0x1A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51B0u;
        // 0x1a51b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51B0u, 0x1A51B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A51B8u;
label_1a51b8:
    // 0x1a51b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a51b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a51bc:
    // 0x1a51bc: 0xc05ee1c  jal         func_17B870
label_1a51c0:
    if (ctx->pc == 0x1A51C0u) {
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51C4u;
        goto label_1a51c4;
    }
    ctx->pc = 0x1A51BCu;
    SET_GPR_U32(ctx, 31, 0x1A51C4u);
    ctx->pc = 0x1A51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51BCu;
    // 0x1a51c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1A51BCu, 0x1A51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51C4u;
label_1a51c4:
    // 0x1a51c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a51c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a51c8:
    // 0x1a51c8: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1a51c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1a51cc:
    // 0x1a51cc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1a51d0:
    if (ctx->pc == 0x1A51D0u) {
        ctx->pc = 0x1A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51CCu;
        // 0x1a51d0: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51D4u;
        goto label_1a51d4;
    }
    ctx->pc = 0x1A51CCu;
    {
        const bool branch_taken_0x1a51cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51CCu;
        // 0x1a51d0: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51cc) {
            ctx->pc = 0x1A5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5190;
        }
    }
    ctx->pc = 0x1A51D4u;
label_1a51d4:
    // 0x1a51d4: 0xc069a9c  jal         func_1A6A70
label_1a51d8:
    if (ctx->pc == 0x1A51D8u) {
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51DCu;
        goto label_1a51dc;
    }
    ctx->pc = 0x1A51D4u;
    SET_GPR_U32(ctx, 31, 0x1A51DCu);
    ctx->pc = 0x1A51D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51D4u;
    // 0x1a51d8: 0x26640930  addiu       $a0, $s3, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A51D4u, 0x1A51DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51DCu;
label_1a51dc:
    // 0x1a51dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a51e0:
    // 0x1a51e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a51e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a51e4:
    // 0x1a51e4: 0x24a504f8  addiu       $a1, $a1, 0x4F8
    ctx->pc = 0x1a51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1272));
label_1a51e8:
    // 0x1a51e8: 0xc064a88  jal         func_192A20
label_1a51ec:
    if (ctx->pc == 0x1A51ECu) {
        ctx->pc = 0x1A51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51E8u;
        // 0x1a51ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F0u;
        goto label_1a51f0;
    }
    ctx->pc = 0x1A51E8u;
    SET_GPR_U32(ctx, 31, 0x1A51F0u);
    ctx->pc = 0x1A51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51E8u;
    // 0x1a51ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A51E8u, 0x1A51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0xc063e14  jal         func_18F850
label_1a51f4:
    if (ctx->pc == 0x1A51F4u) {
        ctx->pc = 0x1A51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51F0u;
        // 0x1a51f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F8u;
        goto label_1a51f8;
    }
    ctx->pc = 0x1A51F0u;
    SET_GPR_U32(ctx, 31, 0x1A51F8u);
    ctx->pc = 0x1A51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51F0u;
    // 0x1a51f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A51F0u, 0x1A51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F8u;
label_1a51f8:
    // 0x1a51f8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1a51fc:
    if (ctx->pc == 0x1A51FCu) {
        ctx->pc = 0x1A5200u;
        goto label_fallthrough_0x1a51f8;
    }
    ctx->pc = 0x1A51F8u;
    {
        const bool branch_taken_0x1a51f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a51f8) {
            ctx->pc = 0x1A5328u;
            return;
        }
    }
label_fallthrough_0x1a51f8:
    ctx->pc = 0x1A5200u;
}
