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

// Function: entry_00179cac
// Address: 0x179cac - 0x179cb8
void entry_00179cac_0x179cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cac_0x179cac");
#endif

    ctx->pc = 0x179cacu;

    // 0x179cac: 0x0  nop
    ctx->pc = 0x179cacu;
    // NOP
    // 0x179cb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x179CB0u;
    {
        const bool branch_taken_0x179cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB0u;
        // 0x179cb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb0) {
            ctx->pc = 0x179CF8u;
            return;
        }
    }
    ctx->pc = 0x179CB8u;
}
