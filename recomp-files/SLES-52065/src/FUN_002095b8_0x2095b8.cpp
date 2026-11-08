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

// Function: FUN_002095b8
// Address: 0x2095b8 - 0x2095e0
void FUN_002095b8_0x2095b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002095b8_0x2095b8");
#endif

    ctx->pc = 0x2095b8u;

    // 0x2095b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2095b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2095bc: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x2095c0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2095C0u;
    {
        const bool branch_taken_0x2095c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C0u;
        // 0x2095c4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095c0) {
            ctx->pc = 0x2095D8u;
            goto label_2095d8;
        }
    }
    ctx->pc = 0x2095C8u;
    // 0x2095c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2095cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2095ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2095d0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2095d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2095d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2095d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2095d8:
    // 0x2095d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2095D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2095DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D8u;
        // 0x2095dc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2095E0u;
}
