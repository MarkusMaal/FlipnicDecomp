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

// Function: entry_0014dcfc
// Address: 0x14dcfc - 0x14dd34
void entry_0014dcfc_0x14dcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dcfc_0x14dcfc");
#endif

    switch (ctx->pc) {
        case 0x14dd14u: goto label_14dd14;
        default: break;
    }

    ctx->pc = 0x14dcfcu;

    // 0x14dcfc: 0x0  nop
    ctx->pc = 0x14dcfcu;
    // NOP
    // 0x14dd00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14dd04: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x14DD04u;
    {
        const bool branch_taken_0x14dd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD04u;
        // 0x14dd08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd04) {
            ctx->pc = 0x14DD34u;
            return;
        }
    }
    ctx->pc = 0x14DD0Cu;
    // 0x14dd0c: 0xc05375c  jal         func_14DD70
    ctx->pc = 0x14DD0Cu;
    SET_GPR_U32(ctx, 31, 0x14DD14u);
    ctx->pc = 0x14DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD70u, 0x14DD0Cu, 0x14DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD14u;
label_14dd14:
    // 0x14dd14: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14dd18: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14dd1c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x14dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x14dd20: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x14dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x14dd24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dd28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dd2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14dd30: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x14dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x14dd34u;
}
