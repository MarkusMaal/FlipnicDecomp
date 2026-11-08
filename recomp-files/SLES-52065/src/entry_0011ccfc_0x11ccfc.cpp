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

// Function: entry_0011ccfc
// Address: 0x11ccfc - 0x11cd40
void entry_0011ccfc_0x11ccfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ccfc_0x11ccfc");
#endif

    switch (ctx->pc) {
        case 0x11cd38u: goto label_11cd38;
        default: break;
    }

    ctx->pc = 0x11ccfcu;

    // 0x11ccfc: 0x0  nop
    ctx->pc = 0x11ccfcu;
    // NOP
    // 0x11cd00: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x11cd04: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x11cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cd08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11cd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11cd0c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cd10: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x11cd10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cd14: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x11CD14u;
    {
        const bool branch_taken_0x11cd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd14) {
            ctx->pc = 0x11CD40u;
            return;
        }
    }
    ctx->pc = 0x11CD1Cu;
    // 0x11cd1c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11cd20: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11cd24: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11cd28: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CD28u;
    {
        const bool branch_taken_0x11cd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cd28) {
            ctx->pc = 0x11CD40u;
            return;
        }
    }
    ctx->pc = 0x11CD30u;
    // 0x11cd30: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CD30u;
    SET_GPR_U32(ctx, 31, 0x11CD38u);
    ctx->pc = 0x11CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD30u;
    // 0x11cd34: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CD30u, 0x11CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD38u;
label_11cd38:
    // 0x11cd38: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x11CD38u;
    {
        const bool branch_taken_0x11cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd38) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CD40u;
}
