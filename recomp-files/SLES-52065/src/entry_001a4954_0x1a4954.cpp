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

// Function: entry_001a4954
// Address: 0x1a4954 - 0x1a497c
void entry_001a4954_0x1a4954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4954_0x1a4954");
#endif

    ctx->pc = 0x1a4954u;

    // 0x1a4954: 0x0  nop
    ctx->pc = 0x1a4954u;
    // NOP
    // 0x1a4958: 0x8c8204d0  lw          $v0, 0x4D0($a0)
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
    // 0x1a495c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A495Cu;
    {
        const bool branch_taken_0x1a495c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A495Cu;
        // 0x1a4960: 0x249404d0  addiu       $s4, $a0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a495c) {
            ctx->pc = 0x1A49B0u;
            return;
        }
    }
    ctx->pc = 0x1A4964u;
    // 0x1a4964: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4964u;
    {
        const bool branch_taken_0x1a4964 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4964) {
            ctx->pc = 0x1A497Cu;
            return;
        }
    }
    ctx->pc = 0x1A496Cu;
    // 0x1a496c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a4970: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a4974: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1A4974u;
    SET_GPR_U32(ctx, 31, 0x1A497Cu);
    ctx->pc = 0x1A4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4974u;
    // 0x1a4978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A4974u, 0x1A497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A497Cu;
}
