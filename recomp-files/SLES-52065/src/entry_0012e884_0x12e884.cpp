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

// Function: entry_0012e884
// Address: 0x12e884 - 0x12e8b0
void entry_0012e884_0x12e884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e884_0x12e884");
#endif

    ctx->pc = 0x12e884u;

    // 0x12e884: 0x0  nop
    ctx->pc = 0x12e884u;
    // NOP
    // 0x12e888: 0xb31823  subu        $v1, $a1, $s3
    ctx->pc = 0x12e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12e88c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e890: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12e894: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x12e894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e898: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E898u;
    {
        const bool branch_taken_0x12e898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0x2848821  addu        $s1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e898) {
            ctx->pc = 0x12E8B4u;
            return;
        }
    }
    ctx->pc = 0x12E8A0u;
    // 0x12e8a0: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e8a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E8A4u;
    {
        const bool branch_taken_0x12e8a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8a4) {
            ctx->pc = 0x12E8B0u;
            return;
        }
    }
    ctx->pc = 0x12E8ACu;
    // 0x12e8ac: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x12e8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    ctx->pc = 0x12e8b0u;
}
