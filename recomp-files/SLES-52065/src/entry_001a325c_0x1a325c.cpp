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

// Function: entry_001a325c
// Address: 0x1a325c - 0x1a32b8
void entry_001a325c_0x1a325c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a325c_0x1a325c");
#endif

    switch (ctx->pc) {
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3288u: goto label_1a3288;
        default: break;
    }

    ctx->pc = 0x1a325cu;

label_1a325c:
    // 0x1a325c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a325cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a3260:
    // 0x1a3260: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a3260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a3264:
    // 0x1a3264: 0xc057040  jal         func_15C100
label_1a3268:
    if (ctx->pc == 0x1A3268u) {
        ctx->pc = 0x1A3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3264u;
        // 0x1a3268: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A326Cu;
        goto label_1a326c;
    }
    ctx->pc = 0x1A3264u;
    SET_GPR_U32(ctx, 31, 0x1A326Cu);
    ctx->pc = 0x1A3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3264u;
    // 0x1a3268: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A3264u, 0x1A326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A326Cu;
label_1a326c:
    // 0x1a326c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a326cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a3270:
    // 0x1a3270: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a3274:
    // 0x1a3274: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1a3278:
    // 0x1a3278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a327c:
    // 0x1a327c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a3280:
    // 0x1a3280: 0xc043b94  jal         func_10EE50
label_1a3284:
    if (ctx->pc == 0x1A3284u) {
        ctx->pc = 0x1A3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3280u;
        // 0x1a3284: 0x8c642cd8  lw          $a0, 0x2CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3288u;
        goto label_1a3288;
    }
    ctx->pc = 0x1A3280u;
    SET_GPR_U32(ctx, 31, 0x1A3288u);
    ctx->pc = 0x1A3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3280u;
    // 0x1a3284: 0x8c642cd8  lw          $a0, 0x2CD8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE50u, 0x1A3280u, 0x1A3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3288u;
label_1a3288:
    // 0x1a3288: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a3288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a328c:
    // 0x1a328c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a3290:
    // 0x1a3290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3294:
    // 0x1a3294: 0x1083fff1  beq         $a0, $v1, . + 4 + (-0xF << 2)
label_1a3298:
    if (ctx->pc == 0x1A3298u) {
        ctx->pc = 0x1A329Cu;
        goto label_1a329c;
    }
    ctx->pc = 0x1A3294u;
    {
        const bool branch_taken_0x1a3294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3294) {
            ctx->pc = 0x1A325Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a325c;
        }
    }
    ctx->pc = 0x1A329Cu;
label_1a329c:
    // 0x1a329c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1a32a0:
    if (ctx->pc == 0x1A32A0u) {
        ctx->pc = 0x1A32A4u;
        goto label_1a32a4;
    }
    ctx->pc = 0x1A329Cu;
    {
        const bool branch_taken_0x1a329c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a329c) {
            ctx->pc = 0x1A32B8u;
            return;
        }
    }
    ctx->pc = 0x1A32A4u;
label_1a32a4:
    // 0x1a32a4: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a32a8:
    // 0x1a32a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a32a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a32ac:
    // 0x1a32ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a32acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a32b0:
    // 0x1a32b0: 0x320f809  jalr        $t9
label_1a32b4:
    if (ctx->pc == 0x1A32B4u) {
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32B8u;
        goto label_fallthrough_0x1a32b0;
    }
    ctx->pc = 0x1A32B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A32B8u);
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A32B0u, 0x1A32B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a32b0:
    ctx->pc = 0x1A32B8u;
}
