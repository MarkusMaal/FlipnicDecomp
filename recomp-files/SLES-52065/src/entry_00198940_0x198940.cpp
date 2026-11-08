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

// Function: entry_00198940
// Address: 0x198940 - 0x198978
void entry_00198940_0x198940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198940_0x198940");
#endif

    switch (ctx->pc) {
        case 0x198964u: goto label_198964;
        default: break;
    }

    ctx->pc = 0x198940u;

label_198940:
    // 0x198940: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_198944:
    // 0x198944: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198948:
    // 0x198948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19894c:
    // 0x19894c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198950:
    // 0x198950: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_198954:
    // 0x198954: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_198958:
    // 0x198958: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x198958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_19895c:
    // 0x19895c: 0x320f809  jalr        $t9
label_198960:
    if (ctx->pc == 0x198960u) {
        ctx->pc = 0x198964u;
        goto label_198964;
    }
    ctx->pc = 0x19895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198964u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19895Cu, 0x198964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198964u;
label_198964:
    // 0x198964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198968:
    // 0x198968: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_19896c:
    if (ctx->pc == 0x19896Cu) {
        ctx->pc = 0x198970u;
        goto label_198970;
    }
    ctx->pc = 0x198968u;
    {
        const bool branch_taken_0x198968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198968) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
    ctx->pc = 0x198970u;
label_198970:
    // 0x198970: 0x10000018  b           . + 4 + (0x18 << 2)
label_198974:
    if (ctx->pc == 0x198974u) {
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198978u;
        goto label_fallthrough_0x198970;
    }
    ctx->pc = 0x198970u;
    {
        const bool branch_taken_0x198970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198970) {
            ctx->pc = 0x1989D4u;
            return;
        }
    }
label_fallthrough_0x198970:
    ctx->pc = 0x198978u;
}
