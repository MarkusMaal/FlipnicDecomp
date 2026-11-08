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

// Function: entry_0013df28
// Address: 0x13df28 - 0x13df80
void entry_0013df28_0x13df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df28_0x13df28");
#endif

    switch (ctx->pc) {
        case 0x13df38u: goto label_13df38;
        case 0x13df54u: goto label_13df54;
        case 0x13df64u: goto label_13df64;
        default: break;
    }

    ctx->pc = 0x13df28u;

    // 0x13df28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df30: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13DF30u;
    SET_GPR_U32(ctx, 31, 0x13DF38u);
    ctx->pc = 0x13DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF30u;
    // 0x13df34: 0x24a5f020  addiu       $a1, $a1, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13DF30u, 0x13DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF38u;
label_13df38:
    // 0x13df38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13DF38u;
    {
        const bool branch_taken_0x13df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df38) {
            ctx->pc = 0x13DF84u;
            return;
        }
    }
    ctx->pc = 0x13DF40u;
    // 0x13df40: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13df44: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x13df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x13df48: 0x24a5f018  addiu       $a1, $a1, -0xFE8
    ctx->pc = 0x13df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963224));
    // 0x13df4c: 0xc0805e6  jal         func_201798
    ctx->pc = 0x13DF4Cu;
    SET_GPR_U32(ctx, 31, 0x13DF54u);
    ctx->pc = 0x13DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF4Cu;
    // 0x13df50: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x13DF4Cu, 0x13DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF54u;
label_13df54:
    // 0x13df54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13DF54u;
    {
        const bool branch_taken_0x13df54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df54) {
            ctx->pc = 0x13DF80u;
            return;
        }
    }
    ctx->pc = 0x13DF5Cu;
    // 0x13df5c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x13DF5Cu;
    SET_GPR_U32(ctx, 31, 0x13DF64u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13DF5Cu, 0x13DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF64u;
label_13df64:
    // 0x13df64: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x13df68: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x13df68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13df6c: 0x0  nop
    ctx->pc = 0x13df6cu;
    // NOP
    // 0x13df70: 0x0  nop
    ctx->pc = 0x13df70u;
    // NOP
    // 0x13df74: 0x1010  mfhi        $v0
    ctx->pc = 0x13df74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13df78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF78u;
    {
        const bool branch_taken_0x13df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF78u;
        // 0x13df7c: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df78) {
            ctx->pc = 0x13DF84u;
            return;
        }
    }
    ctx->pc = 0x13DF80u;
}
