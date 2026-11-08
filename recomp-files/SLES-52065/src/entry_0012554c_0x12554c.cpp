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

// Function: entry_0012554c
// Address: 0x12554c - 0x125578
void entry_0012554c_0x12554c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012554c_0x12554c");
#endif

    ctx->pc = 0x12554cu;

    // 0x12554c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x12554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x125550: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x125550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x125554: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x125554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x125558: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x125558u;
    {
        const bool branch_taken_0x125558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125558u;
        // 0x12555c: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125558) {
            ctx->pc = 0x125668u;
            return;
        }
    }
    ctx->pc = 0x125560u;
    // 0x125560: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x125560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x125564: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x125564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x125568: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x125568u;
    {
        const bool branch_taken_0x125568 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125568u;
        // 0x12556c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125568) {
            ctx->pc = 0x125578u;
            return;
        }
    }
    ctx->pc = 0x125570u;
    // 0x125570: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x125574: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x125574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x125578u;
}
