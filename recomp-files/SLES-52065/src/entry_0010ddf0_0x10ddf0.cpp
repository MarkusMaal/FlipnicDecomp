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

// Function: entry_0010ddf0
// Address: 0x10ddf0 - 0x10de48
void entry_0010ddf0_0x10ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ddf0_0x10ddf0");
#endif

    switch (ctx->pc) {
        case 0x10de28u: goto label_10de28;
        case 0x10de44u: goto label_10de44;
        default: break;
    }

    ctx->pc = 0x10ddf0u;

label_10ddf0:
    // 0x10ddf0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ddf4:
    // 0x10ddf4: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10ddf8:
    // 0x10ddf8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ddfc:
    // 0x10ddfc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x10ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_10de00:
    // 0x10de00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10de00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10de04:
    // 0x10de04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10de04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10de08:
    // 0x10de08: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10de08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10de0c:
    // 0x10de0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10de10:
    // 0x10de10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10de10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10de14:
    // 0x10de14: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x10de14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10de18:
    // 0x10de18: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10de1c:
    // 0x10de1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10de20:
    // 0x10de20: 0x320f809  jalr        $t9
label_10de24:
    if (ctx->pc == 0x10DE24u) {
        ctx->pc = 0x10DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE20u;
        // 0x10de24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE28u;
        goto label_10de28;
    }
    ctx->pc = 0x10DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DE28u);
        ctx->pc = 0x10DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE20u;
        // 0x10de24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE20u, 0x10DE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DE28u;
label_10de28:
    // 0x10de28: 0xa64001fa  sh          $zero, 0x1FA($s2)
    ctx->pc = 0x10de28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 506), (uint16_t)GPR_U32(ctx, 0));
label_10de2c:
    // 0x10de2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10de30:
    // 0x10de30: 0xae4001fc  sw          $zero, 0x1FC($s2)
    ctx->pc = 0x10de30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 0));
label_10de34:
    // 0x10de34: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x10de34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10de38:
    // 0x10de38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10de38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10de3c:
    // 0x10de3c: 0x320f809  jalr        $t9
label_10de40:
    if (ctx->pc == 0x10DE40u) {
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DE44u;
        goto label_10de44;
    }
    ctx->pc = 0x10DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DE44u);
        ctx->pc = 0x10DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE3Cu;
        // 0x10de40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE3Cu, 0x10DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DE44u;
label_10de44:
    // 0x10de44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10de44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x10de48u;
}
