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

// Function: FUN_00133440
// Address: 0x133440 - 0x1334b4
void FUN_00133440_0x133440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133440_0x133440");
#endif

    switch (ctx->pc) {
        case 0x133464u: goto label_133464;
        default: break;
    }

    ctx->pc = 0x133440u;

    // 0x133440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13344c: 0x93828524  lbu         $v0, -0x7ADC($gp)
    ctx->pc = 0x13344cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x133450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133450u;
    {
        const bool branch_taken_0x133450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133450u;
        // 0x133454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133450) {
            ctx->pc = 0x133464u;
            goto label_133464;
        }
    }
    ctx->pc = 0x133458u;
    // 0x133458: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x133458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13345c: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x13345Cu;
    SET_GPR_U32(ctx, 31, 0x133464u);
    ctx->pc = 0x133460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13345Cu;
    // 0x133460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x13345Cu, 0x133464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133464u;
label_133464:
    // 0x133464: 0x83828534  lb          $v0, -0x7ACC($gp)
    ctx->pc = 0x133464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935860)));
    // 0x133468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133468u;
    {
        const bool branch_taken_0x133468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133468u;
        // 0x13346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133468) {
            ctx->pc = 0x133478u;
            goto label_133478;
        }
    }
    ctx->pc = 0x133470u;
    // 0x133470: 0xaf808530  sw          $zero, -0x7AD0($gp)
    ctx->pc = 0x133470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 0));
    // 0x133474: 0xa3828534  sb          $v0, -0x7ACC($gp)
    ctx->pc = 0x133474u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935860), (uint8_t)GPR_U32(ctx, 2));
label_133478:
    // 0x133478: 0x8f838528  lw          $v1, -0x7AD8($gp)
    ctx->pc = 0x133478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13347c: 0x8f828530  lw          $v0, -0x7AD0($gp)
    ctx->pc = 0x13347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x133480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133484: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133484u;
    {
        const bool branch_taken_0x133484 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x133488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133484u;
        // 0x133488: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133484) {
            ctx->pc = 0x133498u;
            goto label_133498;
        }
    }
    ctx->pc = 0x13348Cu;
    // 0x13348c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13348Cu;
    {
        const bool branch_taken_0x13348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13348c) {
            ctx->pc = 0x133498u;
            goto label_133498;
        }
    }
    ctx->pc = 0x133494u;
    // 0x133494: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_133498:
    // 0x133498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13349c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1334a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1334a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1334a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1334a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1334a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1334ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1334ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1334B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334ACu;
        // 0x1334b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1334ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334B4u;
}
