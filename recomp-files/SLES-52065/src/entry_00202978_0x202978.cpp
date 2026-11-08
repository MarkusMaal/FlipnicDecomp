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

// Function: entry_00202978
// Address: 0x202978 - 0x2029a0
void entry_00202978_0x202978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202978_0x202978");
#endif

    ctx->pc = 0x202978u;

    // 0x202978: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x202978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20297c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x20297cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x202980: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x202984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202980u;
        // 0x202984: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202980) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202988u;
    // 0x202988: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x20298c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20298Cu;
    {
        const bool branch_taken_0x20298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20298Cu;
        // 0x202990: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20298c) {
            ctx->pc = 0x202A4Cu;
            return;
        }
    }
    ctx->pc = 0x202994u;
    // 0x202994: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202994u;
    {
        const bool branch_taken_0x202994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202994u;
        // 0x202998: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202994) {
            ctx->pc = 0x2029DCu;
            return;
        }
    }
    ctx->pc = 0x20299Cu;
    // 0x20299c: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x2029a0u;
}
