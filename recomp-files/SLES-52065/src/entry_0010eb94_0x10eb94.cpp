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

// Function: entry_0010eb94
// Address: 0x10eb94 - 0x10ebd0
void entry_0010eb94_0x10eb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eb94_0x10eb94");
#endif

    switch (ctx->pc) {
        case 0x10ebccu: goto label_10ebcc;
        default: break;
    }

    ctx->pc = 0x10eb94u;

label_10eb94:
    // 0x10eb94: 0x8e440220  lw          $a0, 0x220($s2)
    ctx->pc = 0x10eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10eb98:
    // 0x10eb98: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10eb9c:
    // 0x10eb9c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10eba0:
    // 0x10eba0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x10eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_10eba4:
    // 0x10eba4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10eba8:
    // 0x10eba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ebac:
    // 0x10ebac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ebacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ebb0:
    // 0x10ebb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ebb4:
    // 0x10ebb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ebb8:
    // 0x10ebb8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ebbc:
    // 0x10ebbc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10ebbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10ebc0:
    // 0x10ebc0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ebc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ebc4:
    // 0x10ebc4: 0x320f809  jalr        $t9
label_10ebc8:
    if (ctx->pc == 0x10EBC8u) {
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EBCCu;
        goto label_10ebcc;
    }
    ctx->pc = 0x10EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EBCCu);
        ctx->pc = 0x10EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC4u;
        // 0x10ebc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EBC4u, 0x10EBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EBCCu;
label_10ebcc:
    // 0x10ebcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ebccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10ebd0u;
}
