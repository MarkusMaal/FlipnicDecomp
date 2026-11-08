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

// Function: entry_001fad70
// Address: 0x1fad70 - 0x1fad90
void entry_001fad70_0x1fad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad70_0x1fad70");
#endif

    ctx->pc = 0x1fad70u;

    // 0x1fad70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAD70u;
    {
        const bool branch_taken_0x1fad70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD70u;
        // 0x1fad74: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad70) {
            ctx->pc = 0x1FAD90u;
            return;
        }
    }
    ctx->pc = 0x1FAD78u;
    // 0x1fad78: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FAD78u;
    {
        const bool branch_taken_0x1fad78 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1fad78) {
            ctx->pc = 0x1FAD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAD78u;
            // 0x1fad7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FADF8u;
            return;
        }
    }
    ctx->pc = 0x1FAD80u;
    // 0x1fad80: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAD80u;
    {
        const bool branch_taken_0x1fad80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad80) {
            ctx->pc = 0x1FADA8u;
            return;
        }
    }
    ctx->pc = 0x1FAD88u;
    // 0x1fad88: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1FAD88u;
    {
        const bool branch_taken_0x1fad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD88u;
        // 0x1fad8c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad88) {
            ctx->pc = 0x1FAFBCu;
            return;
        }
    }
    ctx->pc = 0x1FAD90u;
}
