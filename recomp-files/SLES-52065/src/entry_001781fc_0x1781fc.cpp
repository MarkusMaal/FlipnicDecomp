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

// Function: entry_001781fc
// Address: 0x1781fc - 0x178230
void entry_001781fc_0x1781fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781fc_0x1781fc");
#endif

    ctx->pc = 0x1781fcu;

    // 0x1781fc: 0x0  nop
    ctx->pc = 0x1781fcu;
    // NOP
    // 0x178200: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x178204: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x178208: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x17820c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178210: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x178210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178214: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178214u;
    {
        const bool branch_taken_0x178214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178214u;
        // 0x178218: 0x2263c  dsll32      $a0, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178214) {
            ctx->pc = 0x178254u;
            return;
        }
    }
    ctx->pc = 0x17821Cu;
    // 0x17821c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17821cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x178220: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178220u;
    {
        const bool branch_taken_0x178220 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x178224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178220u;
        // 0x178224: 0x4600a547  neg.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178220) {
            ctx->pc = 0x178230u;
            return;
        }
    }
    ctx->pc = 0x178228u;
    // 0x178228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178228u;
    {
        const bool branch_taken_0x178228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178228) {
            ctx->pc = 0x178234u;
            return;
        }
    }
    ctx->pc = 0x178230u;
}
