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

// Function: entry_002093b8
// Address: 0x2093b8 - 0x2093dc
void entry_002093b8_0x2093b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002093b8_0x2093b8");
#endif

    ctx->pc = 0x2093b8u;

    // 0x2093b8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2093B8u;
    {
        const bool branch_taken_0x2093b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2093BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B8u;
        // 0x2093bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093b8) {
            ctx->pc = 0x20940Cu;
            return;
        }
    }
    ctx->pc = 0x2093C0u;
    // 0x2093c0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2093c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2093c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C4u;
        // 0x2093c8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x2093DCu;
            return;
        }
    }
    ctx->pc = 0x2093CCu;
    // 0x2093cc: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2093CCu;
    {
        const bool branch_taken_0x2093cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2093D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093CCu;
        // 0x2093d0: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093cc) {
            ctx->pc = 0x2093B0u;
            return;
        }
    }
    ctx->pc = 0x2093D4u;
    // 0x2093d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2093D4u;
    {
        const bool branch_taken_0x2093d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2093d4) {
            ctx->pc = 0x2093D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093D4u;
            // 0x2093d8: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093E8u;
            return;
        }
    }
    ctx->pc = 0x2093DCu;
}
