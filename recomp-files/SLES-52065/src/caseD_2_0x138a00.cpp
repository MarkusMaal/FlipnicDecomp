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

// Function: caseD_2
// Address: 0x138a00 - 0x138a14
void caseD_2_0x138a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x138a00");
#endif

    ctx->pc = 0x138a00u;

    // 0x138a00: 0x8f8384b8  lw          $v1, -0x7B48($gp)
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935736)));
    // 0x138a04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x138a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x138a08: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x138a0c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x138A0Cu;
    {
        const bool branch_taken_0x138a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A0Cu;
        // 0x138a10: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a0c) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138A14u;
}
