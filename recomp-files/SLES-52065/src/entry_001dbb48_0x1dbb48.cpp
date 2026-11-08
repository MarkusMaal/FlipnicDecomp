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

// Function: entry_001dbb48
// Address: 0x1dbb48 - 0x1dbb78
void entry_001dbb48_0x1dbb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbb48_0x1dbb48");
#endif

    ctx->pc = 0x1dbb48u;

    // 0x1dbb48: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1dbb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1dbb4c: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1dbb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1dbb50: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1dbb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1dbb54: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1dbb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1dbb58: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1dbb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1dbb5c: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1dbb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1dbb60: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1dbb60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1dbb64: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1dbb64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1dbb68: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x1dbb68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1dbb6c: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x1dbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1dbb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB70u;
        // 0x1dbb74: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB78u;
}
