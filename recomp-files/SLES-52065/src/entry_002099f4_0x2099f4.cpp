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

// Function: entry_002099f4
// Address: 0x2099f4 - 0x209a24
void entry_002099f4_0x2099f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002099f4_0x2099f4");
#endif

    ctx->pc = 0x2099f4u;

    // 0x2099f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2099f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2099f8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2099fc: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x2099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209a04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a08: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x209a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x209a0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209a10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209a14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x209A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A1Cu;
        // 0x209a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A24u;
}
