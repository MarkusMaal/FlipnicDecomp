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

// Function: entry_001c54b4
// Address: 0x1c54b4 - 0x1c54ec
void entry_001c54b4_0x1c54b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c54b4_0x1c54b4");
#endif

    switch (ctx->pc) {
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54e4u: goto label_1c54e4;
        default: break;
    }

    ctx->pc = 0x1c54b4u;

    // 0x1c54b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c54b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c54bc: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c54c0: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0
    ctx->pc = 0x1c54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    // 0x1c54c4: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1c54c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c54c8: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1C54C8u;
    SET_GPR_U32(ctx, 31, 0x1C54D0u);
    ctx->pc = 0x1C54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54C8u;
    // 0x1c54cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1C54C8u, 0x1C54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54D0u;
label_1c54d0:
    // 0x1c54d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C54D0u;
    {
        const bool branch_taken_0x1c54d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54d0) {
            ctx->pc = 0x1C54ECu;
            return;
        }
    }
    ctx->pc = 0x1C54D8u;
    // 0x1c54d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c54dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C54DCu;
    SET_GPR_U32(ctx, 31, 0x1C54E4u);
    ctx->pc = 0x1C54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54DCu;
    // 0x1c54e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C54DCu, 0x1C54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54E4u;
label_1c54e4:
    // 0x1c54e4: 0xc06eb5c  jal         func_1BAD70
    ctx->pc = 0x1C54E4u;
    SET_GPR_U32(ctx, 31, 0x1C54ECu);
    ctx->pc = 0x1C54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54E4u;
    // 0x1c54e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD70u, 0x1C54E4u, 0x1C54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C54ECu;
}
