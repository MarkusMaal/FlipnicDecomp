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

// Function: entry_001d54f8
// Address: 0x1d54f8 - 0x1d5530
void entry_001d54f8_0x1d54f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d54f8_0x1d54f8");
#endif

    switch (ctx->pc) {
        case 0x1d5514u: goto label_1d5514;
        default: break;
    }

    ctx->pc = 0x1d54f8u;

    // 0x1d54f8: 0x26f00550  addiu       $s0, $s7, 0x550
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1360));
    // 0x1d54fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5500: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d5504: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5504u;
    {
        const bool branch_taken_0x1d5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5504) {
            ctx->pc = 0x1D5508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5504u;
            // 0x1d5508: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5530u;
            return;
        }
    }
    ctx->pc = 0x1D550Cu;
    // 0x1d550c: 0xc07726c  jal         func_1DC9B0
    ctx->pc = 0x1D550Cu;
    SET_GPR_U32(ctx, 31, 0x1D5514u);
    ctx->pc = 0x1D5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D550Cu;
    // 0x1d5510: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC9B0u, 0x1D550Cu, 0x1D5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5514u;
label_1d5514:
    // 0x1d5514: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5514u;
    {
        const bool branch_taken_0x1d5514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5514u;
        // 0x1d5518: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5514) {
            ctx->pc = 0x1D5530u;
            return;
        }
    }
    ctx->pc = 0x1D551Cu;
    // 0x1d551c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d5524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d5528: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d5528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d552c: 0x8ee30550  lw          $v1, 0x550($s7)
    ctx->pc = 0x1d552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
    ctx->pc = 0x1d5530u;
}
