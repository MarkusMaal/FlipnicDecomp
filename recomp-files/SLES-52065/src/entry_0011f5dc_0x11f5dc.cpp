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

// Function: entry_0011f5dc
// Address: 0x11f5dc - 0x11f604
void entry_0011f5dc_0x11f5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f5dc_0x11f5dc");
#endif

    ctx->pc = 0x11f5dcu;

    // 0x11f5dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f5e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11f5e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11f5ec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f5f0: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x11f5f4: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x11f5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11f5f8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f5fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F5FCu;
    {
        const bool branch_taken_0x11f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5FCu;
        // 0x11f600: 0x2507200c  addiu       $a3, $t0, 0x200C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5fc) {
            ctx->pc = 0x11F614u;
            return;
        }
    }
    ctx->pc = 0x11F604u;
}
