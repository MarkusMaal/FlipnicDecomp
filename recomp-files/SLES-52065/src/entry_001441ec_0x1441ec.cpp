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

// Function: entry_001441ec
// Address: 0x1441ec - 0x144224
void entry_001441ec_0x1441ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001441ec_0x1441ec");
#endif

    switch (ctx->pc) {
        case 0x144204u: goto label_144204;
        default: break;
    }

    ctx->pc = 0x1441ecu;

    // 0x1441ec: 0x0  nop
    ctx->pc = 0x1441ecu;
    // NOP
    // 0x1441f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1441f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1441f4: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1441F4u;
    {
        const bool branch_taken_0x1441f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x1441F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441F4u;
        // 0x1441f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441f4) {
            ctx->pc = 0x144224u;
            return;
        }
    }
    ctx->pc = 0x1441FCu;
    // 0x1441fc: 0xc0510b0  jal         func_1442C0
    ctx->pc = 0x1441FCu;
    SET_GPR_U32(ctx, 31, 0x144204u);
    ctx->pc = 0x1442C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442C0u, 0x1441FCu, 0x144204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144204u;
label_144204:
    // 0x144204: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x144204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144208: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x144208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14420c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14420cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x144210: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x144210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x144214: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144218: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14421c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x144220: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x144220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x144224u;
}
