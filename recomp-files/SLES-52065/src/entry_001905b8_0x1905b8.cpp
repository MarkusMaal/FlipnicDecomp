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

// Function: entry_001905b8
// Address: 0x1905b8 - 0x1905f0
void entry_001905b8_0x1905b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001905b8_0x1905b8");
#endif

    ctx->pc = 0x1905b8u;

    // 0x1905b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1905bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1905c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1905c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1905c4: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1905c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1905c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1905c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1905d0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1905d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1905d4: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x1905d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1905d8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1905D8u;
    {
        const bool branch_taken_0x1905d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D8u;
        // 0x1905dc: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905d8) {
            ctx->pc = 0x1906C8u;
            return;
        }
    }
    ctx->pc = 0x1905E0u;
    // 0x1905e0: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1905e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1905e4: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1905E4u;
    {
        const bool branch_taken_0x1905e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1905E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905E4u;
        // 0x1905e8: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905e4) {
            ctx->pc = 0x19068Cu;
            return;
        }
    }
    ctx->pc = 0x1905ECu;
    // 0x1905ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1905ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1905f0u;
}
