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

// Function: entry_001daec0
// Address: 0x1daec0 - 0x1daf00
void entry_001daec0_0x1daec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daec0_0x1daec0");
#endif

    switch (ctx->pc) {
        case 0x1daec8u: goto label_1daec8;
        default: break;
    }

    ctx->pc = 0x1daec0u;

    // 0x1daec0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DAEC0u;
    SET_GPR_U32(ctx, 31, 0x1DAEC8u);
    ctx->pc = 0x1DAEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEC0u;
    // 0x1daec4: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DAEC0u, 0x1DAEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEC8u;
label_1daec8:
    // 0x1daec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1daec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daecc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1daeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1daed0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1daed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1daed4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DAED4u;
    {
        const bool branch_taken_0x1daed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAED4u;
        // 0x1daed8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daed4) {
            ctx->pc = 0x1DAF34u;
            return;
        }
    }
    ctx->pc = 0x1DAEDCu;
    // 0x1daedc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1daee0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1daee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1daee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1daee8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1daeec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1daeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1daef0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1daef4: 0x24847348  addiu       $a0, $a0, 0x7348
    ctx->pc = 0x1daef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29512));
    // 0x1daef8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1daefc: 0x0  nop
    ctx->pc = 0x1daefcu;
    // NOP
    ctx->pc = 0x1daf00u;
}
