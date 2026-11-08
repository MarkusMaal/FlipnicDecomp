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

// Function: entry_001e383c
// Address: 0x1e383c - 0x1e386c
void entry_001e383c_0x1e383c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e383c_0x1e383c");
#endif

    ctx->pc = 0x1e383cu;

    // 0x1e383c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1e383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1e3840: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e3844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3848: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E3848u;
    {
        const bool branch_taken_0x1e3848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3848u;
        // 0x1e384c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3848) {
            ctx->pc = 0x1E3884u;
            return;
        }
    }
    ctx->pc = 0x1E3850u;
    // 0x1e3850: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e3854: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e3858: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e3858u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e385c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e3860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e3860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e3864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3864u;
    {
        const bool branch_taken_0x1e3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3864u;
        // 0x1e3868: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3864) {
            ctx->pc = 0x1E3884u;
            return;
        }
    }
    ctx->pc = 0x1E386Cu;
}
