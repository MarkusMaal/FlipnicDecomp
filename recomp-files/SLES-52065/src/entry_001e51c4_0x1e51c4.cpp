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

// Function: entry_001e51c4
// Address: 0x1e51c4 - 0x1e5208
void entry_001e51c4_0x1e51c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e51c4_0x1e51c4");
#endif

    switch (ctx->pc) {
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51e8u: goto label_1e51e8;
        default: break;
    }

    ctx->pc = 0x1e51c4u;

label_1e51c4:
    // 0x1e51c4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e51c8:
    // 0x1e51c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e51cc:
    // 0x1e51cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e51ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e51d0:
    // 0x1e51d0: 0x320f809  jalr        $t9
label_1e51d4:
    if (ctx->pc == 0x1E51D4u) {
        ctx->pc = 0x1E51D8u;
        goto label_1e51d8;
    }
    ctx->pc = 0x1E51D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E51D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E51D0u, 0x1E51D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E51D8u;
label_1e51d8:
    // 0x1e51d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e51dc:
    if (ctx->pc == 0x1E51DCu) {
        ctx->pc = 0x1E51E0u;
        goto label_1e51e0;
    }
    ctx->pc = 0x1E51D8u;
    {
        const bool branch_taken_0x1e51d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51d8) {
            ctx->pc = 0x1E5208u;
            return;
        }
    }
    ctx->pc = 0x1E51E0u;
label_1e51e0:
    // 0x1e51e0: 0xc07a704  jal         func_1E9C10
label_1e51e4:
    if (ctx->pc == 0x1E51E4u) {
        ctx->pc = 0x1E51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51E0u;
        // 0x1e51e4: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51E8u;
        goto label_1e51e8;
    }
    ctx->pc = 0x1E51E0u;
    SET_GPR_U32(ctx, 31, 0x1E51E8u);
    ctx->pc = 0x1E51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51E0u;
    // 0x1e51e4: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E51E0u, 0x1E51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51E8u;
label_1e51e8:
    // 0x1e51e8: 0x0  nop
    ctx->pc = 0x1e51e8u;
    // NOP
label_1e51ec:
    // 0x1e51ec: 0x0  nop
    ctx->pc = 0x1e51ecu;
    // NOP
label_1e51f0:
    // 0x1e51f0: 0x0  nop
    ctx->pc = 0x1e51f0u;
    // NOP
label_1e51f4:
    // 0x1e51f4: 0x0  nop
    ctx->pc = 0x1e51f4u;
    // NOP
label_1e51f8:
    // 0x1e51f8: 0x0  nop
    ctx->pc = 0x1e51f8u;
    // NOP
label_1e51fc:
    // 0x1e51fc: 0x0  nop
    ctx->pc = 0x1e51fcu;
    // NOP
label_1e5200:
    // 0x1e5200: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e5204:
    if (ctx->pc == 0x1E5204u) {
        ctx->pc = 0x1E5208u;
        goto label_fallthrough_0x1e5200;
    }
    ctx->pc = 0x1E5200u;
    {
        const bool branch_taken_0x1e5200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5200) {
            ctx->pc = 0x1E51E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e51e8;
        }
    }
label_fallthrough_0x1e5200:
    ctx->pc = 0x1E5208u;
}
