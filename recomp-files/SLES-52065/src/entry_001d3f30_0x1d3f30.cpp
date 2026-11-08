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

// Function: entry_001d3f30
// Address: 0x1d3f30 - 0x1d3f68
void entry_001d3f30_0x1d3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f30_0x1d3f30");
#endif

    ctx->pc = 0x1d3f30u;

label_1d3f30:
    // 0x1d3f30: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1d3f30u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1d3f34: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1d3f38: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1d3f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d3f3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d3f40: 0x0  nop
    ctx->pc = 0x1d3f40u;
    // NOP
    // 0x1d3f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3F44u;
    {
        const bool branch_taken_0x1d3f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F44u;
        // 0x1d3f48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f44) {
            ctx->pc = 0x1D3F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3f30;
        }
    }
    ctx->pc = 0x1D3F4Cu;
    // 0x1d3f4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f50: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1d3f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d3f54: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3F54u;
    {
        const bool branch_taken_0x1d3f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F54u;
        // 0x1d3f58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f54) {
            ctx->pc = 0x1D3FA4u;
            return;
        }
    }
    ctx->pc = 0x1D3F5Cu;
    // 0x1d3f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d3f68u;
}
