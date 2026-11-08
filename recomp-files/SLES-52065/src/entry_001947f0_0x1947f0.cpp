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

// Function: entry_001947f0
// Address: 0x1947f0 - 0x194804
void entry_001947f0_0x1947f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001947f0_0x1947f0");
#endif

    ctx->pc = 0x1947f0u;

    // 0x1947f0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1947f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1947f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1947F4u;
    {
        const bool branch_taken_0x1947f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1947f4) {
            ctx->pc = 0x1947C0u;
            return;
        }
    }
    ctx->pc = 0x1947FCu;
    // 0x1947fc: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x1947FCu;
    {
        const bool branch_taken_0x1947fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947fc) {
            ctx->pc = 0x195D88u;
            return;
        }
    }
    ctx->pc = 0x194804u;
}
