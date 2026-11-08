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

// Function: entry_001a816c
// Address: 0x1a816c - 0x1a819c
void entry_001a816c_0x1a816c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a816c_0x1a816c");
#endif

    switch (ctx->pc) {
        case 0x1a8174u: goto label_1a8174;
        default: break;
    }

    ctx->pc = 0x1a816cu;

    // 0x1a816c: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1A816Cu;
    SET_GPR_U32(ctx, 31, 0x1A8174u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A816Cu, 0x1A8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8174u;
label_1a8174:
    // 0x1a8174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8178: 0x10430094  beq         $v0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1A8178u;
    {
        const bool branch_taken_0x1a8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8178) {
            ctx->pc = 0x1A83CCu;
            return;
        }
    }
    ctx->pc = 0x1A8180u;
    // 0x1a8180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8184: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A8184u;
    {
        const bool branch_taken_0x1a8184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8184) {
            ctx->pc = 0x1A823Cu;
            return;
        }
    }
    ctx->pc = 0x1A818Cu;
    // 0x1a818c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A818Cu;
    {
        const bool branch_taken_0x1a818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a818c) {
            ctx->pc = 0x1A819Cu;
            return;
        }
    }
    ctx->pc = 0x1A8194u;
    // 0x1a8194: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1A8194u;
    {
        const bool branch_taken_0x1a8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8194) {
            ctx->pc = 0x1A855Cu;
            return;
        }
    }
    ctx->pc = 0x1A819Cu;
}
