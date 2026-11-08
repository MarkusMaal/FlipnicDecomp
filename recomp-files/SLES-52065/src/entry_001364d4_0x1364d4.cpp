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

// Function: entry_001364d4
// Address: 0x1364d4 - 0x13650c
void entry_001364d4_0x1364d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001364d4_0x1364d4");
#endif

    switch (ctx->pc) {
        case 0x1364ecu: goto label_1364ec;
        default: break;
    }

    ctx->pc = 0x1364d4u;

    // 0x1364d4: 0x0  nop
    ctx->pc = 0x1364d4u;
    // NOP
    // 0x1364d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1364dc: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1364DCu;
    {
        const bool branch_taken_0x1364dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x1364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364DCu;
        // 0x1364e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364dc) {
            ctx->pc = 0x13650Cu;
            return;
        }
    }
    ctx->pc = 0x1364E4u;
    // 0x1364e4: 0xc04d954  jal         func_136550
    ctx->pc = 0x1364E4u;
    SET_GPR_U32(ctx, 31, 0x1364ECu);
    ctx->pc = 0x136550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136550u, 0x1364E4u, 0x1364ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364ECu;
label_1364ec:
    // 0x1364ec: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1364f0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1364f4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1364f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1364f8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x1364f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x1364fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1364fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136500: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x136500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136504: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x136504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x136508: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x136508u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x13650cu;
}
