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

// Function: entry_0016e480
// Address: 0x16e480 - 0x16e4d0
void entry_0016e480_0x16e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e480_0x16e480");
#endif

    ctx->pc = 0x16e480u;

label_16e480:
    // 0x16e480: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x16e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_16e484:
    // 0x16e484: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16e488:
    // 0x16e488: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16e48c:
    // 0x16e48c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e490:
    // 0x16e490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16e494:
    // 0x16e494: 0x84630080  lh          $v1, 0x80($v1)
    ctx->pc = 0x16e494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_16e498:
    // 0x16e498: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_16e49c:
    if (ctx->pc == 0x16E49Cu) {
        ctx->pc = 0x16E4A0u;
        goto label_16e4a0;
    }
    ctx->pc = 0x16E498u;
    {
        const bool branch_taken_0x16e498 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e498) {
            ctx->pc = 0x16E4D0u;
            return;
        }
    }
    ctx->pc = 0x16E4A0u;
label_16e4a0:
    // 0x16e4a0: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16e4a4:
    // 0x16e4a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16e4a8:
    // 0x16e4a8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16e4ac:
    // 0x16e4ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e4b0:
    // 0x16e4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4b4:
    // 0x16e4b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e4b8:
    // 0x16e4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e4bc:
    // 0x16e4bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e4c0:
    // 0x16e4c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e4c4:
    // 0x16e4c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e4c8:
    // 0x16e4c8: 0x320f809  jalr        $t9
label_16e4cc:
    if (ctx->pc == 0x16E4CCu) {
        ctx->pc = 0x16E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C8u;
        // 0x16e4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4D0u;
        goto label_fallthrough_0x16e4c8;
    }
    ctx->pc = 0x16E4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E4D0u);
        ctx->pc = 0x16E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C8u;
        // 0x16e4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E4C8u, 0x16E4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16e4c8:
    ctx->pc = 0x16E4D0u;
}
