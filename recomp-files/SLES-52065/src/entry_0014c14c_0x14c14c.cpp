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

// Function: entry_0014c14c
// Address: 0x14c14c - 0x14c18c
void entry_0014c14c_0x14c14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c14c_0x14c14c");
#endif

    ctx->pc = 0x14c14cu;

label_14c14c:
    // 0x14c14c: 0x0  nop
    ctx->pc = 0x14c14cu;
    // NOP
label_14c150:
    // 0x14c150: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_14c154:
    // 0x14c154: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x14c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_14c158:
    // 0x14c158: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14c15c:
    // 0x14c15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c160:
    // 0x14c160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c164:
    // 0x14c164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c168:
    // 0x14c168: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
label_14c16c:
    if (ctx->pc == 0x14C16Cu) {
        ctx->pc = 0x14C170u;
        goto label_14c170;
    }
    ctx->pc = 0x14C168u;
    {
        const bool branch_taken_0x14c168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c168) {
            ctx->pc = 0x14C118u;
            return;
        }
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_14c174:
    // 0x14c174: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_14c178:
    if (ctx->pc == 0x14C178u) {
        ctx->pc = 0x14C17Cu;
        goto label_14c17c;
    }
    ctx->pc = 0x14C174u;
    {
        const bool branch_taken_0x14c174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c174) {
            ctx->pc = 0x14C18Cu;
            return;
        }
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c180:
    // 0x14c180: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14c180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_14c184:
    // 0x14c184: 0x320f809  jalr        $t9
label_14c188:
    if (ctx->pc == 0x14C188u) {
        ctx->pc = 0x14C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C184u;
        // 0x14c188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C18Cu;
        goto label_fallthrough_0x14c184;
    }
    ctx->pc = 0x14C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C18Cu);
        ctx->pc = 0x14C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C184u;
        // 0x14c188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C184u, 0x14C18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14c184:
    ctx->pc = 0x14C18Cu;
}
