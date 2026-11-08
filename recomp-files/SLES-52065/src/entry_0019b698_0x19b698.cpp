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

// Function: entry_0019b698
// Address: 0x19b698 - 0x19b6d4
void entry_0019b698_0x19b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b698_0x19b698");
#endif

    switch (ctx->pc) {
        case 0x19b6acu: goto label_19b6ac;
        case 0x19b6c0u: goto label_19b6c0;
        case 0x19b6ccu: goto label_19b6cc;
        default: break;
    }

    ctx->pc = 0x19b698u;

label_19b698:
    // 0x19b698: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b69c:
    // 0x19b69c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b6a0:
    // 0x19b6a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19b6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19b6a4:
    // 0x19b6a4: 0x320f809  jalr        $t9
label_19b6a8:
    if (ctx->pc == 0x19B6A8u) {
        ctx->pc = 0x19B6ACu;
        goto label_19b6ac;
    }
    ctx->pc = 0x19B6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B6A4u, 0x19B6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B6ACu;
label_19b6ac:
    // 0x19b6ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b6b0:
    // 0x19b6b0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_19b6b4:
    if (ctx->pc == 0x19B6B4u) {
        ctx->pc = 0x19B6B8u;
        goto label_19b6b8;
    }
    ctx->pc = 0x19B6B0u;
    {
        const bool branch_taken_0x19b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b6b0) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B6B8u;
label_19b6b8:
    // 0x19b6b8: 0xc04be08  jal         func_12F820
label_19b6bc:
    if (ctx->pc == 0x19B6BCu) {
        ctx->pc = 0x19B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B8u;
        // 0x19b6bc: 0x8e240784  lw          $a0, 0x784($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6C0u;
        goto label_19b6c0;
    }
    ctx->pc = 0x19B6B8u;
    SET_GPR_U32(ctx, 31, 0x19B6C0u);
    ctx->pc = 0x19B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6B8u;
    // 0x19b6bc: 0x8e240784  lw          $a0, 0x784($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x19B6B8u, 0x19B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6C0u;
label_19b6c0:
    // 0x19b6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b6c4:
    // 0x19b6c4: 0xc063e08  jal         func_18F820
label_19b6c8:
    if (ctx->pc == 0x19B6C8u) {
        ctx->pc = 0x19B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6C4u;
        // 0x19b6c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6CCu;
        goto label_19b6cc;
    }
    ctx->pc = 0x19B6C4u;
    SET_GPR_U32(ctx, 31, 0x19B6CCu);
    ctx->pc = 0x19B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6C4u;
    // 0x19b6c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B6C4u, 0x19B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6CCu;
label_19b6cc:
    // 0x19b6cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_19b6d0:
    if (ctx->pc == 0x19B6D0u) {
        ctx->pc = 0x19B6D4u;
        goto label_fallthrough_0x19b6cc;
    }
    ctx->pc = 0x19B6CCu;
    {
        const bool branch_taken_0x19b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6cc) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
label_fallthrough_0x19b6cc:
    ctx->pc = 0x19B6D4u;
}
