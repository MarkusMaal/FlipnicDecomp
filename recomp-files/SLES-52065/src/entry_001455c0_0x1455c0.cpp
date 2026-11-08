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

// Function: entry_001455c0
// Address: 0x1455c0 - 0x145604
void entry_001455c0_0x1455c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001455c0_0x1455c0");
#endif

    ctx->pc = 0x1455c0u;

    // 0x1455c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1455c4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1455c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1455c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1455cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1455d0: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1455d4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1455D4u;
    {
        const bool branch_taken_0x1455d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455d4) {
            ctx->pc = 0x145604u;
            return;
        }
    }
    ctx->pc = 0x1455DCu;
    // 0x1455dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1455e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1455e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1455e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1455ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1455f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1455f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1455f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1455fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1455FCu;
    {
        const bool branch_taken_0x1455fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455FCu;
        // 0x145600: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455fc) {
            ctx->pc = 0x145650u;
            return;
        }
    }
    ctx->pc = 0x145604u;
}
