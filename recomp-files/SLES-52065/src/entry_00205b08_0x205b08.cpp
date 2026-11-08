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

// Function: entry_00205b08
// Address: 0x205b08 - 0x205b20
void entry_00205b08_0x205b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b08_0x205b08");
#endif

    ctx->pc = 0x205b08u;

    // 0x205b08: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x205b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x205b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205B0Cu;
    {
        const bool branch_taken_0x205b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B0Cu;
        // 0x205b10: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b0c) {
            ctx->pc = 0x205B20u;
            return;
        }
    }
    ctx->pc = 0x205B14u;
    // 0x205b14: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205b18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205B18u;
    {
        const bool branch_taken_0x205b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B18u;
        // 0x205b1c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b18) {
            ctx->pc = 0x205B30u;
            return;
        }
    }
    ctx->pc = 0x205B20u;
}
