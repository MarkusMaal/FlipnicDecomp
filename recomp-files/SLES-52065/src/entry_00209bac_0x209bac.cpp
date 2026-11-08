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

// Function: entry_00209bac
// Address: 0x209bac - 0x209be8
void entry_00209bac_0x209bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209bac_0x209bac");
#endif

    ctx->pc = 0x209bacu;

    // 0x209bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209bb0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209bb4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x209bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x209bb8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x209bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209bbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209bc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209bc4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x209bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x209bc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209bcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x209bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x209bd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209bd4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x209bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x209bd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209be0: 0x3e00008  jr          $ra
    ctx->pc = 0x209BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BE0u;
        // 0x209be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209BE8u;
}
