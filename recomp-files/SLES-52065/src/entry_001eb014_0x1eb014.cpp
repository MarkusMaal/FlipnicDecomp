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

// Function: entry_001eb014
// Address: 0x1eb014 - 0x1eb03c
void entry_001eb014_0x1eb014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb014_0x1eb014");
#endif

    ctx->pc = 0x1eb014u;

    // 0x1eb014: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x1eb014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb018: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb018u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb020: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1eb024: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB024u;
    {
        const bool branch_taken_0x1eb024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB024u;
        // 0x1eb028: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb024) {
            ctx->pc = 0x1EB0D4u;
            return;
        }
    }
    ctx->pc = 0x1EB02Cu;
    // 0x1eb02c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x1eb02cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb030: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EB030u;
    {
        const bool branch_taken_0x1eb030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB030u;
        // 0x1eb034: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb030) {
            ctx->pc = 0x1EB09Cu;
            return;
        }
    }
    ctx->pc = 0x1EB038u;
    // 0x1eb038: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1eb038u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eb03cu;
}
