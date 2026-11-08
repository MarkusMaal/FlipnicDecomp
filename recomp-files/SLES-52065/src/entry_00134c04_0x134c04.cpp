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

// Function: entry_00134c04
// Address: 0x134c04 - 0x134c1c
void entry_00134c04_0x134c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c04_0x134c04");
#endif

    switch (ctx->pc) {
        case 0x134c14u: goto label_134c14;
        default: break;
    }

    ctx->pc = 0x134c04u;

    // 0x134c04: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x134c08: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x134c0c: 0xc04f75c  jal         func_13DD70
    ctx->pc = 0x134C0Cu;
    SET_GPR_U32(ctx, 31, 0x134C14u);
    ctx->pc = 0x134C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C0Cu;
    // 0x134c10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134C0Cu, 0x134C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C14u;
label_134c14:
    // 0x134c14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134C7Cu;
            return;
        }
    }
    ctx->pc = 0x134C1Cu;
}
