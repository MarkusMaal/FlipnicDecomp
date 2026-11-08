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

// Function: entry_00127a10
// Address: 0x127a10 - 0x127a20
void entry_00127a10_0x127a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127a10_0x127a10");
#endif

    switch (ctx->pc) {
        case 0x127a1cu: goto label_127a1c;
        default: break;
    }

    ctx->pc = 0x127a10u;

    // 0x127a10: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x127a14: 0xc05fbb4  jal         func_17EED0
    ctx->pc = 0x127A14u;
    SET_GPR_U32(ctx, 31, 0x127A1Cu);
    ctx->pc = 0x127A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A14u;
    // 0x127a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EED0u, 0x127A14u, 0x127A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A1Cu;
label_127a1c:
    // 0x127a1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x127a20u;
}
