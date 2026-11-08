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

// Function: entry_0017f644
// Address: 0x17f644 - 0x17f65c
void entry_0017f644_0x17f644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f644_0x17f644");
#endif

    switch (ctx->pc) {
        case 0x17f64cu: goto label_17f64c;
        default: break;
    }

    ctx->pc = 0x17f644u;

    // 0x17f644: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F644u;
    SET_GPR_U32(ctx, 31, 0x17F64Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F644u, 0x17F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F64Cu;
label_17f64c:
    // 0x17f64c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x17f650: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x17f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17f654: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x17f654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x17f658: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x17f658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x17f65cu;
}
