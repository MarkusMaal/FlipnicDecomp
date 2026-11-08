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

// Function: entry_001bd488
// Address: 0x1bd488 - 0x1bd4a0
void entry_001bd488_0x1bd488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd488_0x1bd488");
#endif

    switch (ctx->pc) {
        case 0x1bd49cu: goto label_1bd49c;
        default: break;
    }

    ctx->pc = 0x1bd488u;

    // 0x1bd488: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd490: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd494: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD494u;
    SET_GPR_U32(ctx, 31, 0x1BD49Cu);
    ctx->pc = 0x1BD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD494u;
    // 0x1bd498: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD494u, 0x1BD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1bd4a0u;
}
