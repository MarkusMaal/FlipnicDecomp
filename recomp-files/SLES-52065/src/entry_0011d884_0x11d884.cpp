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

// Function: entry_0011d884
// Address: 0x11d884 - 0x11d898
void entry_0011d884_0x11d884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d884_0x11d884");
#endif

    ctx->pc = 0x11d884u;

    // 0x11d884: 0x826203c4  lb          $v0, 0x3C4($s3)
    ctx->pc = 0x11d884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 964)));
    // 0x11d888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D888u;
    {
        const bool branch_taken_0x11d888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D888u;
        // 0x11d88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d888) {
            ctx->pc = 0x11D898u;
            return;
        }
    }
    ctx->pc = 0x11D890u;
    // 0x11d890: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x11D890u;
    {
        const bool branch_taken_0x11d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d890) {
            ctx->pc = 0x11DC78u;
            return;
        }
    }
    ctx->pc = 0x11D898u;
}
