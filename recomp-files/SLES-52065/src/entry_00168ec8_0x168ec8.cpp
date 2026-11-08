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

// Function: entry_00168ec8
// Address: 0x168ec8 - 0x168ef0
void entry_00168ec8_0x168ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168ec8_0x168ec8");
#endif

    ctx->pc = 0x168ec8u;

    // 0x168ec8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x168EC8u;
    {
        const bool branch_taken_0x168ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ec8) {
            ctx->pc = 0x168EF0u;
            return;
        }
    }
    ctx->pc = 0x168ED0u;
    // 0x168ed0: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168ed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168ed8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168ED8u;
    {
        const bool branch_taken_0x168ed8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x168ed8) {
            ctx->pc = 0x168EF0u;
            return;
        }
    }
    ctx->pc = 0x168EE0u;
    // 0x168ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x168ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ee8: 0xc042118  jal         func_108460
    ctx->pc = 0x168EE8u;
    SET_GPR_U32(ctx, 31, 0x168EF0u);
    ctx->pc = 0x168EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168EE8u;
    // 0x168eec: 0xac8201d4  sw          $v0, 0x1D4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x168EE8u, 0x168EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EF0u;
}
