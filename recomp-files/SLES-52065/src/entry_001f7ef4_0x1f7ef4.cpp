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

// Function: entry_001f7ef4
// Address: 0x1f7ef4 - 0x1f7f04
void entry_001f7ef4_0x1f7ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7ef4_0x1f7ef4");
#endif

    ctx->pc = 0x1f7ef4u;

    // 0x1f7ef4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7ef8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7efc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F7EFCu;
    {
        const bool branch_taken_0x1f7efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EFCu;
        // 0x1f7f00: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7efc) {
            ctx->pc = 0x1F7F2Cu;
            return;
        }
    }
    ctx->pc = 0x1F7F04u;
}
