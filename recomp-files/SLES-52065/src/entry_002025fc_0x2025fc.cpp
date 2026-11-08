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

// Function: entry_002025fc
// Address: 0x2025fc - 0x202624
void entry_002025fc_0x2025fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002025fc_0x2025fc");
#endif

    ctx->pc = 0x2025fcu;

    // 0x2025fc: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x202600: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x202600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x202604: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202608: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x20260c: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x20260cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x202610: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x202610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x202614: 0x6182f  dsubu       $v1, $zero, $a2
    ctx->pc = 0x202614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x202618: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x202618u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x20261c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20261Cu;
    {
        const bool branch_taken_0x20261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20261Cu;
        // 0x202620: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20261c) {
            ctx->pc = 0x202630u;
            return;
        }
    }
    ctx->pc = 0x202624u;
}
