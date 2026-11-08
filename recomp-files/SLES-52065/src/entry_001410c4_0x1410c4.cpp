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

// Function: entry_001410c4
// Address: 0x1410c4 - 0x1410f8
void entry_001410c4_0x1410c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001410c4_0x1410c4");
#endif

    ctx->pc = 0x1410c4u;

    // 0x1410c4: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1410C4u;
    {
        const bool branch_taken_0x1410c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1410C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410C4u;
        // 0x1410c8: 0x127082b  sltu        $at, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410c4) {
            ctx->pc = 0x141194u;
            return;
        }
    }
    ctx->pc = 0x1410CCu;
    // 0x1410cc: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x1410ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1410d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1410D0u;
    {
        const bool branch_taken_0x1410d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410D0u;
        // 0x1410d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410d0) {
            ctx->pc = 0x1410F8u;
            return;
        }
    }
    ctx->pc = 0x1410D8u;
    // 0x1410d8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1410d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1410dc: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x1410dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1410e0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1410e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1410e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1410e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1410e8: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x1410e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x1410ec: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x1410ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x1410f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1410F0u;
    {
        const bool branch_taken_0x1410f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F0u;
        // 0x1410f4: 0xafb200f0  sw          $s2, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410f0) {
            ctx->pc = 0x141118u;
            return;
        }
    }
    ctx->pc = 0x1410F8u;
}
