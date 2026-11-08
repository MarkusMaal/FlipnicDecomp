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

// Function: entry_00100c08
// Address: 0x100c08 - 0x100c3c
void entry_00100c08_0x100c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100c08_0x100c08");
#endif

    switch (ctx->pc) {
        case 0x100c1cu: goto label_100c1c;
        case 0x100c28u: goto label_100c28;
        case 0x100c34u: goto label_100c34;
        default: break;
    }

    ctx->pc = 0x100c08u;

    // 0x100c08: 0x92430078  lbu         $v1, 0x78($s2)
    ctx->pc = 0x100c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x100c0c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x100C0Cu;
    {
        const bool branch_taken_0x100c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C0Cu;
        // 0x100c10: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c0c) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100C14u;
    // 0x100c14: 0xc05621c  jal         func_158870
    ctx->pc = 0x100C14u;
    SET_GPR_U32(ctx, 31, 0x100C1Cu);
    ctx->pc = 0x100C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C14u;
    // 0x100c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x100C14u, 0x100C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C1Cu;
label_100c1c:
    // 0x100c1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c20: 0xc04c6f0  jal         func_131BC0
    ctx->pc = 0x100C20u;
    SET_GPR_U32(ctx, 31, 0x100C28u);
    ctx->pc = 0x100C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C20u;
    // 0x100c24: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x100C20u, 0x100C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C28u;
label_100c28:
    // 0x100c28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c2c: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x100C2Cu;
    SET_GPR_U32(ctx, 31, 0x100C34u);
    ctx->pc = 0x100C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C2Cu;
    // 0x100c30: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100C2Cu, 0x100C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C34u;
label_100c34:
    // 0x100c34: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100c34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x100c38: 0x7e4601e0  sq          $a2, 0x1E0($s2)
    ctx->pc = 0x100c38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
    ctx->pc = 0x100c3cu;
}
