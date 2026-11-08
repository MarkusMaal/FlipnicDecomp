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

// Function: entry_00149c18
// Address: 0x149c18 - 0x149c2c
void entry_00149c18_0x149c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c18_0x149c18");
#endif

    ctx->pc = 0x149c18u;

    // 0x149c18: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x149c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c1c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x149C1Cu;
    {
        const bool branch_taken_0x149c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C1Cu;
        // 0x149c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c1c) {
            ctx->pc = 0x149BA4u;
            return;
        }
    }
    ctx->pc = 0x149C24u;
    // 0x149c24: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x149C24u;
    {
        const bool branch_taken_0x149c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c24) {
            ctx->pc = 0x14A2ECu;
            return;
        }
    }
    ctx->pc = 0x149C2Cu;
}
