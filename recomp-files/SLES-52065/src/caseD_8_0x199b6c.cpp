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

// Function: caseD_8
// Address: 0x199b6c - 0x199ba8
void caseD_8_0x199b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x199b6c");
#endif

    switch (ctx->pc) {
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        case 0x199b84u: goto label_199b84;
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        default: break;
    }

    ctx->pc = 0x199b6cu;

label_199b6c:
    // 0x199b6c: 0x0  nop
    ctx->pc = 0x199b6cu;
    // NOP
label_199b70:
    // 0x199b70: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b74:
    // 0x199b74: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x199b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_199b78:
    // 0x199b78: 0x320f809  jalr        $t9
label_199b7c:
    if (ctx->pc == 0x199B7Cu) {
        ctx->pc = 0x199B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B78u;
        // 0x199b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B80u;
        goto label_199b80;
    }
    ctx->pc = 0x199B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B80u);
        ctx->pc = 0x199B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B78u;
        // 0x199b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B78u, 0x199B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B80u;
label_199b80:
    // 0x199b80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_199b84:
    if (ctx->pc == 0x199B84u) {
        ctx->pc = 0x199B88u;
        goto label_199b88;
    }
    ctx->pc = 0x199B80u;
    {
        const bool branch_taken_0x199b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199b80) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199B88u;
label_199b88:
    // 0x199b88: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b8c:
    // 0x199b8c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199b90:
    // 0x199b90: 0x320f809  jalr        $t9
label_199b94:
    if (ctx->pc == 0x199B94u) {
        ctx->pc = 0x199B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B90u;
        // 0x199b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B98u;
        goto label_199b98;
    }
    ctx->pc = 0x199B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B98u);
        ctx->pc = 0x199B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B90u;
        // 0x199b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B90u, 0x199B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B98u;
label_199b98:
    // 0x199b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199b9c:
    // 0x199b9c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_199ba0:
    if (ctx->pc == 0x199BA0u) {
        ctx->pc = 0x199BA4u;
        goto label_199ba4;
    }
    ctx->pc = 0x199B9Cu;
    {
        const bool branch_taken_0x199b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199b9c) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199BA4u;
label_199ba4:
    // 0x199ba4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x199ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x199ba8u;
}
