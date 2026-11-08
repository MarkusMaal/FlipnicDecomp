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

// Function: entry_0013efb0
// Address: 0x13efb0 - 0x13efe0
void entry_0013efb0_0x13efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efb0_0x13efb0");
#endif

    ctx->pc = 0x13efb0u;

    // 0x13efb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13efb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13efb4: 0x9083018c  lbu         $v1, 0x18C($a0)
    ctx->pc = 0x13efb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x13efb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13EFB8u;
    {
        const bool branch_taken_0x13efb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efb8) {
            ctx->pc = 0x13EFFCu;
            return;
        }
    }
    ctx->pc = 0x13EFC0u;
    // 0x13efc0: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13efc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EFC4u;
    {
        const bool branch_taken_0x13efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efc4) {
            ctx->pc = 0x13EFE0u;
            return;
        }
    }
    ctx->pc = 0x13EFCCu;
    // 0x13efcc: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x13efd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFD0u;
    {
        const bool branch_taken_0x13efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13efd0) {
            ctx->pc = 0x13EFE0u;
            return;
        }
    }
    ctx->pc = 0x13EFD8u;
    // 0x13efd8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13EFD8u;
    SET_GPR_U32(ctx, 31, 0x13EFE0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13EFD8u, 0x13EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EFE0u;
}
