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

// Function: entry_001ff3b0
// Address: 0x1ff3b0 - 0x1ff3c8
void entry_001ff3b0_0x1ff3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3b0_0x1ff3b0");
#endif

    ctx->pc = 0x1ff3b0u;

    // 0x1ff3b0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1ff3b4: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x1ff3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x1ff3b8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FF3B8u;
    {
        const bool branch_taken_0x1ff3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff3b8) {
            ctx->pc = 0x1FF3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF3B8u;
            // 0x1ff3bc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF338u;
            return;
        }
    }
    ctx->pc = 0x1FF3C0u;
    // 0x1ff3c0: 0x42878  dsll        $a1, $a0, 1
    ctx->pc = 0x1ff3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 1);
    // 0x1ff3c4: 0x0  nop
    ctx->pc = 0x1ff3c4u;
    // NOP
    ctx->pc = 0x1ff3c8u;
}
