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

// Function: entry_001e643c
// Address: 0x1e643c - 0x1e64a0
void entry_001e643c_0x1e643c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e643c_0x1e643c");
#endif

    switch (ctx->pc) {
        case 0x1e646cu: goto label_1e646c;
        default: break;
    }

    ctx->pc = 0x1e643cu;

label_1e643c:
    // 0x1e643c: 0x0  nop
    ctx->pc = 0x1e643cu;
    // NOP
label_1e6440:
    // 0x1e6440: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e6444:
    // 0x1e6444: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1e6444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e6448:
    // 0x1e6448: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x1e6448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_1e644c:
    // 0x1e644c: 0xd23821  addu        $a3, $a2, $s2
    ctx->pc = 0x1e644cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e6450:
    // 0x1e6450: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e6454:
    // 0x1e6454: 0x27a9006e  addiu       $t1, $sp, 0x6E
    ctx->pc = 0x1e6454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
label_1e6458:
    // 0x1e6458: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x1e6458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e645c:
    // 0x1e645c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e645cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6460:
    // 0x1e6460: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6464:
    // 0x1e6464: 0x320f809  jalr        $t9
label_1e6468:
    if (ctx->pc == 0x1E6468u) {
        ctx->pc = 0x1E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6464u;
        // 0x1e6468: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E646Cu;
        goto label_1e646c;
    }
    ctx->pc = 0x1E6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E646Cu);
        ctx->pc = 0x1E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6464u;
        // 0x1e6468: 0x27ab0068  addiu       $t3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6464u, 0x1E646Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E646Cu;
label_1e646c:
    // 0x1e646c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e6470:
    // 0x1e6470: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1e6474:
    if (ctx->pc == 0x1E6474u) {
        ctx->pc = 0x1E6478u;
        goto label_1e6478;
    }
    ctx->pc = 0x1E6470u;
    {
        const bool branch_taken_0x1e6470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6470) {
            ctx->pc = 0x1E64B4u;
            return;
        }
    }
    ctx->pc = 0x1E6478u;
label_1e6478:
    // 0x1e6478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e647c:
    // 0x1e647c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e6480:
    if (ctx->pc == 0x1E6480u) {
        ctx->pc = 0x1E6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E647Cu;
        // 0x1e6480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6484u;
        goto label_1e6484;
    }
    ctx->pc = 0x1E647Cu;
    {
        const bool branch_taken_0x1e647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E647Cu;
        // 0x1e6480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e647c) {
            ctx->pc = 0x1E64ACu;
            return;
        }
    }
    ctx->pc = 0x1E6484u;
label_1e6484:
    // 0x1e6484: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e6488:
    if (ctx->pc == 0x1E6488u) {
        ctx->pc = 0x1E648Cu;
        goto label_1e648c;
    }
    ctx->pc = 0x1E6484u;
    {
        const bool branch_taken_0x1e6484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6484) {
            ctx->pc = 0x1E64A0u;
            return;
        }
    }
    ctx->pc = 0x1E648Cu;
label_1e648c:
    // 0x1e648c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6490:
    // 0x1e6490: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6494:
    if (ctx->pc == 0x1E6494u) {
        ctx->pc = 0x1E6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6490u;
        // 0x1e6494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6498u;
        goto label_1e6498;
    }
    ctx->pc = 0x1E6490u;
    {
        const bool branch_taken_0x1e6490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6490u;
        // 0x1e6494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6490) {
            ctx->pc = 0x1E64A4u;
            return;
        }
    }
    ctx->pc = 0x1E6498u;
label_1e6498:
    // 0x1e6498: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e649c:
    if (ctx->pc == 0x1E649Cu) {
        ctx->pc = 0x1E64A0u;
        goto label_fallthrough_0x1e6498;
    }
    ctx->pc = 0x1E6498u;
    {
        const bool branch_taken_0x1e6498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6498) {
            ctx->pc = 0x1E64B4u;
            return;
        }
    }
label_fallthrough_0x1e6498:
    ctx->pc = 0x1E64A0u;
}
