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

// Function: entry_001f81c4
// Address: 0x1f81c4 - 0x1f81f0
void entry_001f81c4_0x1f81c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f81c4_0x1f81c4");
#endif

    switch (ctx->pc) {
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81ecu: goto label_1f81ec;
        default: break;
    }

    ctx->pc = 0x1f81c4u;

    // 0x1f81c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f81c8: 0x26041600  addiu       $a0, $s0, 0x1600
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
    // 0x1f81cc: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1f81ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x1f81d0: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F81D0u;
    SET_GPR_U32(ctx, 31, 0x1F81D8u);
    ctx->pc = 0x1F81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81D0u;
    // 0x1f81d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F81D0u, 0x1F81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81D8u;
label_1f81d8:
    // 0x1f81d8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F81D8u;
    {
        const bool branch_taken_0x1f81d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D8u;
        // 0x1f81dc: 0x26121600  addiu       $s2, $s0, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81d8) {
            ctx->pc = 0x1F820Cu;
            return;
        }
    }
    ctx->pc = 0x1F81E0u;
    // 0x1f81e0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f81e4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F81E4u;
    SET_GPR_U32(ctx, 31, 0x1F81ECu);
    ctx->pc = 0x1F81E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81E4u;
    // 0x1f81e8: 0x24844858  addiu       $a0, $a0, 0x4858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F81E4u, 0x1F81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81ECu;
label_1f81ec:
    // 0x1f81ec: 0x0  nop
    ctx->pc = 0x1f81ecu;
    // NOP
    ctx->pc = 0x1f81f0u;
}
