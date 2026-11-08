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

// Function: entry_00174954
// Address: 0x174954 - 0x17497c
void entry_00174954_0x174954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174954_0x174954");
#endif

    switch (ctx->pc) {
        case 0x174974u: goto label_174974;
        default: break;
    }

    ctx->pc = 0x174954u;

    // 0x174954: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x174958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174958u;
    {
        const bool branch_taken_0x174958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174958u;
        // 0x17495c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174958) {
            ctx->pc = 0x17497Cu;
            return;
        }
    }
    ctx->pc = 0x174960u;
    // 0x174960: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174964: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x174964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x174968: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x174968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17496c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17496Cu;
    SET_GPR_U32(ctx, 31, 0x174974u);
    ctx->pc = 0x174970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17496Cu;
    // 0x174970: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17496Cu, 0x174974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174974u;
label_174974:
    // 0x174974: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x174974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x174978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17497cu;
}
