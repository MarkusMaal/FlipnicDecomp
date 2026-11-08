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

// Function: entry_00134bec
// Address: 0x134bec - 0x134c04
void entry_00134bec_0x134bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134bec_0x134bec");
#endif

    switch (ctx->pc) {
        case 0x134bfcu: goto label_134bfc;
        default: break;
    }

    ctx->pc = 0x134becu;

    // 0x134bec: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x134bf0: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x134bf4: 0xc04f75c  jal         func_13DD70
    ctx->pc = 0x134BF4u;
    SET_GPR_U32(ctx, 31, 0x134BFCu);
    ctx->pc = 0x134BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BF4u;
    // 0x134bf8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134BF4u, 0x134BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BFCu;
label_134bfc:
    // 0x134bfc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134C7Cu;
            return;
        }
    }
    ctx->pc = 0x134C04u;
}
