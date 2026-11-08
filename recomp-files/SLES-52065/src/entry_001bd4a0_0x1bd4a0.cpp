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

// Function: entry_001bd4a0
// Address: 0x1bd4a0 - 0x1bd4ec
void entry_001bd4a0_0x1bd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd4a0_0x1bd4a0");
#endif

    ctx->pc = 0x1bd4a0u;

    // 0x1bd4a0: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd4a4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd4a8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bd4ac: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1bd4b0: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bd4b4: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd4b8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1bd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1bd4bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bd4c0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bd4c4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bd4c8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bd4cc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1bd4ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd4d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1bd4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1bd4d4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BD4D4u;
    {
        const bool branch_taken_0x1bd4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4d4) {
            ctx->pc = 0x1BD458u;
            return;
        }
    }
    ctx->pc = 0x1BD4DCu;
    // 0x1bd4dc: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD4DCu;
    {
        const bool branch_taken_0x1bd4dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4DCu;
        // 0x1bd4e0: 0x2510fffe  addiu       $s0, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4dc) {
            ctx->pc = 0x1BD54Cu;
            return;
        }
    }
    ctx->pc = 0x1BD4E4u;
    // 0x1bd4e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD540u;
            return;
        }
    }
    ctx->pc = 0x1BD4ECu;
}
