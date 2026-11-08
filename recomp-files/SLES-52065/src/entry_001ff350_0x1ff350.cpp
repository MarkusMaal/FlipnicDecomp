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

// Function: entry_001ff350
// Address: 0x1ff350 - 0x1ff370
void entry_001ff350_0x1ff350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff350_0x1ff350");
#endif

    ctx->pc = 0x1ff350u;

    // 0x1ff350: 0x464024  and         $t0, $v0, $a2
    ctx->pc = 0x1ff350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ff354: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1ff354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff358: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF358u;
    {
        const bool branch_taken_0x1ff358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF358u;
        // 0x1ff35c: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff358) {
            ctx->pc = 0x1FF370u;
            return;
        }
    }
    ctx->pc = 0x1FF360u;
    // 0x1ff360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff364: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF368u;
    {
        const bool branch_taken_0x1ff368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF368u;
        // 0x1ff36c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff368) {
            ctx->pc = 0x1FF37Cu;
            return;
        }
    }
    ctx->pc = 0x1FF370u;
}
