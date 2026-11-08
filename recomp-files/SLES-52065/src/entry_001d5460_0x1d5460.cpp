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

// Function: entry_001d5460
// Address: 0x1d5460 - 0x1d5498
void entry_001d5460_0x1d5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5460_0x1d5460");
#endif

    switch (ctx->pc) {
        case 0x1d548cu: goto label_1d548c;
        default: break;
    }

    ctx->pc = 0x1d5460u;

label_1d5460:
    // 0x1d5460: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_1d5464:
    // 0x1d5464: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_1d5468:
    if (ctx->pc == 0x1D5468u) {
        ctx->pc = 0x1D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5464u;
        // 0x1d5468: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D546Cu;
        goto label_1d546c;
    }
    ctx->pc = 0x1D5464u;
    {
        const bool branch_taken_0x1d5464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5464u;
        // 0x1d5468: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5464) {
            ctx->pc = 0x1D5498u;
            return;
        }
    }
    ctx->pc = 0x1D546Cu;
label_1d546c:
    // 0x1d546c: 0x8ec2054c  lw          $v0, 0x54C($s6)
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
label_1d5470:
    // 0x1d5470: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d5470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5474:
    // 0x1d5474: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1d5478:
    // 0x1d5478: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d547c:
    // 0x1d547c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1d547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1d5480:
    // 0x1d5480: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5484:
    // 0x1d5484: 0x60f809  jalr        $v1
label_1d5488:
    if (ctx->pc == 0x1D5488u) {
        ctx->pc = 0x1D548Cu;
        goto label_1d548c;
    }
    ctx->pc = 0x1D5484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D548Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5484u, 0x1D548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D548Cu;
label_1d548c:
    // 0x1d548c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d5490:
    if (ctx->pc == 0x1D5490u) {
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D548Cu;
        // 0x1d5490: 0xae330248  sw          $s3, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5494u;
        goto label_1d5494;
    }
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D548Cu;
        // 0x1d5490: 0xae330248  sw          $s3, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D54E8u;
            return;
        }
    }
    ctx->pc = 0x1D5494u;
label_1d5494:
    // 0x1d5494: 0x0  nop
    ctx->pc = 0x1d5494u;
    // NOP
    ctx->pc = 0x1d5498u;
}
