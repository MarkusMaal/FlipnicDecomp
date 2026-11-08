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

// Function: entry_0019c858
// Address: 0x19c858 - 0x19c870
void entry_0019c858_0x19c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c858_0x19c858");
#endif

    ctx->pc = 0x19c858u;

    // 0x19c858: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C858u;
    {
        const bool branch_taken_0x19c858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C858u;
        // 0x19c85c: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c858) {
            ctx->pc = 0x19C870u;
            return;
        }
    }
    ctx->pc = 0x19C860u;
    // 0x19c860: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x19c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x19c864: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19c868: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x19c868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
    ctx->pc = 0x19c870u;
}
