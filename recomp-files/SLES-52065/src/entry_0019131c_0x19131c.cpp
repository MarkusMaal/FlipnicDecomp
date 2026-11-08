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

// Function: entry_0019131c
// Address: 0x19131c - 0x19134c
void entry_0019131c_0x19131c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019131c_0x19131c");
#endif

    switch (ctx->pc) {
        case 0x19133cu: goto label_19133c;
        default: break;
    }

    ctx->pc = 0x19131cu;

label_19131c:
    // 0x19131c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191320:
    // 0x191320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191324:
    // 0x191324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191328:
    // 0x191328: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19132c:
    // 0x19132c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191330:
    // 0x191330: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191334:
    // 0x191334: 0x320f809  jalr        $t9
label_191338:
    if (ctx->pc == 0x191338u) {
        ctx->pc = 0x19133Cu;
        goto label_19133c;
    }
    ctx->pc = 0x191334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19133Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191334u, 0x19133Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19133Cu;
label_19133c:
    // 0x19133c: 0x120200d6  beq         $s0, $v0, . + 4 + (0xD6 << 2)
label_191340:
    if (ctx->pc == 0x191340u) {
        ctx->pc = 0x191344u;
        goto label_191344;
    }
    ctx->pc = 0x19133Cu;
    {
        const bool branch_taken_0x19133c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19133c) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191344u;
label_191344:
    // 0x191344: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_191348:
    if (ctx->pc == 0x191348u) {
        ctx->pc = 0x191348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191344u;
        // 0x191348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19134Cu;
        goto label_fallthrough_0x191344;
    }
    ctx->pc = 0x191344u;
    {
        const bool branch_taken_0x191344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191344u;
        // 0x191348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191344) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
label_fallthrough_0x191344:
    ctx->pc = 0x19134Cu;
}
