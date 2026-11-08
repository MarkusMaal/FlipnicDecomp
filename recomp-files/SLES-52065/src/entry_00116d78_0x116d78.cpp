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

// Function: entry_00116d78
// Address: 0x116d78 - 0x116d8c
void entry_00116d78_0x116d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d78_0x116d78");
#endif

    ctx->pc = 0x116d78u;

    // 0x116d78: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x116d78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116d7c: 0x14a0fffc  bnez        $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x116D7Cu;
    {
        const bool branch_taken_0x116d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d7c) {
            ctx->pc = 0x116D70u;
            return;
        }
    }
    ctx->pc = 0x116D84u;
    // 0x116d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116D84u;
    {
        const bool branch_taken_0x116d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D84u;
        // 0x116d88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d84) {
            ctx->pc = 0x116D9Cu;
            return;
        }
    }
    ctx->pc = 0x116D8Cu;
}
