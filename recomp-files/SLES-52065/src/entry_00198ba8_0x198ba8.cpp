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

// Function: entry_00198ba8
// Address: 0x198ba8 - 0x198bd4
void entry_00198ba8_0x198ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ba8_0x198ba8");
#endif

    switch (ctx->pc) {
        case 0x198bb8u: goto label_198bb8;
        case 0x198bccu: goto label_198bcc;
        default: break;
    }

    ctx->pc = 0x198ba8u;

label_198ba8:
    // 0x198ba8: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_198bac:
    // 0x198bac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_198bb0:
    // 0x198bb0: 0x320f809  jalr        $t9
label_198bb4:
    if (ctx->pc == 0x198BB4u) {
        ctx->pc = 0x198BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BB0u;
        // 0x198bb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BB8u;
        goto label_198bb8;
    }
    ctx->pc = 0x198BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198BB8u);
        ctx->pc = 0x198BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BB0u;
        // 0x198bb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198BB0u, 0x198BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198BB8u;
label_198bb8:
    // 0x198bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198bbc:
    // 0x198bbc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_198bc0:
    if (ctx->pc == 0x198BC0u) {
        ctx->pc = 0x198BC4u;
        goto label_198bc4;
    }
    ctx->pc = 0x198BBCu;
    {
        const bool branch_taken_0x198bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198bbc) {
            ctx->pc = 0x198BD4u;
            return;
        }
    }
    ctx->pc = 0x198BC4u;
label_198bc4:
    // 0x198bc4: 0xc04be08  jal         func_12F820
label_198bc8:
    if (ctx->pc == 0x198BC8u) {
        ctx->pc = 0x198BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BC4u;
        // 0x198bc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BCCu;
        goto label_198bcc;
    }
    ctx->pc = 0x198BC4u;
    SET_GPR_U32(ctx, 31, 0x198BCCu);
    ctx->pc = 0x198BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BC4u;
    // 0x198bc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x198BC4u, 0x198BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BCCu;
label_198bcc:
    // 0x198bcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_198bd0:
    if (ctx->pc == 0x198BD0u) {
        ctx->pc = 0x198BD4u;
        goto label_fallthrough_0x198bcc;
    }
    ctx->pc = 0x198BCCu;
    {
        const bool branch_taken_0x198bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198bcc) {
            ctx->pc = 0x198BDCu;
            return;
        }
    }
label_fallthrough_0x198bcc:
    ctx->pc = 0x198BD4u;
}
