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

// Function: entry_0018824c
// Address: 0x18824c - 0x188268
void entry_0018824c_0x18824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018824c_0x18824c");
#endif

    ctx->pc = 0x18824cu;

    // 0x18824c: 0x0  nop
    ctx->pc = 0x18824cu;
    // NOP
    // 0x188250: 0x32040010  andi        $a0, $s0, 0x10
    ctx->pc = 0x188250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x188254: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x188254u;
    {
        const bool branch_taken_0x188254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188254) {
            ctx->pc = 0x1882A0u;
            return;
        }
    }
    ctx->pc = 0x18825Cu;
    // 0x18825c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x188260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188260u;
    {
        const bool branch_taken_0x188260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188260u;
        // 0x188264: 0x8e23fff8  lw          $v1, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188260) {
            ctx->pc = 0x18827Cu;
            return;
        }
    }
    ctx->pc = 0x188268u;
}
