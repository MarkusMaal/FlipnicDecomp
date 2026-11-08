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

// Function: entry_0016ce0c
// Address: 0x16ce0c - 0x16ce3c
void entry_0016ce0c_0x16ce0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ce0c_0x16ce0c");
#endif

    switch (ctx->pc) {
        case 0x16ce34u: goto label_16ce34;
        default: break;
    }

    ctx->pc = 0x16ce0cu;

label_16ce0c:
    // 0x16ce0c: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_16ce10:
    if (ctx->pc == 0x16CE10u) {
        ctx->pc = 0x16CE14u;
        goto label_16ce14;
    }
    ctx->pc = 0x16CE0Cu;
    {
        const bool branch_taken_0x16ce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce0c) {
            ctx->pc = 0x16D048u;
            return;
        }
    }
    ctx->pc = 0x16CE14u;
label_16ce14:
    // 0x16ce14: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_16ce18:
    // 0x16ce18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ce1c:
    // 0x16ce1c: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_16ce20:
    if (ctx->pc == 0x16CE20u) {
        ctx->pc = 0x16CE24u;
        goto label_16ce24;
    }
    ctx->pc = 0x16CE1Cu;
    {
        const bool branch_taken_0x16ce1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ce1c) {
            ctx->pc = 0x16CE3Cu;
            return;
        }
    }
    ctx->pc = 0x16CE24u;
label_16ce24:
    // 0x16ce24: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16ce24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16ce28:
    // 0x16ce28: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_16ce2c:
    // 0x16ce2c: 0x320f809  jalr        $t9
label_16ce30:
    if (ctx->pc == 0x16CE30u) {
        ctx->pc = 0x16CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE2Cu;
        // 0x16ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE34u;
        goto label_16ce34;
    }
    ctx->pc = 0x16CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CE34u);
        ctx->pc = 0x16CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE2Cu;
        // 0x16ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE2Cu, 0x16CE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CE34u;
label_16ce34:
    // 0x16ce34: 0x100000dc  b           . + 4 + (0xDC << 2)
label_16ce38:
    if (ctx->pc == 0x16CE38u) {
        ctx->pc = 0x16CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE34u;
        // 0x16ce38: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE3Cu;
        goto label_fallthrough_0x16ce34;
    }
    ctx->pc = 0x16CE34u;
    {
        const bool branch_taken_0x16ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE34u;
        // 0x16ce38: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce34) {
            ctx->pc = 0x16D1A8u;
            return;
        }
    }
label_fallthrough_0x16ce34:
    ctx->pc = 0x16CE3Cu;
}
