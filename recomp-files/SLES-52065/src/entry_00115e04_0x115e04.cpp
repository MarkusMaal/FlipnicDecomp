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

// Function: entry_00115e04
// Address: 0x115e04 - 0x115e1c
void entry_00115e04_0x115e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e04_0x115e04");
#endif

    ctx->pc = 0x115e04u;

    // 0x115e04: 0x922301f4  lbu         $v1, 0x1F4($s1)
    ctx->pc = 0x115e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x115e08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x115e0c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x115e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x115e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e14: 0xc045018  jal         func_114060
    ctx->pc = 0x115E14u;
    SET_GPR_U32(ctx, 31, 0x115E1Cu);
    ctx->pc = 0x115E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E14u;
    // 0x115e18: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114060u, 0x115E14u, 0x115E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E1Cu;
}
