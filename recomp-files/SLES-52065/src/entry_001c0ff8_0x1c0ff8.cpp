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

// Function: entry_001c0ff8
// Address: 0x1c0ff8 - 0x1c1018
void entry_001c0ff8_0x1c0ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ff8_0x1c0ff8");
#endif

    ctx->pc = 0x1c0ff8u;

    // 0x1c0ff8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0FF8u;
    {
        const bool branch_taken_0x1c0ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FF8u;
        // 0x1c0ffc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ff8) {
            ctx->pc = 0x1C1048u;
            return;
        }
    }
    ctx->pc = 0x1C1000u;
    // 0x1c1000: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1000u;
    {
        const bool branch_taken_0x1c1000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1000) {
            ctx->pc = 0x1C1030u;
            return;
        }
    }
    ctx->pc = 0x1C1008u;
    // 0x1c1008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1008u;
    {
        const bool branch_taken_0x1c1008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1008) {
            ctx->pc = 0x1C1018u;
            return;
        }
    }
    ctx->pc = 0x1C1010u;
    // 0x1c1010: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C1010u;
    {
        const bool branch_taken_0x1c1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1010) {
            ctx->pc = 0x1C1090u;
            return;
        }
    }
    ctx->pc = 0x1C1018u;
}
