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

// Function: entry_001de9a0
// Address: 0x1de9a0 - 0x1de9c8
void entry_001de9a0_0x1de9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de9a0_0x1de9a0");
#endif

    ctx->pc = 0x1de9a0u;

    // 0x1de9a0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1de9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1de9a4: 0x2c8200f0  sltiu       $v0, $a0, 0xF0
    ctx->pc = 0x1de9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
    // 0x1de9a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE9A8u;
    {
        const bool branch_taken_0x1de9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9a8) {
            ctx->pc = 0x1DE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE9A8u;
            // 0x1de9ac: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9C8u;
            return;
        }
    }
    ctx->pc = 0x1DE9B0u;
    // 0x1de9b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de9b4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1de9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1de9b8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1de9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1de9bc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1de9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1de9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de9c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x1de9c8u;
}
