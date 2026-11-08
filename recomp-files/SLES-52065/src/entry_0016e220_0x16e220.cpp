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

// Function: entry_0016e220
// Address: 0x16e220 - 0x16e258
void entry_0016e220_0x16e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e220_0x16e220");
#endif

    switch (ctx->pc) {
        case 0x16e250u: goto label_16e250;
        default: break;
    }

    ctx->pc = 0x16e220u;

label_16e220:
    // 0x16e220: 0xa6420218  sh          $v0, 0x218($s2)
    ctx->pc = 0x16e220u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 536), (uint16_t)GPR_U32(ctx, 2));
label_16e224:
    // 0x16e224: 0xa6400216  sh          $zero, 0x216($s2)
    ctx->pc = 0x16e224u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 534), (uint16_t)GPR_U32(ctx, 0));
label_16e228:
    // 0x16e228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e22c:
    // 0x16e22c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e230:
    // 0x16e230: 0x80630022  lb          $v1, 0x22($v1)
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_16e234:
    // 0x16e234: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_16e238:
    if (ctx->pc == 0x16E238u) {
        ctx->pc = 0x16E23Cu;
        goto label_16e23c;
    }
    ctx->pc = 0x16E234u;
    {
        const bool branch_taken_0x16e234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e234) {
            ctx->pc = 0x16E258u;
            return;
        }
    }
    ctx->pc = 0x16E23Cu;
label_16e23c:
    // 0x16e23c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16e23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16e240:
    // 0x16e240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e244:
    // 0x16e244: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16e244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16e248:
    // 0x16e248: 0x320f809  jalr        $t9
label_16e24c:
    if (ctx->pc == 0x16E24Cu) {
        ctx->pc = 0x16E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E248u;
        // 0x16e24c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E250u;
        goto label_16e250;
    }
    ctx->pc = 0x16E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E250u);
        ctx->pc = 0x16E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E248u;
        // 0x16e24c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E248u, 0x16E250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e254:
    if (ctx->pc == 0x16E254u) {
        ctx->pc = 0x16E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E250u;
        // 0x16e254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E258u;
        goto label_fallthrough_0x16e250;
    }
    ctx->pc = 0x16E250u;
    {
        const bool branch_taken_0x16e250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E250u;
        // 0x16e254: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e250) {
            ctx->pc = 0x16E270u;
            return;
        }
    }
label_fallthrough_0x16e250:
    ctx->pc = 0x16E258u;
}
