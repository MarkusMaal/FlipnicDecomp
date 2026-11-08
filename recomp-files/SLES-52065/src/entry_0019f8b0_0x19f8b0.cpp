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

// Function: entry_0019f8b0
// Address: 0x19f8b0 - 0x19f8f0
void entry_0019f8b0_0x19f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f8b0_0x19f8b0");
#endif

    switch (ctx->pc) {
        case 0x19f8c8u: goto label_19f8c8;
        default: break;
    }

    ctx->pc = 0x19f8b0u;

    // 0x19f8b0: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x19F8B0u;
    {
        const bool branch_taken_0x19f8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f8b0) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F8B8u;
    // 0x19f8b8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f8bc: 0xdc442818  ld          $a0, 0x2818($v0)
    ctx->pc = 0x19f8bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x19f8c0: 0xc081a86  jal         func_206A18
    ctx->pc = 0x19F8C0u;
    SET_GPR_U32(ctx, 31, 0x19F8C8u);
    ctx->pc = 0x19F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8C0u;
    // 0x19f8c4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x19F8C0u, 0x19F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8C8u;
label_19f8c8:
    // 0x19f8c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f8cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f8ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f8d0: 0x28410063  slti        $at, $v0, 0x63
    ctx->pc = 0x19f8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x19f8d4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F8D4u;
    {
        const bool branch_taken_0x19f8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f8d4) {
            ctx->pc = 0x19F8F0u;
            return;
        }
    }
    ctx->pc = 0x19F8DCu;
    // 0x19f8dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8e8: 0xc064b08  jal         func_192C20
    ctx->pc = 0x19F8E8u;
    SET_GPR_U32(ctx, 31, 0x19F8F0u);
    ctx->pc = 0x19F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8E8u;
    // 0x19f8ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19F8E8u, 0x19F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8F0u;
}
