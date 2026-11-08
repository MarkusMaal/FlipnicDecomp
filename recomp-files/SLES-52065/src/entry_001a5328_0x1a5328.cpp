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

// Function: entry_001a5328
// Address: 0x1a5328 - 0x1a5380
void entry_001a5328_0x1a5328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5328_0x1a5328");
#endif

    switch (ctx->pc) {
        case 0x1a5330u: goto label_1a5330;
        default: break;
    }

    ctx->pc = 0x1a5328u;

label_1a5328:
    // 0x1a5328: 0xc067f08  jal         func_19FC20
label_1a532c:
    if (ctx->pc == 0x1A532Cu) {
        ctx->pc = 0x1A5330u;
        goto label_1a5330;
    }
    ctx->pc = 0x1A5328u;
    SET_GPR_U32(ctx, 31, 0x1A5330u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A5328u, 0x1A5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5330u;
label_1a5330:
    // 0x1a5330: 0xae620750  sw          $v0, 0x750($s3)
    ctx->pc = 0x1a5330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1872), GPR_U32(ctx, 2));
label_1a5334:
    // 0x1a5334: 0x8e620750  lw          $v0, 0x750($s3)
    ctx->pc = 0x1a5334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_1a5338:
    // 0x1a5338: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a533c:
    if (ctx->pc == 0x1A533Cu) {
        ctx->pc = 0x1A5340u;
        goto label_1a5340;
    }
    ctx->pc = 0x1A5338u;
    {
        const bool branch_taken_0x1a5338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5338) {
            ctx->pc = 0x1A538Cu;
            return;
        }
    }
    ctx->pc = 0x1A5340u;
label_1a5340:
    // 0x1a5340: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1a5344:
    // 0x1a5344: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a5348:
    // 0x1a5348: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1a534c:
    if (ctx->pc == 0x1A534Cu) {
        ctx->pc = 0x1A5350u;
        goto label_1a5350;
    }
    ctx->pc = 0x1A5348u;
    {
        const bool branch_taken_0x1a5348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5348) {
            ctx->pc = 0x1A538Cu;
            return;
        }
    }
    ctx->pc = 0x1A5350u;
label_1a5350:
    // 0x1a5350: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5354:
    // 0x1a5354: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_1a5358:
    // 0x1a5358: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
label_1a535c:
    // 0x1a535c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a5360:
    if (ctx->pc == 0x1A5360u) {
        ctx->pc = 0x1A5364u;
        goto label_1a5364;
    }
    ctx->pc = 0x1A535Cu;
    {
        const bool branch_taken_0x1a535c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a535c) {
            ctx->pc = 0x1A5380u;
            return;
        }
    }
    ctx->pc = 0x1A5364u;
label_1a5364:
    // 0x1a5364: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a5368:
    // 0x1a5368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a536c:
    // 0x1a536c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1a536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_1a5370:
    // 0x1a5370: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a5374:
    // 0x1a5374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a5374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a5378:
    // 0x1a5378: 0x320f809  jalr        $t9
label_1a537c:
    if (ctx->pc == 0x1A537Cu) {
        ctx->pc = 0x1A5380u;
        goto label_fallthrough_0x1a5378;
    }
    ctx->pc = 0x1A5378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5378u, 0x1A5380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a5378:
    ctx->pc = 0x1A5380u;
}
