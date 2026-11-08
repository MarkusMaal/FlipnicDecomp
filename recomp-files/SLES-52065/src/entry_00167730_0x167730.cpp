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

// Function: entry_00167730
// Address: 0x167730 - 0x16774c
void entry_00167730_0x167730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167730_0x167730");
#endif

    ctx->pc = 0x167730u;

    // 0x167730: 0xa6200220  sh          $zero, 0x220($s1)
    ctx->pc = 0x167730u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167734: 0xa6200228  sh          $zero, 0x228($s1)
    ctx->pc = 0x167734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    // 0x167738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16773c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16773cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167744: 0x3e00008  jr          $ra
    ctx->pc = 0x167744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167744u;
        // 0x167748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16774Cu;
}
