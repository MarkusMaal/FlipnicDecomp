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

// Function: entry_0017df18
// Address: 0x17df18 - 0x17df44
void entry_0017df18_0x17df18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df18_0x17df18");
#endif

    ctx->pc = 0x17df18u;

    // 0x17df18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17df1c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x17df1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17df20: 0x1420ffe2  bnez        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17DF20u;
    {
        const bool branch_taken_0x17df20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF20u;
        // 0x17df24: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df20) {
            ctx->pc = 0x17DEACu;
            return;
        }
    }
    ctx->pc = 0x17DF28u;
    // 0x17df28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17df2c: 0x16820043  bne         $s4, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x17DF2Cu;
    {
        const bool branch_taken_0x17df2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF2Cu;
        // 0x17df30: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df2c) {
            ctx->pc = 0x17E03Cu;
            return;
        }
    }
    ctx->pc = 0x17DF34u;
    // 0x17df34: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17df38: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x17df38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df3c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x17df3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df40: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17df44u;
}
