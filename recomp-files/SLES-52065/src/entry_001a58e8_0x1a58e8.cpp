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

// Function: entry_001a58e8
// Address: 0x1a58e8 - 0x1a5910
void entry_001a58e8_0x1a58e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a58e8_0x1a58e8");
#endif

    ctx->pc = 0x1a58e8u;

    // 0x1a58e8: 0x2054021  addu        $t0, $s0, $a1
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a58ec: 0xad070760  sw          $a3, 0x760($t0)
    ctx->pc = 0x1a58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1888), GPR_U32(ctx, 7));
    // 0x1a58f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a58f4: 0x28870008  slti        $a3, $a0, 0x8
    ctx->pc = 0x1a58f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a58f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a58fc: 0x14e0ffd5  bnez        $a3, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A58FCu;
    {
        const bool branch_taken_0x1a58fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58FCu;
        // 0x1a5900: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58fc) {
            ctx->pc = 0x1A5854u;
            return;
        }
    }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5908: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a590c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a590cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a5910u;
}
