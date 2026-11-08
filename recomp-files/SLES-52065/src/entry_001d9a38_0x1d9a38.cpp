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

// Function: entry_001d9a38
// Address: 0x1d9a38 - 0x1d9a54
void entry_001d9a38_0x1d9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9a38_0x1d9a38");
#endif

    switch (ctx->pc) {
        case 0x1d9a4cu: goto label_1d9a4c;
        default: break;
    }

    ctx->pc = 0x1d9a38u;

    // 0x1d9a38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9a3c: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9A3Cu;
    {
        const bool branch_taken_0x1d9a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d9a3c) {
            ctx->pc = 0x1D9A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A3Cu;
            // 0x1d9a40: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A58u;
            return;
        }
    }
    ctx->pc = 0x1D9A44u;
    // 0x1d9a44: 0xc07565e  jal         func_1D5978
    ctx->pc = 0x1D9A44u;
    SET_GPR_U32(ctx, 31, 0x1D9A4Cu);
    ctx->pc = 0x1D9A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A44u;
    // 0x1d9a48: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5978u, 0x1D9A44u, 0x1D9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A4Cu;
label_1d9a4c:
    // 0x1d9a4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9A4Cu;
    {
        const bool branch_taken_0x1d9a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a4c) {
            ctx->pc = 0x1D9A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9A4Cu;
            // 0x1d9a50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9A54u;
            return;
        }
    }
    ctx->pc = 0x1D9A54u;
}
