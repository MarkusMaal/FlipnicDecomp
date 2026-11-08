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

// Function: entry_001c4ec4
// Address: 0x1c4ec4 - 0x1c4ee8
void entry_001c4ec4_0x1c4ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ec4_0x1c4ec4");
#endif

    switch (ctx->pc) {
        case 0x1c4eccu: goto label_1c4ecc;
        default: break;
    }

    ctx->pc = 0x1c4ec4u;

    // 0x1c4ec4: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C4EC4u;
    SET_GPR_U32(ctx, 31, 0x1C4ECCu);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C4EC4u, 0x1C4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4ECCu;
label_1c4ecc:
    // 0x1c4ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4ed0: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C4ED0u;
    {
        const bool branch_taken_0x1c4ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ed0) {
            ctx->pc = 0x1C4FACu;
            return;
        }
    }
    ctx->pc = 0x1C4ED8u;
    // 0x1c4ed8: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1c4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c4edc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c4ee8u;
}
