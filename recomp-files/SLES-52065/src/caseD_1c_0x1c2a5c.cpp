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

// Function: caseD_1c
// Address: 0x1c2a5c - 0x1c2a78
void caseD_1c_0x1c2a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x1c2a5c");
#endif

    switch (ctx->pc) {
        case 0x1c2a6cu: goto label_1c2a6c;
        default: break;
    }

    ctx->pc = 0x1c2a5cu;

    // 0x1c2a5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2a60: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2a64: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2A64u;
    SET_GPR_U32(ctx, 31, 0x1C2A6Cu);
    ctx->pc = 0x1C2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A64u;
    // 0x1c2a68: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2A64u, 0x1C2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A6Cu;
label_1c2a6c:
    // 0x1c2a6c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c2a70: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C2A70u;
    {
        const bool branch_taken_0x1c2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a70) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2A78u;
}
