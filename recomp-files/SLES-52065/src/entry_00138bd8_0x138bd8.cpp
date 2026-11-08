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

// Function: entry_00138bd8
// Address: 0x138bd8 - 0x138c14
void entry_00138bd8_0x138bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138bd8_0x138bd8");
#endif

    ctx->pc = 0x138bd8u;

    // 0x138bd8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138bdc: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x138bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x138be0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x138be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138be4: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x138be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x138be8: 0xd03818  mult        $a3, $a2, $s0
    ctx->pc = 0x138be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x138bec: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x138becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x138bf0: 0x2e060002  sltiu       $a2, $s0, 0x2
    ctx->pc = 0x138bf0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138bf4: 0x17280a  movz        $a1, $zero, $s7
    ctx->pc = 0x138bf4u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x138bf8: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x138bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x138bfc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x138bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x138c00: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C00u;
    {
        const bool branch_taken_0x138c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x138C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C00u;
        // 0x138c04: 0xafa50100  sw          $a1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c00) {
            ctx->pc = 0x138C14u;
            return;
        }
    }
    ctx->pc = 0x138C08u;
    // 0x138c08: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x138c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c0c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x138c10: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x138c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    ctx->pc = 0x138c14u;
}
