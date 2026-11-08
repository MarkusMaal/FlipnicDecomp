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

// Function: entry_0010ebec
// Address: 0x10ebec - 0x10ec20
void entry_0010ebec_0x10ebec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ebec_0x10ebec");
#endif

    switch (ctx->pc) {
        case 0x10ec18u: goto label_10ec18;
        default: break;
    }

    ctx->pc = 0x10ebecu;

label_10ebec:
    // 0x10ebec: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10ebf0:
    // 0x10ebf0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ebf4:
    // 0x10ebf4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10ebf8:
    // 0x10ebf8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10ebfc:
    // 0x10ebfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ec00:
    // 0x10ec00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ec04:
    // 0x10ec04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10ec08:
    // 0x10ec08: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10ec0c:
    // 0x10ec0c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ec0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ec10:
    // 0x10ec10: 0x320f809  jalr        $t9
label_10ec14:
    if (ctx->pc == 0x10EC14u) {
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EC18u;
        goto label_10ec18;
    }
    ctx->pc = 0x10EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EC18u);
        ctx->pc = 0x10EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC10u;
        // 0x10ec14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC10u, 0x10EC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EC18u;
label_10ec18:
    // 0x10ec18: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x10ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_10ec1c:
    // 0x10ec1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10ec20u;
}
