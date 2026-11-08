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

// Function: entry_0018b374
// Address: 0x18b374 - 0x18b398
void entry_0018b374_0x18b374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b374_0x18b374");
#endif

    ctx->pc = 0x18b374u;

    // 0x18b374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18b378: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x18b378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b37c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18B37Cu;
    {
        const bool branch_taken_0x18b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B37Cu;
        // 0x18b380: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b37c) {
            ctx->pc = 0x18B308u;
            return;
        }
    }
    ctx->pc = 0x18B384u;
    // 0x18b384: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b388: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x18b388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18b38c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18B38Cu;
    {
        const bool branch_taken_0x18b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B38Cu;
        // 0x18b390: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b38c) {
            ctx->pc = 0x18B300u;
            return;
        }
    }
    ctx->pc = 0x18B394u;
    // 0x18b394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18b398u;
}
