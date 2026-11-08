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

// Function: entry_00208420
// Address: 0x208420 - 0x20844c
void entry_00208420_0x208420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208420_0x208420");
#endif

    ctx->pc = 0x208420u;

    // 0x208420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x208420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208424: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208428: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x208428u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20842c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208430: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x208430u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x208434: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x208434u;
    {
        const bool branch_taken_0x208434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x208438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208434u;
        // 0x208438: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208434) {
            ctx->pc = 0x20844Cu;
            return;
        }
    }
    ctx->pc = 0x20843Cu;
    // 0x20843c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208440: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x208440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x208444: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x208444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x208448: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x208448u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x20844cu;
}
