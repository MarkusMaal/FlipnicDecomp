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

// Function: entry_001fdf80
// Address: 0x1fdf80 - 0x1fdfa0
void entry_001fdf80_0x1fdf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf80_0x1fdf80");
#endif

    switch (ctx->pc) {
        case 0x1fdf8cu: goto label_1fdf8c;
        default: break;
    }

    ctx->pc = 0x1fdf80u;

label_1fdf80:
    // 0x1fdf80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf84:
    // 0x1fdf84: 0x2a0f809  jalr        $s5
label_1fdf88:
    if (ctx->pc == 0x1FDF88u) {
        ctx->pc = 0x1FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF84u;
        // 0x1fdf88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF8Cu;
        goto label_1fdf8c;
    }
    ctx->pc = 0x1FDF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FDF8Cu);
        ctx->pc = 0x1FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF84u;
        // 0x1fdf88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF84u, 0x1FDF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FDF8Cu;
label_1fdf8c:
    // 0x1fdf8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fdf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf90:
    // 0x1fdf90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdf94:
    // 0x1fdf94: 0x12420065  beq         $s2, $v0, . + 4 + (0x65 << 2)
label_1fdf98:
    if (ctx->pc == 0x1FDF98u) {
        ctx->pc = 0x1FDF9Cu;
        goto label_1fdf9c;
    }
    ctx->pc = 0x1FDF94u;
    {
        const bool branch_taken_0x1fdf94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdf94) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FDF9Cu;
label_1fdf9c:
    // 0x1fdf9c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1fdfa0u;
}
