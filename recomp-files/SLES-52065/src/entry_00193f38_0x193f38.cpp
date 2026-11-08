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

// Function: entry_00193f38
// Address: 0x193f38 - 0x193f90
void entry_00193f38_0x193f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193f38_0x193f38");
#endif

    switch (ctx->pc) {
        case 0x193f6cu: goto label_193f6c;
        case 0x193f74u: goto label_193f74;
        case 0x193f8cu: goto label_193f8c;
        default: break;
    }

    ctx->pc = 0x193f38u;

    // 0x193f38: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x193F38u;
    {
        const bool branch_taken_0x193f38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x193f38) {
            ctx->pc = 0x193F90u;
            return;
        }
    }
    ctx->pc = 0x193F40u;
    // 0x193f40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193f48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x193f54: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x193f58: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x193f5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x193f60: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x193f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193f64: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x193F64u;
    SET_GPR_U32(ctx, 31, 0x193F6Cu);
    ctx->pc = 0x193F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F64u;
    // 0x193f68: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x193F64u, 0x193F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F6Cu;
label_193f6c:
    // 0x193f6c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x193F6Cu;
    SET_GPR_U32(ctx, 31, 0x193F74u);
    ctx->pc = 0x193F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F6Cu;
    // 0x193f70: 0xaf908700  sw          $s0, -0x7900($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x193F6Cu, 0x193F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F74u;
label_193f74:
    // 0x193f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f84: 0xc047578  jal         func_11D5E0
    ctx->pc = 0x193F84u;
    SET_GPR_U32(ctx, 31, 0x193F8Cu);
    ctx->pc = 0x193F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F84u;
    // 0x193f88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x193F84u, 0x193F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F8Cu;
label_193f8c:
    // 0x193f8c: 0xaf8286fc  sw          $v0, -0x7904($gp)
    ctx->pc = 0x193f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
    ctx->pc = 0x193f90u;
}
