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

// Function: entry_001b3edc
// Address: 0x1b3edc - 0x1b3ef8
void entry_001b3edc_0x1b3edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3edc_0x1b3edc");
#endif

    switch (ctx->pc) {
        case 0x1b3ef0u: goto label_1b3ef0;
        default: break;
    }

    ctx->pc = 0x1b3edcu;

    // 0x1b3edc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3ee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3ee4: 0x24a50cd8  addiu       $a1, $a1, 0xCD8
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
    // 0x1b3ee8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B3EE8u;
    SET_GPR_U32(ctx, 31, 0x1B3EF0u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B3EE8u, 0x1B3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EF0u;
label_1b3ef0:
    // 0x1b3ef0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3EF0u;
    {
        const bool branch_taken_0x1b3ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ef0) {
            ctx->pc = 0x1B3EFCu;
            return;
        }
    }
    ctx->pc = 0x1B3EF8u;
}
