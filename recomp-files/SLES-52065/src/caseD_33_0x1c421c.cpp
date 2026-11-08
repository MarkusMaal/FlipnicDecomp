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

// Function: caseD_33
// Address: 0x1c421c - 0x1c426c
void caseD_33_0x1c421c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_33_0x1c421c");
#endif

    switch (ctx->pc) {
        case 0x1c4228u: goto label_1c4228;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4240u: goto label_1c4240;
        default: break;
    }

    ctx->pc = 0x1c421cu;

    // 0x1c421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4220: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4220u;
    SET_GPR_U32(ctx, 31, 0x1C4228u);
    ctx->pc = 0x1C4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4220u;
    // 0x1c4224: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4220u, 0x1C4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4228u;
label_1c4228:
    // 0x1c4228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c422c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C422Cu;
    SET_GPR_U32(ctx, 31, 0x1C4234u);
    ctx->pc = 0x1C4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C422Cu;
    // 0x1c4230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C422Cu, 0x1C4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4234u;
label_1c4234:
    // 0x1c4234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4238: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4238u;
    SET_GPR_U32(ctx, 31, 0x1C4240u);
    ctx->pc = 0x1C423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4238u;
    // 0x1c423c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4238u, 0x1C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4240u;
label_1c4240:
    // 0x1c4240: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4244: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4248: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4248u;
    {
        const bool branch_taken_0x1c4248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4248) {
            ctx->pc = 0x1C4270u;
            return;
        }
    }
    ctx->pc = 0x1C4250u;
    // 0x1c4250: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c4250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c4254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4258: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4258u;
    {
        const bool branch_taken_0x1c4258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4258u;
        // 0x1c425c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4258) {
            ctx->pc = 0x1C426Cu;
            return;
        }
    }
    ctx->pc = 0x1C4260u;
    // 0x1c4260: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c4264: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4264u;
    {
        const bool branch_taken_0x1c4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4264u;
        // 0x1c4268: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4264) {
            ctx->pc = 0x1C4270u;
            return;
        }
    }
    ctx->pc = 0x1C426Cu;
}
