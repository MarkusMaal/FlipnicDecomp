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

// Function: entry_001ff00c
// Address: 0x1ff00c - 0x1ff038
void entry_001ff00c_0x1ff00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff00c_0x1ff00c");
#endif

    ctx->pc = 0x1ff00cu;

    // 0x1ff00c: 0x52050012  beql        $s0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FF00Cu;
    {
        const bool branch_taken_0x1ff00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ff00c) {
            ctx->pc = 0x1FF010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF00Cu;
            // 0x1ff010: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF058u;
            return;
        }
    }
    ctx->pc = 0x1FF014u;
    // 0x1ff014: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff018: 0x444024  and         $t0, $v0, $a0
    ctx->pc = 0x1ff018u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ff01c: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1ff01cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff020: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF020u;
    {
        const bool branch_taken_0x1ff020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF020u;
        // 0x1ff024: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff020) {
            ctx->pc = 0x1FF038u;
            return;
        }
    }
    ctx->pc = 0x1FF028u;
    // 0x1ff028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff02c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF030u;
    {
        const bool branch_taken_0x1ff030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF030u;
        // 0x1ff034: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff030) {
            ctx->pc = 0x1FF044u;
            return;
        }
    }
    ctx->pc = 0x1FF038u;
}
