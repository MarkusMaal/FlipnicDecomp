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

// Function: entry_0014e74c
// Address: 0x14e74c - 0x14e76c
void entry_0014e74c_0x14e74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e74c_0x14e74c");
#endif

    ctx->pc = 0x14e74cu;

    // 0x14e74c: 0x0  nop
    ctx->pc = 0x14e74cu;
    // NOP
    // 0x14e750: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14e750u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14e754: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e75c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E75Cu;
    {
        const bool branch_taken_0x14e75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e75c) {
            ctx->pc = 0x14E76Cu;
            return;
        }
    }
    ctx->pc = 0x14E764u;
    // 0x14e764: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14E764u;
    SET_GPR_U32(ctx, 31, 0x14E76Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14E764u, 0x14E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E76Cu;
}
