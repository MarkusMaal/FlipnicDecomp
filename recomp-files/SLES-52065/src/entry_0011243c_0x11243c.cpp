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

// Function: entry_0011243c
// Address: 0x11243c - 0x112480
void entry_0011243c_0x11243c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011243c_0x11243c");
#endif

    switch (ctx->pc) {
        case 0x112470u: goto label_112470;
        default: break;
    }

    ctx->pc = 0x11243cu;

label_11243c:
    // 0x11243c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x11243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112440:
    // 0x112440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x112440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_112444:
    // 0x112444: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112448:
    // 0x112448: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11244c:
    // 0x11244c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11244cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112450:
    // 0x112450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112454:
    // 0x112454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112458:
    // 0x112458: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11245c:
    // 0x11245c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_112460:
    // 0x112460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112464:
    // 0x112464: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x112464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_112468:
    // 0x112468: 0x320f809  jalr        $t9
label_11246c:
    if (ctx->pc == 0x11246Cu) {
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112470u;
        goto label_112470;
    }
    ctx->pc = 0x112468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112470u);
        ctx->pc = 0x11246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112468u;
        // 0x11246c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112468u, 0x112470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112470u;
label_112470:
    // 0x112470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_112474:
    // 0x112474: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x112474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112478:
    // 0x112478: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11247c:
    if (ctx->pc == 0x11247Cu) {
        ctx->pc = 0x11247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112478u;
        // 0x11247c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112480u;
        goto label_fallthrough_0x112478;
    }
    ctx->pc = 0x112478u;
    {
        const bool branch_taken_0x112478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112478u;
        // 0x11247c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112478) {
            ctx->pc = 0x11243Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11243c;
        }
    }
label_fallthrough_0x112478:
    ctx->pc = 0x112480u;
}
