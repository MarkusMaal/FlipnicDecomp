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

// Function: entry_001962d8
// Address: 0x1962d8 - 0x196318
void entry_001962d8_0x1962d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001962d8_0x1962d8");
#endif

    ctx->pc = 0x1962d8u;

    // 0x1962d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1962dc: 0x8e660664  lw          $a2, 0x664($s3)
    ctx->pc = 0x1962dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1962e0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1962e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1962e4: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1962e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1962e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1962ec: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1962ECu;
    {
        const bool branch_taken_0x1962ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962ECu;
        // 0x1962f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962ec) {
            ctx->pc = 0x196348u;
            return;
        }
    }
    ctx->pc = 0x1962F4u;
    // 0x1962f4: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1962f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1962f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1962f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1962fc: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1962FCu;
    {
        const bool branch_taken_0x1962fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1962fc) {
            ctx->pc = 0x196344u;
            return;
        }
    }
    ctx->pc = 0x196304u;
    // 0x196304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196308: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196308u;
    {
        const bool branch_taken_0x196308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196308) {
            ctx->pc = 0x196318u;
            return;
        }
    }
    ctx->pc = 0x196310u;
    // 0x196310: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x196310u;
    {
        const bool branch_taken_0x196310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196310u;
        // 0x196314: 0x64280a  movz        $a1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196310) {
            ctx->pc = 0x196348u;
            return;
        }
    }
    ctx->pc = 0x196318u;
}
