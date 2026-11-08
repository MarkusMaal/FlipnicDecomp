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

// Function: caseD_24
// Address: 0x1c2c48 - 0x1c2c68
void caseD_24_0x1c2c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_24_0x1c2c48");
#endif

    switch (ctx->pc) {
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c60u: goto label_1c2c60;
        default: break;
    }

    ctx->pc = 0x1c2c48u;

    // 0x1c2c48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2c4c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C54u);
    ctx->pc = 0x1C2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C4Cu;
    // 0x1c2c50: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2C4Cu, 0x1C2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C54u;
label_1c2c54:
    // 0x1c2c54: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1c2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c2c58: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1C2C58u;
    SET_GPR_U32(ctx, 31, 0x1C2C60u);
    ctx->pc = 0x1C2C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C58u;
    // 0x1c2c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1C2C58u, 0x1C2C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C60u;
label_1c2c60:
    // 0x1c2c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2C60u;
    {
        const bool branch_taken_0x1c2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c60) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2C68u;
}
