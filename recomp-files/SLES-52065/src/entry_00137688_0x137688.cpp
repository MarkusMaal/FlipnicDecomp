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

// Function: entry_00137688
// Address: 0x137688 - 0x1376a4
void entry_00137688_0x137688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137688_0x137688");
#endif

    ctx->pc = 0x137688u;

    // 0x137688: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13768c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x137690: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x137694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x137694) {
            ctx->pc = 0x1376A4u;
            return;
        }
    }
    ctx->pc = 0x13769Cu;
    // 0x13769c: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x13769Cu;
    SET_GPR_U32(ctx, 31, 0x1376A4u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x13769Cu, 0x1376A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376A4u;
}
