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

// Function: entry_00209984
// Address: 0x209984 - 0x2099b0
void entry_00209984_0x209984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209984_0x209984");
#endif

    ctx->pc = 0x209984u;

    // 0x209984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209988: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x20998c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20998cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x209990: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209998: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x209998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x20999c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20999cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2099a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2099a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2099a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2099a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2099A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099A8u;
        // 0x2099ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099B0u;
}
