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

// Function: entry_002050a4
// Address: 0x2050a4 - 0x2050d8
void entry_002050a4_0x2050a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002050a4_0x2050a4");
#endif

    switch (ctx->pc) {
        case 0x2050c8u: goto label_2050c8;
        default: break;
    }

    ctx->pc = 0x2050a4u;

    // 0x2050a4: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2050A4u;
    {
        const bool branch_taken_0x2050a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2050A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050A4u;
        // 0x2050a8: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050a4) {
            ctx->pc = 0x2050E0u;
            return;
        }
    }
    ctx->pc = 0x2050ACu;
    // 0x2050ac: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2050b0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2050b4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2050B4u;
    {
        const bool branch_taken_0x2050b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2050b4) {
            ctx->pc = 0x2050B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050B4u;
            // 0x2050b8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050DCu;
            return;
        }
    }
    ctx->pc = 0x2050BCu;
    // 0x2050bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2050bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2050c0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x2050C0u;
    SET_GPR_U32(ctx, 31, 0x2050C8u);
    ctx->pc = 0x2050C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050C0u;
    // 0x2050c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x2050C0u, 0x2050C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050C8u;
label_2050c8:
    // 0x2050c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2050C8u;
    {
        const bool branch_taken_0x2050c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050C8u;
        // 0x2050cc: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050c8) {
            ctx->pc = 0x2050D8u;
            return;
        }
    }
    ctx->pc = 0x2050D0u;
    // 0x2050d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2050d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2050d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2050d8u;
}
