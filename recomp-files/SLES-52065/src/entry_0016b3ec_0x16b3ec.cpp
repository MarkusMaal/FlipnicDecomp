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

// Function: entry_0016b3ec
// Address: 0x16b3ec - 0x16b418
void entry_0016b3ec_0x16b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b3ec_0x16b3ec");
#endif

    switch (ctx->pc) {
        case 0x16b404u: goto label_16b404;
        default: break;
    }

    ctx->pc = 0x16b3ecu;

    // 0x16b3ec: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x16b3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b3fc: 0xc05aae8  jal         func_16ABA0
    ctx->pc = 0x16B3FCu;
    SET_GPR_U32(ctx, 31, 0x16B404u);
    ctx->pc = 0x16B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3FCu;
    // 0x16b400: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABA0u, 0x16B3FCu, 0x16B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B404u;
label_16b404:
    // 0x16b404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b410: 0x3e00008  jr          $ra
    ctx->pc = 0x16B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B410u;
        // 0x16b414: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B418u;
}
