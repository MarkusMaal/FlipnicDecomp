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

// Function: entry_00149fbc
// Address: 0x149fbc - 0x149fdc
void entry_00149fbc_0x149fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149fbc_0x149fbc");
#endif

    switch (ctx->pc) {
        case 0x149fc4u: goto label_149fc4;
        default: break;
    }

    ctx->pc = 0x149fbcu;

    // 0x149fbc: 0xc050224  jal         func_140890
    ctx->pc = 0x149FBCu;
    SET_GPR_U32(ctx, 31, 0x149FC4u);
    ctx->pc = 0x149FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FBCu;
    // 0x149fc0: 0x27a404e0  addiu       $a0, $sp, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x149FBCu, 0x149FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FC4u;
label_149fc4:
    // 0x149fc4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149fc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x149fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x149fcc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149fd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x149fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x149fd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149fd8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x149fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x149fdcu;
}
