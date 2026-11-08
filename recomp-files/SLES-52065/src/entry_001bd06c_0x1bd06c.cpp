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

// Function: entry_001bd06c
// Address: 0x1bd06c - 0x1bd084
void entry_001bd06c_0x1bd06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd06c_0x1bd06c");
#endif

    ctx->pc = 0x1bd06cu;

    // 0x1bd06c: 0x3393c  dsll32      $a3, $v1, 4
    ctx->pc = 0x1bd06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1bd070: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bd074: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD074u;
    {
        const bool branch_taken_0x1bd074 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD074u;
        // 0x1bd078: 0x7393f  dsra32      $a3, $a3, 4 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd074) {
            ctx->pc = 0x1BD084u;
            return;
        }
    }
    ctx->pc = 0x1BD07Cu;
    // 0x1bd07c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bd080: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bd084u;
}
