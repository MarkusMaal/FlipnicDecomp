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

// Function: entry_001ed318
// Address: 0x1ed318 - 0x1ed340
void entry_001ed318_0x1ed318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed318_0x1ed318");
#endif

    switch (ctx->pc) {
        case 0x1ed32cu: goto label_1ed32c;
        default: break;
    }

    ctx->pc = 0x1ed318u;

label_1ed318:
    // 0x1ed318: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed31c:
    // 0x1ed31c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed320:
    // 0x1ed320: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed320u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed324:
    // 0x1ed324: 0x40f809  jalr        $v0
label_1ed328:
    if (ctx->pc == 0x1ED328u) {
        ctx->pc = 0x1ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED324u;
        // 0x1ed328: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED32Cu;
        goto label_1ed32c;
    }
    ctx->pc = 0x1ED324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED32Cu);
        ctx->pc = 0x1ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED324u;
        // 0x1ed328: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED324u, 0x1ED32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED32Cu;
label_1ed32c:
    // 0x1ed32c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed32cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed330:
    // 0x1ed330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed334:
    if (ctx->pc == 0x1ED334u) {
        ctx->pc = 0x1ED334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED330u;
        // 0x1ed334: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED338u;
        goto label_1ed338;
    }
    ctx->pc = 0x1ED330u;
    {
        const bool branch_taken_0x1ed330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED330u;
        // 0x1ed334: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed330) {
            ctx->pc = 0x1ED318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed318;
        }
    }
    ctx->pc = 0x1ED338u;
label_1ed338:
    // 0x1ed338: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1ed33c:
    if (ctx->pc == 0x1ED33Cu) {
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED340u;
        goto label_fallthrough_0x1ed338;
    }
    ctx->pc = 0x1ED338u;
    {
        const bool branch_taken_0x1ed338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed338) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed338:
    ctx->pc = 0x1ED340u;
}
