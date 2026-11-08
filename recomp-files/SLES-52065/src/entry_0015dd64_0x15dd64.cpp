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

// Function: entry_0015dd64
// Address: 0x15dd64 - 0x15dd7c
void entry_0015dd64_0x15dd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dd64_0x15dd64");
#endif

    ctx->pc = 0x15dd64u;

    // 0x15dd64: 0x0  nop
    ctx->pc = 0x15dd64u;
    // NOP
    // 0x15dd68: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15dd6c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15dd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15dd70: 0x1020010a  beqz        $at, . + 4 + (0x10A << 2)
    ctx->pc = 0x15DD70u;
    {
        const bool branch_taken_0x15dd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD70u;
        // 0x15dd74: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd70) {
            ctx->pc = 0x15E19Cu;
            return;
        }
    }
    ctx->pc = 0x15DD78u;
    // 0x15dd78: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x15dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    ctx->pc = 0x15dd7cu;
}
