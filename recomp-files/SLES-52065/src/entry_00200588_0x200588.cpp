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

// Function: entry_00200588
// Address: 0x200588 - 0x200598
void entry_00200588_0x200588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200588_0x200588");
#endif

    ctx->pc = 0x200588u;

    // 0x200588: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20058c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20058Cu;
    {
        const bool branch_taken_0x20058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20058c) {
            ctx->pc = 0x200590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20058Cu;
            // 0x200590: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2005B8u;
            return;
        }
    }
    ctx->pc = 0x200594u;
    // 0x200594: 0x0  nop
    ctx->pc = 0x200594u;
    // NOP
    ctx->pc = 0x200598u;
}
