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

// Function: entry_00200938
// Address: 0x200938 - 0x200964
void entry_00200938_0x200938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200938_0x200938");
#endif

    ctx->pc = 0x200938u;

    // 0x200938: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x200938u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x20093c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200940: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x200940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200944: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x200944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200948: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x200948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20094c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20094cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200950: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x200950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200954: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x200954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20095c: 0x3e00008  jr          $ra
    ctx->pc = 0x20095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20095Cu;
        // 0x200960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200964u;
}
