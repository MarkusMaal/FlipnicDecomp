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

// Function: entry_001e3aac
// Address: 0x1e3aac - 0x1e3ac4
void entry_001e3aac_0x1e3aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3aac_0x1e3aac");
#endif

    ctx->pc = 0x1e3aacu;

    // 0x1e3aac: 0x0  nop
    ctx->pc = 0x1e3aacu;
    // NOP
    // 0x1e3ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3ab4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3AB4u;
    {
        const bool branch_taken_0x1e3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3ab4) {
            ctx->pc = 0x1E3AC4u;
            return;
        }
    }
    ctx->pc = 0x1E3ABCu;
    // 0x1e3abc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3ABCu;
    {
        const bool branch_taken_0x1e3abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ABCu;
        // 0x1e3ac0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3abc) {
            ctx->pc = 0x1E3ACCu;
            return;
        }
    }
    ctx->pc = 0x1E3AC4u;
}
