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

// Function: entry_001f8804
// Address: 0x1f8804 - 0x1f8820
void entry_001f8804_0x1f8804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8804_0x1f8804");
#endif

    ctx->pc = 0x1f8804u;

    // 0x1f8804: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8804u;
    {
        const bool branch_taken_0x1f8804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8804) {
            ctx->pc = 0x1F8840u;
            return;
        }
    }
    ctx->pc = 0x1F880Cu;
    // 0x1f880c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1f880cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f8810: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F8810u;
    {
        const bool branch_taken_0x1f8810 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8810u;
        // 0x1f8814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8810) {
            ctx->pc = 0x1F8840u;
            return;
        }
    }
    ctx->pc = 0x1F8818u;
    // 0x1f8818: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x1f8818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1f881c: 0x0  nop
    ctx->pc = 0x1f881cu;
    // NOP
    ctx->pc = 0x1f8820u;
}
