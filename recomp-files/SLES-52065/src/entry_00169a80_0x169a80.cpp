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

// Function: entry_00169a80
// Address: 0x169a80 - 0x169aa8
void entry_00169a80_0x169a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a80_0x169a80");
#endif

    ctx->pc = 0x169a80u;

label_169a80:
    // 0x169a80: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_169a84:
    // 0x169a84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_169a88:
    // 0x169a88: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x169a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
label_169a8c:
    // 0x169a8c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x169a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_169a90:
    // 0x169a90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_169a94:
    if (ctx->pc == 0x169A94u) {
        ctx->pc = 0x169A98u;
        goto label_169a98;
    }
    ctx->pc = 0x169A90u;
    {
        const bool branch_taken_0x169a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169a90) {
            ctx->pc = 0x169AA8u;
            return;
        }
    }
    ctx->pc = 0x169A98u;
label_169a98:
    // 0x169a98: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169a9c:
    // 0x169a9c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169aa0:
    // 0x169aa0: 0x320f809  jalr        $t9
label_169aa4:
    if (ctx->pc == 0x169AA4u) {
        ctx->pc = 0x169AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA0u;
        // 0x169aa4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AA8u;
        goto label_fallthrough_0x169aa0;
    }
    ctx->pc = 0x169AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169AA8u);
        ctx->pc = 0x169AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA0u;
        // 0x169aa4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AA0u, 0x169AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x169aa0:
    ctx->pc = 0x169AA8u;
}
