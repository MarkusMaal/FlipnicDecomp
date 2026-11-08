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

// Function: entry_001fefe0
// Address: 0x1fefe0 - 0x1ff000
void entry_001fefe0_0x1fefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fefe0_0x1fefe0");
#endif

    ctx->pc = 0x1fefe0u;

    // 0x1fefe0: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1fefe4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1fefe8: 0x2682d9c8  addiu       $v0, $s4, -0x2638
    ctx->pc = 0x1fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1fefec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fefecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1feff0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feff4: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x1feff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x1feff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEFF8u;
    {
        const bool branch_taken_0x1feff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF8u;
        // 0x1feffc: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feff8) {
            ctx->pc = 0x1FF00Cu;
            return;
        }
    }
    ctx->pc = 0x1FF000u;
}
