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

// Function: entry_0013cbac
// Address: 0x13cbac - 0x13cbd8
void entry_0013cbac_0x13cbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cbac_0x13cbac");
#endif

    ctx->pc = 0x13cbacu;

    // 0x13cbac: 0x92a20188  lbu         $v0, 0x188($s5)
    ctx->pc = 0x13cbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x13cbb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13CBB0u;
    {
        const bool branch_taken_0x13cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cbb0) {
            ctx->pc = 0x13CC0Cu;
            return;
        }
    }
    ctx->pc = 0x13CBB8u;
    // 0x13cbb8: 0x8ea2011c  lw          $v0, 0x11C($s5)
    ctx->pc = 0x13cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x13cbbc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13cbc0: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x13cbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13cbc4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x13CBC4u;
    {
        const bool branch_taken_0x13cbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC4u;
        // 0x13cbc8: 0x11082b  sltu        $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbc4) {
            ctx->pc = 0x13CC0Cu;
            return;
        }
    }
    ctx->pc = 0x13CBCCu;
    // 0x13cbcc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x13CBCCu;
    {
        const bool branch_taken_0x13cbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBCCu;
        // 0x13cbd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbcc) {
            ctx->pc = 0x13CC0Cu;
            return;
        }
    }
    ctx->pc = 0x13CBD4u;
    // 0x13cbd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13cbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13cbd8u;
}
