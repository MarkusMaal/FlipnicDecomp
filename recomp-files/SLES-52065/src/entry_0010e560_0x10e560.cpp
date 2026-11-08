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

// Function: entry_0010e560
// Address: 0x10e560 - 0x10e584
void entry_0010e560_0x10e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e560_0x10e560");
#endif

    ctx->pc = 0x10e560u;

    // 0x10e560: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e564: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x10e564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10e568: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x10E568u;
    {
        const bool branch_taken_0x10e568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E568u;
        // 0x10e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e568) {
            ctx->pc = 0x10E6F8u;
            return;
        }
    }
    ctx->pc = 0x10E570u;
    // 0x10e570: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e574: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x10E574u;
    {
        const bool branch_taken_0x10e574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E574u;
        // 0x10e578: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e574) {
            ctx->pc = 0x10E6A4u;
            return;
        }
    }
    ctx->pc = 0x10E57Cu;
    // 0x10e57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e584u;
}
