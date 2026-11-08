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

// Function: entry_001e28cc
// Address: 0x1e28cc - 0x1e28f8
void entry_001e28cc_0x1e28cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e28cc_0x1e28cc");
#endif

    ctx->pc = 0x1e28ccu;

    // 0x1e28cc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e28d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e28d4: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x1e28d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e28d8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e28d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e28dc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28DCu;
        // 0x1e28e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E28F8u;
            return;
        }
    }
    ctx->pc = 0x1E28E4u;
    // 0x1e28e4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e28e8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1e28ec: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1e28ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e28f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E28F0u;
    {
        const bool branch_taken_0x1e28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F0u;
        // 0x1e28f4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f0) {
            ctx->pc = 0x1E290Cu;
            return;
        }
    }
    ctx->pc = 0x1E28F8u;
}
