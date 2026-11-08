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

// Function: entry_001a3794
// Address: 0x1a3794 - 0x1a37a8
void entry_001a3794_0x1a3794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3794_0x1a3794");
#endif

    ctx->pc = 0x1a3794u;

    // 0x1a3794: 0x0  nop
    ctx->pc = 0x1a3794u;
    // NOP
    // 0x1a3798: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a3798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a379c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A379Cu;
    {
        const bool branch_taken_0x1a379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A379Cu;
        // 0x1a37a0: 0xd2880  sll         $a1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a379c) {
            ctx->pc = 0x1A37C8u;
            return;
        }
    }
    ctx->pc = 0x1A37A4u;
    // 0x1a37a4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x1a37a8u;
}
