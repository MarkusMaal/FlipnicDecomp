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

// Function: entry_001aa1a4
// Address: 0x1aa1a4 - 0x1aa1ec
void entry_001aa1a4_0x1aa1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa1a4_0x1aa1a4");
#endif

    switch (ctx->pc) {
        case 0x1aa1bcu: goto label_1aa1bc;
        default: break;
    }

    ctx->pc = 0x1aa1a4u;

    // 0x1aa1a4: 0x26220820  addiu       $v0, $s1, 0x820
    ctx->pc = 0x1aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x1aa1a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AA1A8u;
    {
        const bool branch_taken_0x1aa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1a8) {
            ctx->pc = 0x1AA1ECu;
            return;
        }
    }
    ctx->pc = 0x1AA1B0u;
    // 0x1aa1b0: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x1aa1b4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1AA1B4u;
    SET_GPR_U32(ctx, 31, 0x1AA1BCu);
    ctx->pc = 0x1AA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1B4u;
    // 0x1aa1b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1AA1B4u, 0x1AA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1BCu;
label_1aa1bc:
    // 0x1aa1bc: 0x26240820  addiu       $a0, $s1, 0x820
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x1aa1c0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA1C0u;
    {
        const bool branch_taken_0x1aa1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1c0) {
            ctx->pc = 0x1AA1ECu;
            return;
        }
    }
    ctx->pc = 0x1AA1C8u;
    // 0x1aa1c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa1cc: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1aa1d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA1D0u;
    {
        const bool branch_taken_0x1aa1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D0u;
        // 0x1aa1d4: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1d0) {
            ctx->pc = 0x1AA1ECu;
            return;
        }
    }
    ctx->pc = 0x1AA1D8u;
    // 0x1aa1d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa1dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa1e0: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1aa1e4: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AA1E4u;
    SET_GPR_U32(ctx, 31, 0x1AA1ECu);
    ctx->pc = 0x1AA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1E4u;
    // 0x1aa1e8: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AA1E4u, 0x1AA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1ECu;
}
