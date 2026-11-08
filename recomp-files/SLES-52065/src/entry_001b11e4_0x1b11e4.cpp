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

// Function: entry_001b11e4
// Address: 0x1b11e4 - 0x1b121c
void entry_001b11e4_0x1b11e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b11e4_0x1b11e4");
#endif

    switch (ctx->pc) {
        case 0x1b11ecu: goto label_1b11ec;
        default: break;
    }

    ctx->pc = 0x1b11e4u;

    // 0x1b11e4: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x1B11E4u;
    SET_GPR_U32(ctx, 31, 0x1B11ECu);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1B11E4u, 0x1B11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B11ECu;
label_1b11ec:
    // 0x1b11ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b11ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b11f0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b11f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b11f4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b11f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b11f8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b11f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b11fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b11fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1200: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b1200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1204: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b1204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1208: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b1208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b120c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b120cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1214u;
        // 0x1b1218: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B121Cu;
}
