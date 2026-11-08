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

// Function: entry_001a5608
// Address: 0x1a5608 - 0x1a561c
void entry_001a5608_0x1a5608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5608_0x1a5608");
#endif

    ctx->pc = 0x1a5608u;

    // 0x1a5608: 0x8d250690  lw          $a1, 0x690($t1)
    ctx->pc = 0x1a5608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1680)));
    // 0x1a560c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A560Cu;
    {
        const bool branch_taken_0x1a560c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A560Cu;
        // 0x1a5610: 0x25280690  addiu       $t0, $t1, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a560c) {
            ctx->pc = 0x1A561Cu;
            return;
        }
    }
    ctx->pc = 0x1A5614u;
    // 0x1a5614: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a5618: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a5618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1a561cu;
}
