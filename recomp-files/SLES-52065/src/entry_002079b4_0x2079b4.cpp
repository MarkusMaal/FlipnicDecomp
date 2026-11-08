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

// Function: entry_002079b4
// Address: 0x2079b4 - 0x2079d8
void entry_002079b4_0x2079b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002079b4_0x2079b4");
#endif

    ctx->pc = 0x2079b4u;

    // 0x2079b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2079b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2079b8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2079b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2079bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2079BCu;
    {
        const bool branch_taken_0x2079bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079BCu;
        // 0x2079c0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079bc) {
            ctx->pc = 0x2079D8u;
            return;
        }
    }
    ctx->pc = 0x2079C4u;
    // 0x2079c4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2079c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2079c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2079cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2079CCu;
    {
        const bool branch_taken_0x2079cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079CCu;
        // 0x2079d0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079cc) {
            ctx->pc = 0x2079F0u;
            return;
        }
    }
    ctx->pc = 0x2079D4u;
    // 0x2079d4: 0x0  nop
    ctx->pc = 0x2079d4u;
    // NOP
    ctx->pc = 0x2079d8u;
}
