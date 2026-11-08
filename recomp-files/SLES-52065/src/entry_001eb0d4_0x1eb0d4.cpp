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

// Function: entry_001eb0d4
// Address: 0x1eb0d4 - 0x1eb11c
void entry_001eb0d4_0x1eb0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb0d4_0x1eb0d4");
#endif

    ctx->pc = 0x1eb0d4u;

    // 0x1eb0d4: 0x0  nop
    ctx->pc = 0x1eb0d4u;
    // NOP
    // 0x1eb0d8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1eb0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb0dc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1eb0e0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1eb0e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1eb0e8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1EB0E8u;
    {
        const bool branch_taken_0x1eb0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0E8u;
        // 0x1eb0ec: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0e8) {
            ctx->pc = 0x1EB1B4u;
            return;
        }
    }
    ctx->pc = 0x1EB0F0u;
    // 0x1eb0f0: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1eb0f4: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1eb0f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb104: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB104u;
    {
        const bool branch_taken_0x1eb104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB104u;
        // 0x1eb108: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb104) {
            ctx->pc = 0x1EB1B4u;
            return;
        }
    }
    ctx->pc = 0x1EB10Cu;
    // 0x1eb10c: 0x2d210009  sltiu       $at, $t1, 0x9
    ctx->pc = 0x1eb10cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb110: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EB110u;
    {
        const bool branch_taken_0x1eb110 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB110u;
        // 0x1eb114: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb110) {
            ctx->pc = 0x1EB17Cu;
            return;
        }
    }
    ctx->pc = 0x1EB118u;
    // 0x1eb118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eb11cu;
}
