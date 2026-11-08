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

// Function: entry_00187ff8
// Address: 0x187ff8 - 0x188020
void entry_00187ff8_0x187ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ff8_0x187ff8");
#endif

    ctx->pc = 0x187ff8u;

    // 0x187ff8: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187ffc: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x188000: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x188000) {
            ctx->pc = 0x188020u;
            return;
        }
    }
    ctx->pc = 0x188008u;
    // 0x188008: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x18800c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18800Cu;
    {
        const bool branch_taken_0x18800c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18800c) {
            ctx->pc = 0x188020u;
            return;
        }
    }
    ctx->pc = 0x188014u;
    // 0x188014: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x188014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x188018: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x188018u;
    {
        const bool branch_taken_0x188018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188018u;
        // 0x18801c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188018) {
            ctx->pc = 0x188090u;
            return;
        }
    }
    ctx->pc = 0x188020u;
}
