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

// Function: entry_0011aa30
// Address: 0x11aa30 - 0x11aa58
void entry_0011aa30_0x11aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa30_0x11aa30");
#endif

    switch (ctx->pc) {
        case 0x11aa3cu: goto label_11aa3c;
        case 0x11aa4cu: goto label_11aa4c;
        default: break;
    }

    ctx->pc = 0x11aa30u;

    // 0x11aa30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa34: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA34u;
    SET_GPR_U32(ctx, 31, 0x11AA3Cu);
    ctx->pc = 0x11AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA34u;
    // 0x11aa38: 0x24a5e6e0  addiu       $a1, $a1, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA34u, 0x11AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA3Cu;
label_11aa3c:
    // 0x11aa3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa40: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aa44: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA44u;
    SET_GPR_U32(ctx, 31, 0x11AA4Cu);
    ctx->pc = 0x11AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA44u;
    // 0x11aa48: 0x24a5e6f8  addiu       $a1, $a1, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA44u, 0x11AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA4Cu;
label_11aa4c:
    // 0x11aa4c: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x11aa50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11AA50u;
    {
        const bool branch_taken_0x11aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA50u;
        // 0x11aa54: 0x26100b00  addiu       $s0, $s0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa50) {
            ctx->pc = 0x11AAB4u;
            return;
        }
    }
    ctx->pc = 0x11AA58u;
}
