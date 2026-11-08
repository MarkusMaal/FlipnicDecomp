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

// Function: entry_001bb0e0
// Address: 0x1bb0e0 - 0x1bb110
void entry_001bb0e0_0x1bb0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0e0_0x1bb0e0");
#endif

    ctx->pc = 0x1bb0e0u;

    // 0x1bb0e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bb0e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bb0ec: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1bb0ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1bb0f0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1bb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1bb0f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb0f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0F8u;
    {
        const bool branch_taken_0x1bb0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0f8) {
            ctx->pc = 0x1BB118u;
            return;
        }
    }
    ctx->pc = 0x1BB100u;
    // 0x1bb100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB100u;
    {
        const bool branch_taken_0x1bb100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb100) {
            ctx->pc = 0x1BB110u;
            return;
        }
    }
    ctx->pc = 0x1BB108u;
    // 0x1bb108: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB108u;
    SET_GPR_U32(ctx, 31, 0x1BB110u);
    ctx->pc = 0x1BB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB108u;
    // 0x1bb10c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB108u, 0x1BB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB110u;
}
