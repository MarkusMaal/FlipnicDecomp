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

// Function: entry_00114c34
// Address: 0x114c34 - 0x114c74
void entry_00114c34_0x114c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c34_0x114c34");
#endif

    switch (ctx->pc) {
        case 0x114c58u: goto label_114c58;
        default: break;
    }

    ctx->pc = 0x114c34u;

label_114c34:
    // 0x114c34: 0x9382827c  lbu         $v0, -0x7D84($gp)
    ctx->pc = 0x114c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935164)));
label_114c38:
    // 0x114c38: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x114c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114c3c:
    // 0x114c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114c40:
    // 0x114c40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x114c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_114c44:
    // 0x114c44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114c48:
    // 0x114c48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114c4c:
    // 0x114c4c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114c50:
    // 0x114c50: 0x320f809  jalr        $t9
label_114c54:
    if (ctx->pc == 0x114C54u) {
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C50u;
        // 0x114c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C58u;
        goto label_114c58;
    }
    ctx->pc = 0x114C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C58u);
        ctx->pc = 0x114C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C50u;
        // 0x114c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C50u, 0x114C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C58u;
label_114c58:
    // 0x114c58: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x114c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114c5c:
    // 0x114c5c: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x114c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_114c60:
    // 0x114c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_114c64:
    if (ctx->pc == 0x114C64u) {
        ctx->pc = 0x114C68u;
        goto label_114c68;
    }
    ctx->pc = 0x114C60u;
    {
        const bool branch_taken_0x114c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c60) {
            ctx->pc = 0x114C74u;
            return;
        }
    }
    ctx->pc = 0x114C68u;
label_114c68:
    // 0x114c68: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x114c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_114c6c:
    // 0x114c6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114c70:
    // 0x114c70: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x114c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x114c74u;
}
